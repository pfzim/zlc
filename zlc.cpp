// zlc.cpp : Defines the entry point for the console application.
//

#include "zl.h"
//#include "zl_parser.h"
//#include "zl_opcodes.h"
#include "zl_compiler.h"
#include "zl_decompile.h"
#include "autobuild.h"
#include <string.h>
#include <malloc.h>
#include <stdio.h>
//#include <time.h>
#include "../zinc/utstrings.h"
#include "../zinc/base64.h"
#include "../zinc/snprintf.h"
#include "../zinc/zibuffer.h"

// *** demo funcs ****************************

unsigned long __stdcall fn_test(unsigned long prm1, unsigned long prm2, unsigned long prm3)
{
	printf("fn_test: prm1: %u, prm2: %u, prm3: %u\n", prm1, prm2, prm3);

	return prm1 + prm2 + prm3;
}

unsigned long __stdcall fn_text(char *message)
{
	printf("%s\n", message);

	return 0;
}

unsigned long fn_test_loop(char *message, unsigned long itr)
{
	printf("[%u] %s\n", itr, message);

	return (itr >= 99)?1:0;
}

unsigned long fn_pint(unsigned long itr)
{
	printf("[%u]", itr);

	return 0;
}

unsigned long fn_setcolor(unsigned long color)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	if(hStdout != INVALID_HANDLE_VALUE)
	{
		SetConsoleTextAttribute(hStdout, color);
	}
	return 0;
}

unsigned long fn_isset(char *text)
{
	return !isempty(text);
}

unsigned long fn_msg(char *text)
{
	printf("%s\n", text);
	return 0;
}

char *fn_merge(char **text1, char *text2)
{
	return alloc_strcat(text1, text2);
}

char *fn_encode(char *text)
{
	return (char *) alloc_en64((const unsigned char *) text, strlen(text));
}

char *fn_decode(char *text)
{
	return (char *)alloc_de64((const char *)text, NULL);
}

unsigned long fn_free(char *text)
{
	free_str(text);
	return 0L;
}

void *fn_alloc(unsigned long size)
{
	return zalloc(size);
}

unsigned long fn_print(char *message)
{
	printf("%s", message);

	return 0;
}

unsigned long fn_print2(char *message, char *t)
{
	printf("%s %s", message, t);

	return 0;
}

unsigned long fn_printn(unsigned long n)
{
	printf("%u", n);

	return 0;
}

unsigned long fn_printh(unsigned long n)
{
	printf("0x%X", n);

	return 0;
}

unsigned long strcmp2(char *m1, char *m2)
{
	//printf("%.8X = %.8X\n", m1, m2);

	return strcmp(m1, m2);
}

// *** end demo funcs ************************

int test(char p1[][5], char p2[5][5], char *p3[][5], char *p4[5][5])
{
	printf("p1: %u\n", sizeof(p1[1]));
	printf("p2: %u\n", sizeof(p2[1]));
	printf("p3: %u\n", sizeof(p3[1]));
	printf("p4: %u\n", sizeof(p4[1]));

	int *i;

	i = 0;

	*(int *)0 = 4;

	return 0;
}

int main(int argc, char *argv[])
{
	printf("zlc (z language compiler) test version. build# " __BUILD_STR__ "\n\n");
	printf("Hello World!\n");
	printf("double: %u, float: %u, ulong: %u, usint: %u\n", sizeof(double), sizeof(float), sizeof(unsigned long), sizeof(unsigned short int));

	//return test(0, 0, 0, 0);

	// external variable
	unsigned long action = 3;
	char *ext_names[] =
		{
			"1.                                                     PASSED\n",
			"2.                                                     PASSED\n",
			"3.                                                     PASSED\n",
			"4.                                                     PASSED\n",
			"5.                                                     PASSED\n",
			"6.                                                     FAILED\n",
		};

	// lea eax, [ebp-4] - �������� �������� ebp-4 � eax
	// mov eax, [ebp-4] - �������� �������� �� ������ ebp-4 � eax

	// user defined table
	zl_funcs_list fn_list[] = {
		{"print",	fn_print},
		{"print2",	fn_print2},
		{"printn",	fn_printn},
		{"printh",	fn_printh},
		{"msg",		fn_msg},
		{"strcmp",	strcmp},
		{"strcmp2",	strcmp2},
		{"isset",	fn_isset},
		{"merge",	fn_merge},
		{"encode",	fn_encode},
		{"decode",	fn_decode},
		{"free",	fn_free},
		{"settextcolor",	fn_setcolor},
		{NULL,		NULL}
		};

//		{"isset",			1,		fn_isset,			ZLF_CLEAR_STACK},
//		{"merge",			2,		fn_merge,			ZLF_CLEAR_STACK},
//		{"encode",			1,		fn_encode,			ZLF_CLEAR_STACK},
//		{"free",			1,		fn_free,			ZLF_CLEAR_STACK},
//		{"alloc",			1,		fn_alloc,			ZLF_CLEAR_STACK},
//		{"fn_test",			3,		fn_test,			0},
//		{"fn_text",			1,		fn_text,			0},
//		{"fn_loop",			2,		fn_test_loop,		ZLF_CLEAR_STACK},
//		{"p",				1,		fn_pint,			ZLF_CLEAR_STACK},

	// data generated by zl_compile (global variables)
	unsigned char *hardcode;
	unsigned long hard_code_size;
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

	//unsigned char *data_table;
	//unsigned long vars_count;

	//zl_names_map *vars_map;

	// temporary local variables
	//unsigned long *vars_table;
	//void **map_table;
	char *error_msg;
	char *warning_msg;

	int need_compile;
	int need_execute;
	int need_save;

	/*
	char data_table[] = {"Hello, User!\0More data!\0Next block internal vars\0"};
	unsigned long vars_count = 1;

	unsigned char hardcode[] = {
		OP_PUSH_REG, REG_EAX,
		OP_PUSH_REG, REG_ECX,

		OP_MOV_REG_MEM, REG_ECX, sdw(0),

		//OP_PRINT_DBG,
		OP_PUSH_REG, REG_ECX,
		OP_PUSH_OFFSET, sdw(13),
		OP_CALL, sdw(2*16),

		OP_ADD_REG_IMM, REG_ECX, sdw(1),

		OP_MOV_MEM_REG, sdw(0), REG_ECX,

		OP_CMP_REG_IMM, REG_EAX, sdw(1),
		OP_JNE, sdw(10),

		OP_POP_REG, REG_ECX,
		OP_POP_REG, REG_EAX,

		OP_PRINT_DBG,

		OP_EOF
	};

	zl_names_map mapvars[] = {
		{"ext_var",		0},
		{NULL,			NULL}
		};
	*/

/*
	char code[] =
	"extern unsigned long *ext_var = 2+2*2+90;\n"
	"_asm\n"
	"{\n"
	"	dbg_print_regs\n"
	"	push eax\n"
	"	push ecx\n"
	"\n"
	"	mov ecx, [ext_var]\n"
	"lb_again:\n"
	"	push ecx\n"
	"	push \"some text\"\n"
	"	call fn_loop\n"
	"	add ecx, 1\n"
	"	mov [ext_var], ecx\n"
	"	test eax, eax\n"
	"	jz lb_again\n"
	"lb_exit:\n"
	"	dbg_print_regs\n"
	"	pop ecx\n"
	"	pop eax\n"
	"	dbg_print_regs\n"
	"	nop\n"
	"	nop\n"
	"	nop\n"
	"	nop\n"
	"	nop\n"
	"	nop\n"
	"	nop\n"
	"	nop\n"
	"}\n"
	"\n"
	"_asm {\n"
	"   //dbg_print_regs\n"
	"}\n"

	unsigned char hardcode[] = {
		OP_JMP, sdw(11),
		OP_MOV_REG_IMM, REG_EAX, sdw(1),
		OP_RET,

		OP_MOV_REG_IMM, REG_EAX, sdw(0),
		OP_RCALL, sdw(-14),
		
		OP_DBG_PRINT,

		OP_EOF
	};
//*/
	"";

	//char x[][3] = {1,2,3, 4,5,6, 7,8,9, 10,11,12};
	//printf("%u\n\n", sizeof(x[1]));
	//int x;
	//x = 0;
	//printf("%d, %d, %d, %d", x = 1, x, x = 3, x);
	//GetProcAddress(0, 0);
	//return 0L;

	//zl_compile(&hardcode, &data_table, &vars_count, fn_list, "code here: expr = expr + expr;", &vars_map);
	//zl_load_file(&hardcode, &data_table, &vars_count, "filename.zlc"[, &vars_map]);

	char *header, *referer, *method, *protocol, *uri, *host, *port, *query;

	referer = "http://www.ya.ru/";
	method = "GET";
	protocol = "HTTP/1.0";
	uri = "/test.php";
	query = "action=edit";
	port = "3128";
	host = "example.com";

	header = NULL;

	EXTBUFFER zb;
	char *code;

	need_compile = 0;
	need_execute = 0;
	need_save = 0;

	if(argc < 3)
	{
		printf("Usage: zlc -e <script.pzl> | -c <script file name> <output file name> | -r <code.pzb>\n");
		printf("  -c <script.pzl> <code.pzb>    - compile to byte-code\n");
		printf("  -e <script.pzl>               - compile and execute\n");
		printf("  -r <code.pzb>                 - execute byte-code\n");
		return 0;
	}

	if(strcmp(argv[1], "-c") == 0)
	{
		need_compile = 1;
		need_execute = 0;
		need_save = 1;
		if(argc < 4)
		{
			printf("Invalid argument syntax\n");
			return 1;
		}
	}
	else if(strcmp(argv[1], "-e") == 0)
	{
		need_compile = 1;
		need_execute = 1;
		need_save = 0;
	}
	else if(strcmp(argv[1], "-r") == 0)
	{
		need_compile = 0;
		need_execute = 1;
		need_save = 0;
	}
	else
	{
		printf("Invalid argument\n");
		return 1;
	}

	const_sect = NULL;
	const_size = 0;
	data_sect = NULL;
	data_size = 0;
	reloc_sect = NULL;
	reloc_size = 0;
	import_sect = NULL;
	import_size = 0;
	export_sect = NULL;
	export_size = 0;
	map_sect = NULL;
	map_size = 0;

	if(need_compile)
	{
		if(__initbufferedread(argv[2], &zb, 32768))
		{
			code = __alloc_getblock(&zb, 0, zb.dwFileSize);
			__destructbufferedreadwrite(&zb);
		}
		else
		{
			printf("can not open file!\n");
			return 0;
		}

		//printf("source:\n%s\n", code);

		printf("compiling...\n");

		//if(!zl_compile(&hardcode, &data_table,/* &vars_count,*/ fn_list, code, &vars_map, &error_msg))
		if(!zl_compile(&hardcode, &hard_code_size, code, &warning_msg, &error_msg,
			NULL, NULL,
			//&const_sect, &const_size,
			NULL, NULL,
			//&data_sect, &data_size,
			NULL, NULL,
			//&reloc_sect, &reloc_size,
			NULL, NULL,
			//&import_sect, &import_size,
			NULL, NULL,
			//&export_sect, &export_size,
			NULL, NULL
			//&map_sect, &map_size
		))
		{
			if(!isempty(warning_msg))
			{
				printf("%s\n", warning_msg);
			}

			if(need_save)
			{
				/*
				// encode save data
				srand((unsigned) time(NULL));
				char *out_data = (char *)zalloc((hard_code_size - (*(unsigned long *)&hardcode[18])) * 8 + (*(unsigned long *)&hardcode[18]));
				unsigned long j = 0;
				unsigned long k = 0;
				unsigned long n = 0;
				for(j = 0; j < 72; j++)
				{
					for(k = 0; k < 8; k++, n++)
					{
						out_data[n] = ((hardcode[j] >> k) & 0x1)?0:((rand()%254)+1);
					}
				}

				for(; j - 72 < *(unsigned long *) &hardcode[18]; j++, n++)
				{
					out_data[n] = hardcode[j];
				}

				for(; j < hard_code_size; j++)
				{
					for(k = 0; k < 8; k++, n++)
					{
						out_data[n] = ((hardcode[j] >> k) & 0x1)?0:((rand() % 254) + 1);
					}
				}
				*/

				if(__initbufferedwrite(argv[3], &zb, 32768))
				{
					__addblock(&zb, (char *)hardcode, hard_code_size);
					//__addblock(&zb, (char *)out_data, (hard_code_size - (*(unsigned long *)&hardcode[18])) * 8 + (*(unsigned long *)&hardcode[18]));
					__donebufferedwrite(&zb);
					__destructbufferedreadwrite(&zb);
				}
				//zfree(out_data);
			}

			zfree(warning_msg);
			zfree(code);
		}
		else
		{
			printf("%s\n", error_msg);
			zfree(error_msg);

			zfree(warning_msg);

			//zl_free(&hardcode, NULL, &data_table, &vars_map);
			zl_free(hardcode, NULL, NULL, NULL, NULL, NULL, NULL);
			//zl_free(hardcode, const_sect, data_sect, reloc_sect, import_sect, export_sect, map_sect);

			zfree(code);

			return 1;
		}
	}
	else
	{
		if(__initbufferedread(argv[2], &zb, 32768))
		{
			unsigned char *in_data;
			hardcode = (unsigned char *) __alloc_getblock(&zb, 0, zb.dwFileSize);
			hard_code_size = zb.dwFileSize;

			/*
			// decode saved data
			hardcode = (unsigned char *)zalloc(hard_code_size);
			unsigned long j = 0;
			unsigned long k = 0;
			unsigned long n = 0;
			for(j = 0; j < 72; j++)
			{
				hardcode[j] = 0;
				for(k = 0; k < 8; k++, n++)
				{
					hardcode[j] |= ((in_data[n]) == 0)?1<<k:0;
				}
			}
			for(; j - 72 < *(unsigned long *)&hardcode[18]; j++, n++)
			{
				hardcode[j] = in_data[n];
			}

			for(; n < hard_code_size; j++)
			{
				hardcode[j] = 0;
				for(k = 0; k < 8; k++, n++)
				{
					hardcode[j] |= ((in_data[n]) == 0)?1 << k:0;
				}
			}

			hard_code_size = j;
			*/
			__destructbufferedreadwrite(&zb);
		}
		else
		{
			printf("can not open file!\n");
			return 0;
		}
	}

	printf("disassembled:\n");
	zl_decompile(hardcode, 0, 72);
	printf("\n");
	zl_decompile(hardcode, (*(unsigned long *)(&hardcode[18])) + 72, (*(unsigned long *)(&hardcode[23])) - (*(unsigned long *)(&hardcode[18])) - 72);
	fflush(NULL);

	//return 0;

	if(need_execute)
	{
		/*
		zl_memtable_make2(&map_table, vars_map);
		*/

		// call main() function
		//zl_init(zl_offset("main", (zl_export_section *)export_sect, export_size / sizeof(zl_export_section)), hardcode, stack, regs, const_sect, data_sect, reloc_sect, import_sect);

		// start from entry point
		zl_init(0, hardcode, stack, regs, const_sect, data_sect, reloc_sect, import_sect);

		if(!reloc_sect)
		{
			reloc_sect = (unsigned char *)((unsigned long)hardcode) + *(unsigned long *)(&hardcode[33]);
			reloc_size = *(unsigned long *)(&hardcode[38]);
		}

		if(!import_sect)
		{
			import_sect = (unsigned char *)((unsigned long)hardcode) + *(unsigned long *)(&hardcode[43]);
			import_size = *(unsigned long *)(&hardcode[48]);
		}

		if(!map_sect)
		{
			map_sect = (unsigned char *)((unsigned long)hardcode) + *(unsigned long *)(&hardcode[63]);
			map_size = *(unsigned long *)(&hardcode[68]);
		}

		//printf("map_sect offset: %d, size: %d\n", map_sect - hardcode, map_size);
		zl_load_functions(import_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), fn_list, &modules);

		zl_set(reloc_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), "action", &action);
		zl_set(reloc_sect, (zl_map_section *)map_sect, map_size / sizeof(zl_map_section), "ext_names", &ext_names);

		printf("executing...\n");
		//zl_execute(hardcode, data_table, map_table, fn_list);
		//zl_execute(hardcode, data_table, map_table, fn_list);
		//zl_execute(hardcode, NULL, NULL, NULL, NULL);
		//zl_execute(hardcode, data_sect, const_sect, reloc_sect, import_sect);

		zl_push(regs, dw(&header));
		zl_push(regs, dw(referer));
		zl_push(regs, dw(method));
		zl_push(regs, dw(protocol));
		zl_push(regs, dw(uri));
		zl_push(regs, dw(host));
		zl_push(regs, dw(port));
		zl_push(regs, dw(query));

		zl_call(regs);

		zl_pop(regs, 8);

		zl_unload_modules(modules);

		//zl_free(NULL, &map_table, NULL, NULL);

		printf("after execute: action = %d\n", action);
	}
	//printf("after execute: header:\n%s\n", header);

	//zl_free(&hardcode, NULL, &data_table, &vars_map);
	zl_free(hardcode, NULL, NULL, NULL, NULL, NULL, NULL);
	//zl_free(hardcode, const_sect, data_sect, reloc_sect, import_sect, export_sect, map_sect);

	return 0;
}

