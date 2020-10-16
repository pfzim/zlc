# [zlc - small and simple interpreter for easy integration to application](https://github.com/pfzim/zlc)

```C++
int **zl_compile**(
	unsigned char **hardcode,
	unsigned long *hard_code_size,
	char *code,
	char **warning_msg,
	char **error_msg,
	unsigned char **const_sect,
	unsigned long *const_size,
	unsigned char **data_sect,
	unsigned long *data_size,
	unsigned char **reloc_sect,
	unsigned long *reloc_size,
	unsigned char **import_sect,
	unsigned long *import_size,
	unsigned char **export_sect,
	unsigned long *export_size,
	unsigned char **map_sect,
	unsigned long *map_size
);
```
```
- hardcode [out]
    Compiled byte-code

- hard_code_size [out]
    Size of byte-code

- code [in]
    Source code

- warning_msg [out, optional]
    This parameter can be NULL.

- error_msg [out, optional]
    This parameter can be NULL.

- const_sect [out, optional]
    .const section. If this parameter NULL, then section merged with hardcode.

- const_size [out, optional]
    This parameter can be NULL.

- data_sect [out, optional]
    .data section. If this parameter NULL, then section merged with hardcode.

- data_size [out, optional]
    This parameter can be NULL.

- reloc_sect [out, optional]
    .reloc section. If this parameter NULL, then section merged with hardcode.

- reloc_size [out, optional]
    This parameter can be NULL.

- import_sect [out, optional]
    .import section. If this parameter NULL, then section merged with hardcode.

- import_size [out, optional]
    This parameter can be NULL.

- export_sect [out, optional]
    .export section. If this parameter NULL, then section merged with hardcode.

- export_size [out, optional]
    This parameter can be NULL.

- map_sect [out, optional]
    .const section. If this parameter NULL, then section merged with hardcode.

- map_size [out, optional]
    This parameter can be NULL.
```

## Embedding to your application

### Example 1

```C++
#include "zl.h"                 // interpreter
#include "zl_compiler.h"        // compiler
```
```C++
unsigned char *byte_code;
unsigned long byte_code_size;
unsigned char *const_sect;
unsigned long const_size;
unsigned char *data_sect;
unsigned long data_size;
unsigned char *import_sect;
unsigned long import_size;
unsigned char *reloc_sect;
unsigned long reloc_size;

unsigned char *export_sect;
unsigned long export_size;
unsigned char *map_sect;
unsigned long map_size;

unsigned long *modules;

unsigned long stack[ZL_STACK_SIZE];
unsigned long regs[REG_COUNT];

if(!zl_compile(/* out */ &byte_code, &byte_code_size, /* in */ source_code, &warning_msg, &error_msg,
	&const_sect, &const_size,
	&data_sect, &data_size,
	&reloc_sect, &reloc_size,
	&import_sect, &import_size,
	&export_sect, &export_size,
	&map_sect, &map_size
))
{
	// Initialize registers and set entrypoint

	zl_init(0, byte_code, stack, regs, const_sect, data_sect, reloc_sect, import_sect);

	// Fill .import section with external function addresses

	zl_load_functions(import_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), fn_list, &modules);

	// Fill .reloc section with addresses of external variables

	zl_set(reloc_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), "ext_variable", &ext_variable);
	zl_set(reloc_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), "ext_name", &ext_name);

	// Execute from entrypoint

	zl_call(regs);

	zl_unload_modules(modules);

	zl_free(byte_code, const_sect, data_sect, reloc_sect, import_sect, export_sect, map_sect);
}

zfree(error_msg);
zfree(warning_msg);
```

### Example 2

```C++
#include "zl.h"                 // interpreter
#include "zl_compiler.h"        // compiler
```
```C++
unsigned char *byte_code;
unsigned long byte_code_size;
unsigned char *const_sect;
unsigned long const_size;
unsigned char *data_sect;
unsigned long data_size;
unsigned char *import_sect;
unsigned long import_size;
unsigned char *reloc_sect;
unsigned long reloc_size;

unsigned char *export_sect;
unsigned long export_size;
unsigned char *map_sect;
unsigned long map_size;

unsigned long *modules;

unsigned long stack[ZL_STACK_SIZE];
unsigned long regs[REG_COUNT];

if(!zl_compile(/* out */ &byte_code, &byte_code_size, /* in */ source_code, &warning_msg, &error_msg,
	&const_sect, &const_size,
	&data_sect, &data_size,
	&reloc_sect, &reloc_size,
	&import_sect, &import_size,
	&export_sect, &export_size,
	&map_sect, &map_size
))
{
	// Guide entrypoint to main function

	zl_init(zl_offset("main", (zl_export_section *)export_sect, export_size / sizeof(zl_export_section)), byte_code, stack, regs, const_sect, data_sect, reloc_sect, import_sect);

	zl_load_functions(import_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), fn_list, &modules);

	zl_set(reloc_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), "ext_variable", &ext_variable);
	zl_set(reloc_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), "ext_name", &ext_name);

	// Push function arguments to stack and call main(argc, argv);
	
	zl_push(regs, dw(argv));
	zl_push(regs, dw(argc));

	zl_call(regs);

	// Free stack

	zl_pop(regs, 2);

	zl_unload_modules(modules);

	zl_free(byte_code, const_sect, data_sect, reloc_sect, import_sect, export_sect, map_sect);
}

zfree(error_msg);
zfree(warning_msg);
```

### Example 3 - Minimal (all sections merged with byte_code)

```C++
#include "zl.h"                 // interpreter
#include "zl_compiler.h"        // compiler
```
```C++
unsigned char *byte_code;
unsigned long byte_code_size;

unsigned char *import_sect;
unsigned long import_size;
unsigned char *map_sect;
unsigned long map_size;

unsigned long *modules;

unsigned long stack[ZL_STACK_SIZE];
unsigned long regs[REG_COUNT];

if(!zl_compile(/* out */ &byte_code, &byte_code_size, /* in */ source_code, NULL, NULL,
	NULL, NULL,
	NULL, NULL,
	NULL, NULL,
	NULL, NULL,
	NULL, NULL,
	NULL, NULL
))
{
	import_sect = (unsigned char *)((unsigned long)hardcode) + *(unsigned long *)(&hardcode[43]);
	import_size = *(unsigned long *)(&hardcode[48]);
	map_sect = (unsigned char *)((unsigned long)hardcode) + *(unsigned long *)(&hardcode[63]);
	map_size = *(unsigned long *)(&hardcode[68]);

	zl_init(0, byte_code, stack, regs, NULL, NULL, NULL, NULL);

	zl_load_functions(import_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), fn_list, &modules);

	zl_call(regs);

	zl_unload_modules(modules);

	zl_free(byte_code, NULL, NULL, NULL, NULL NULL, NULL);
}

zfree(error_msg);
zfree(warning_msg);
```

### Sample script

```C
import __cdecl print(char *);
import __stdcall int MessageBoxA(unsigned long, char *, char *, unsigned long) from "user32.dll";

extern unsigned long ext_var;
extern char *ext_name;

function int main(int argc, char *argv[])
{
	print("Hello, world!\n");
}
```
