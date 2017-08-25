//#include "stdafx.h"
#include "zl_decompile.h"
#include "zl_opcodes.h"
//#include <string.h>
//#include <zalloc.h>
#include <stdio.h>
//#include "../zinc/utstrings.h"


char *reg(unsigned long k)
{
	static char *regs[] = {"eip", "esp", "eax", "ecx", "ebx", "edx", "ebp", "esd", "ebd", "esi", "edi", "eflags"};
	static char error_str[256] = "";

	if(k > ((sizeof(regs)/sizeof(regs[0])) - 1))
	{
		snprintf(error_str, 255, "Bad code, invalid register id (=%u)", k);
		return error_str;
	}

	return regs[k];
}

unsigned long zl_decompile(unsigned char *hardcode, unsigned long offset, unsigned long hard_code_size)
{
	unsigned long zl_eip;
	unsigned long zl_eof;

	zl_eip = dw(hardcode) + offset;
	zl_eof = dw(hardcode) + offset + hard_code_size;

	while(zl_eip < zl_eof)
	{
		switch(instr(zl_eip))
		{
			case OP_POP_REG:
				nextinstr(zl_eip);
				printf("%.4u:   pop %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)));
				zl_eip++;
				continue;
			case OP_POP_MEM:
				nextinstr(zl_eip);
				printf("%.4u:   pop [%.4Xh]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_PUSH_REG:
				nextinstr(zl_eip);
				printf("%.4u:   push %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)));
				zl_eip++;
				continue;
			case OP_PUSH_IMM:
				nextinstr(zl_eip);
				printf("%.4u:   push %d\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_PUSH_OFFSET:
				nextinstr(zl_eip);
				printf("%.4u:   push data offset [%.4d]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_PUSH_FUNC:
				nextinstr(zl_eip);
				printf("%.4u:   push func address [%.4d]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_PUSH_MEM:
				nextinstr(zl_eip);
				printf("%.4u:   push var value [%.4Xh]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_PUSH_PMEM:
				nextinstr(zl_eip);
				printf("%.4u:   push dword ptr to value [%.4Xh]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_CMP_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   cmp %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip + 1)));
				zl_eip += 2;
				continue;
			case OP_TEST_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   test %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_ADD_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   add %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_SUB_REG_IMM:
				nextinstr(zl_eip);
				printf("%.4u:   sub %s, %u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), pdw(zl_eip+1));
				zl_eip += 5;
				continue;
			case OP_SUB_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   sub %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_MUL_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   mul %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_DIV_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   div %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_MOD_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   mod %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_G_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   g %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_GE_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   ge %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_LE_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   le %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_L_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   l %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_E_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   e %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_NE_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   ne %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_OR_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   or %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_AND_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   and %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_SHR_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   and %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_SHL_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   and %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_XOR_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   xor %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_MOV_REG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   mov %s, %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_MOV_PREG_REG:
				nextinstr(zl_eip);
				printf("%.4u:   mov [%s], %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_MOV_PREG_PREG:
				nextinstr(zl_eip);
				printf("%.4u:   mov [%s], [%s]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip + 1)));
				zl_eip += 2;
				continue;
			case OP_MOV_REG_PREG:
				nextinstr(zl_eip);
				printf("%.4u:   mov %s, [%s]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), reg(pdb(zl_eip+1)));
				zl_eip += 2;
				continue;
			case OP_MOV_MEM_REG:
				nextinstr(zl_eip);
				printf("%.4u:   mov [%.4Xh], %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdw(zl_eip), reg(pdb(zl_eip+4)));
				zl_eip += 5;
				continue;
			case OP_MOV_REG_MEM:
				nextinstr(zl_eip);
				printf("%.4u:   mov %s, [%.4Xh]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), pdw(zl_eip+1));
				zl_eip += 5;
				continue;
			case OP_MOV_REG_IMM:
				nextinstr(zl_eip);
				printf("%.4u:   mov %s, %u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), pdw(zl_eip+1));
				zl_eip += 5;
				continue;
			case OP_ADD_REG_IMM:
				nextinstr(zl_eip);
				printf("%.4u:   add %s, %u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)), pdw(zl_eip+1));
				zl_eip += 5;
				continue;
			case OP_INC_REG:
				nextinstr(zl_eip);
				printf("%.4u:   inc %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)));
				zl_eip++;
				continue;
			case OP_DEC_REG:
				nextinstr(zl_eip);
				printf("%.4u:   dec %s\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)));
				zl_eip++;
				continue;
			case OP_JNE:
				nextinstr(zl_eip);
				printf("%.4u:   jne %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_JZ:
				nextinstr(zl_eip);
				printf("%.4u:   jz %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_JNZ:
				nextinstr(zl_eip);
				printf("%.4u:   jnz %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_JMP:
				nextinstr(zl_eip);
				printf("%.4u:   jmp %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_CALL_IMM:
				nextinstr(zl_eip);
				printf("%.4u:   call near %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_CALL_REG:
				nextinstr(zl_eip);
				printf("%.4u:   call near [%s]\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, reg(pdb(zl_eip)));
				zl_eip += 1;
				continue;
			case OP_CALL_FAR:
				nextinstr(zl_eip);
				printf("%.4u:   call far %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_RCALL_FAR:
				nextinstr(zl_eip);
				printf("%.4u:   rcall far %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdw(zl_eip));
				zl_eip += 4;
				continue;

			case OP_ADD_STK_STK:
				printf("%.4u:   add_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_SUB_STK_STK:
				printf("%.4u:   sub_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_MUL_STK_STK:
				printf("%.4u:   mul_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_MOD_STK_STK:
				printf("%.4u:   mod_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_DIV_STK_STK:
				printf("%.4u:   div_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_OR_STK_STK:
				printf("%.4u:   or_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_AND_STK_STK:
				printf("%.4u:   and_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_XOR_STK_STK:
				printf("%.4u:   xor_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_SHL_STK_STK:
				printf("%.4u:   shl_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_SHR_STK_STK:
				printf("%.4u:   shr_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_E_STK_STK:
				printf("%.4u:   e_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_NE_STK_STK:
				printf("%.4u:   ne_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_L_STK_STK:
				printf("%.4u:   l_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_LE_STK_STK:
				printf("%.4u:   le_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_G_STK_STK:
				printf("%.4u:   g_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_GE_STK_STK:
				printf("%.4u:   ge_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_UL_STK_STK:
				printf("%.4u:   ul_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_ULE_STK_STK:
				printf("%.4u:   ule_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_UG_STK_STK:
				printf("%.4u:   ug_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_UGE_STK_STK:
				printf("%.4u:   uge_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_LNOT_STK:
				printf("%.4u:   lnot_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_BNOT_STK:
				printf("%.4u:   not_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_MINUS_STK:
				printf("%.4u:   minus_stk\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_JZ_STK:
				nextinstr(zl_eip);
				printf("%.4u:   jz_stk %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_JNZ_STK:
				nextinstr(zl_eip);
				printf("%.4u:   jnz_stk %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_JZ_POP_STK:
				nextinstr(zl_eip);
				printf("%.4u:   jz_pop_stk %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;
			case OP_JNZ_POP_STK:
				nextinstr(zl_eip);
				printf("%.4u:   jnz_pop_stk %.4u\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, dw(zl_eip) - dw(hardcode) + pdw(zl_eip));
				zl_eip += 4;
				continue;

			case OP_SIZE_OVERRIDE_1:
				printf("%.4u:   size override to 1 byte for next operation\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_SIZE_OVERRIDE_2:
				printf("%.4u:   size override to 2 bytes for next operation\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_DBG_PRINT:
				printf("%.4u:   dbg_print_regs\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_RET:
				printf("%.4u:   ret\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_RET_IMM:
				nextinstr(zl_eip);
				printf("%.4u:   push %d\n", dw(zl_eip) - dw(hardcode) - ZL_INSTRUCTION_LENGTH, pdb(zl_eip));
				zl_eip += 1;
				continue;
			case OP_NOP:
				printf("%.4u:   nop\n", dw(zl_eip) - dw(hardcode));
				break;
			case OP_EOF:
				printf("%.4u:   $end\n", dw(zl_eip) - dw(hardcode));
				break;
			default:
				printf("%.4u:   %Xh - unknown instruction\n", dw(zl_eip) - dw(hardcode), instr(zl_eip));
		}
		nextinstr(zl_eip);
	}

	//printf("%.4u:   $end\n", dw(zl_eip) - dw(hardcode));

	return 0L;
}
