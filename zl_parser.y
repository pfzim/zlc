%code requires {

#include "zl_compiler.h"
//#include "zl.h"

}
%code top {

//#include "zl_parser.h"
#include "zl_compiler.h"
#include "zl_parser.hpp"

}
%{

//#define YYPARSE_PARAM pp
//#define YYPP ((cl_parser_params *) pp)
//#define YYLEX_PARAM pp
//#define YYMAXDEPTH 10000
//#define YYINITDEPTH 300
#define YYSTYPE zlval

#define ZL_WARNING(message) { yywarning(scanner, pp, message); }
#define ZL_ERROR(message) { yyerror(scanner, pp, message); YYABORT; }

void yywarning(void *scanner, cl_parser_params *pp, const char *err);
void yyerror(void *scanner, cl_parser_params *pp, const char *err);
int yylex(zlval *yylval, void *yyscanner);

int yylex_init(void  **ptr_yy_globals);
int yylex_destroy(void *yyscanner);
void yyset_extra(cl_parser_params *user_defined, void *yyscanner);

%}

%define api.pure true
%error-verbose

%lex-param		{void *scanner}
%parse-param	{void *scanner}
%parse-param	{cl_parser_params *pp}

%left ','
%left '=' T_OR_ASSIGN T_XOR_ASSIGN T_SHL_ASSIGN T_SHR_ASSIGN T_ADD_ASSIGN T_MOD_ASSIGN T_DIV_ASSIGN T_MUL_ASSIGN T_SUB_ASSIGN T_AND_ASSIGN
%left '?' ':'
%left T_OR
%left T_AND
%left '|'
%left '^'
%left '&'
%nonassoc T_EQ T_NE
%nonassoc '<' T_LE '>' T_GE
%left T_SHL T_SHR
%left '+' '-'
%left '*' '/' '%'
%right '!' '~' T_INC T_DEC '@'
%nonassoc T_PLUS T_MINUS T_POINTER
%right '['

%token T_IF
//%left T_ELSE
%nonassoc T_THEN
%nonassoc T_ELSE

%token '.'
%token T_PTR_OP

%token T_WHILE T_DO T_BREAK T_CONTINUE T_FOR T_SWITCH T_CASE T_DEFAULT

%token T_LABEL
%token T_CONSTANT_DOUBLE
%token T_CONSTANT_LONG
%token T_CONSTANT_STRING

%token T_VOID
%token T_CHAR
%token T_SHORT
%token T_INT
%token T_LONG
%token T_FLOAT
%token T_DOUBLE
%token T_SIGNED
%token T_UNSIGNED
%token T_STRUCT
%token T_STRUCT_DEFINED
%token T_ELLIPSIS
%token T_STRING
%token T_EXTERN
%token T_VAR
%token T_IMPORT
%token T_FROM

%token T_GOTO
%token T_SIZEOF
%token T_TYPEOF
%token T_RETURN

%token T_REGISTER
%token T_OPERATOR

%token T_ASM

%left T_PARAM_SEPARATOR

%token T_NOP
%token T_DBG_PRINT_REGS

%token T_FUNCTION

%start top

%%

top
	: program_list
		{
				pp->hc_active = 0;
				
				cl_label_node *func;
				func = cl_label_find(pp->funcs_table, "main");
				if(!func)
				{
					ZL_ERROR("undeclared identifier");
				}
			
				cl_push(pp, OP_CALL_IMM);
				cl_label_reference(func, pp->hc_active, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
				cl_push(pp, OP_EOF);
				
				cl_var_join_dimension(pp->vars_table, 1, 0, pp->hc_fill[0]);
				cl_label_join_dimension(pp->funcs_table, 1, 0, pp->hc_fill[0]);
				cl_const_join_dimension(pp->data_table, 1, 0, pp->hc_fill[0]);
				
				/*
				printf("\n--- %u ---\n", pp->hc_active);
				zl_decompile(pp->hard_code[pp->hc_active], pp->hc_fill[pp->hc_active]);
				printf("\n--- %u ---\n", pp->hc_active+1);
				zl_decompile(pp->hard_code[pp->hc_active+1], pp->hc_fill[pp->hc_active+1]);
				*/
				
				cl_code_add(pp, pp->hard_code[1], pp->hc_fill[1]);

				/*
				printf("\n--- %u + %u -> %u ---\n", pp->hc_active, pp->hc_active+1, pp->hc_active);
				zl_decompile(pp->hard_code[pp->hc_active], pp->hc_fill[pp->hc_active]);
				printf("\n--- END ---\n");
				*/
				
				zfree(pp->hard_code[1]);

				pp->hard_code[1] = NULL;
				pp->hc_fill[1] = 0;
				pp->hc_buffer_size[1] = 0;
		}
;

program_list
	: program_list program 
	| /* empty */
;

program
	: f_current_level_zero declaration_statement
	| f_current_level_one declaration_function
;

f_current_level_zero :	{ pp->hc_active = 0; }  // fail merge dimensions here if initialize global var by function like: int x = func(1, 2, 3);
f_current_level_one	:	{ pp->hc_active = 1; }

statement_list
	: statement_list statement 
	| /* empty */
;
statement
	: compound_statement
	| expression_statement
	| buildin_statement
	| selection_statement
	| labeled_statement
	| jump_statement
	| declaration_statement
	| assembler_statement
;

compound_statement
	: '{'
		{
			pp->current_level++;
		}
		statement_list '}'
		{
			cl_var_free_level(&pp->vars_table, pp->current_level);
			pp->current_level--;
		}
;

//*
assembler_statement
	: T_ASM assembler_command_list '}'
;

assembler_command_list
	: assembler_command '\n' assembler_command_list
	| labeled_statement assembler_command_list
	| assembler_command
;

assembler_command
	: T_GOTO T_LABEL
		{
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, $2.string);
			free_str($2.string);

			if(!label)
			{
				ZL_ERROR("internal error");
			}

			cl_push(pp, (unsigned char) $1.value);
			cl_label_reference(label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
	| T_OPERATOR operator_parameter ',' operator_parameter		{ cl_push_op(pp, (unsigned char) $1.value, &$2, &$4); }
	| T_OPERATOR operator_parameter 							{ cl_push_op(pp, (unsigned char) $1.value, &$2, NULL); }
	| T_OPERATOR 												{ cl_push_op(pp, (unsigned char) $1.value, NULL, NULL); }
	| T_LABEL '(' assembler_argument_list ')'
		{
			cl_label_node *func;

			func = cl_label_find(pp->funcs_table, $1.string);
			if(!func)
			{
				ZL_ERROR("undeclared identifier");
			}

			if(func->flags & ZLF_FUNC_INTERNAL)
			{
				cl_push(pp, OP_CALL_IMM); // call near
			}
			else
			{
				ZL_ERROR("unsupported far call");
			}

			cl_label_reference(func, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
	| /* empty */
;

/*
assembler_command_list
	: assembler_command assembler_command_list
	| / * empty * /
;

assembler_command
	: labeled_statement
	| T_GOTO T_LABEL '\n'										{ cl_push(pp, (unsigned char) $1.value); cl_jump_define(&pp->jumps_table, $2.string, pp->hc_fill); free_str($2.string); cl_push_dw(pp, 0) }
	| T_OPERATOR operator_parameter ',' operator_parameter '\n'	{ cl_push_op(pp, (unsigned char) $1.value, &$2, &$4); }
	| T_OPERATOR operator_parameter '\n'						{ cl_push_op(pp, (unsigned char) $1.value, &$2, NULL) }
	| T_OPERATOR '\n'											{ cl_push_op(pp, (unsigned char) $1.value, NULL, NULL) }
	| T_LABEL '(' call_argument_list ')' '\n'					{ cl_push_op(pp, OP_CALL, &$1, NULL); free_str($1.string); }
	| '\n'
;
*/

assembler_argument_list
	: operator_parameter ',' assembler_argument_list			{ cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, $3.value); }
	| operator_parameter										{ cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, $1.value); }
	| /* empty */
;

operator_parameter
	: T_REGISTER												{ $$ = $1; $$.flags = ARG_REG; }
	| '[' T_REGISTER ']'										{ $$ = $1; $$.flags = ARG_PREG; }
	| T_CONSTANT_LONG											{ $$ = $1; $$.flags = ARG_IMM; }
//	| T_CONSTANT_DOUBLE											{ $$ = $1; $$.flags = ARG_IMM8; }
//	| T_CONSTANT_STRING											{ $$ = $1; $$.flags = ARG_DATA; }
/*
	| T_LABEL
		{
			$$ = $1;
			$$.flags = ARG_MEM;
			$$.uvalue = cl_find_var_or_func(pp->vars_table, pp->funcs_list, $1.string);
			free_str($1.string);
			if($$.uvalue == 1) ZL_ERROR("undeclared identifier");
		}
	| '[' T_LABEL ']'
		{
			$$ = $1;
			$$.flags = ARG_PMEM;
			$$.uvalue = cl_find_var_or_func(pp->vars_table, pp->funcs_list, $2.string);
			free_str($2.string);
			if($$.uvalue == 1) ZL_ERROR("undeclared identifier");
		}
*/
;
//*/

expression_statement
	: ';'
	| expression ';'											{ cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX); }
;

buildin_statement
	: T_NOP ';'													{ cl_push(pp, OP_NOP); }
	| T_DBG_PRINT_REGS ';'										{ cl_push(pp, OP_DBG_PRINT); }
	| T_BREAK ';'
		{
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack) ZL_ERROR("break not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->next_node->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
	| T_CONTINUE ';'
		{
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack || !pp->cl_loop_stack->next_node) ZL_ERROR("continue not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
	| T_BREAK T_CONSTANT_LONG ';'
		{
			cl_stack_buffer *lsb;
			lsb = pp->cl_loop_stack;
			$2.value = $2.value*2-1;
			while($2.value--)
			{
				lsb = lsb->next_node;
				if(!lsb) ZL_ERROR("break not in loop");
			}
			cl_push(pp, OP_JMP);

			cl_label_reference((cl_label_node *) lsb->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
	| T_CONTINUE T_CONSTANT_LONG ';'
		{
			cl_stack_buffer *lsb;
			lsb = pp->cl_loop_stack;
			$2.value = ($2.value-1)*2;
			while($2.value--)
			{
				lsb = lsb->next_node;
				if(!lsb) ZL_ERROR("continue not in loop");
			}
			cl_push(pp, OP_JMP);

			cl_label_reference((cl_label_node *) lsb->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
	| T_RETURN ';'
		{
			cl_label_node *lb_label;

			lb_label = cl_label_find(pp->labels_table, "@exit_func");

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
	| T_RETURN assignment_expression ';'
		{
			cl_label_node *lb_label;

			lb_label = cl_label_find(pp->labels_table, "@exit_func");

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_JMP);
			cl_label_reference(lb_label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
;

selection_statement
	: T_WHILE
		{
			cl_label_node *lb_exit, *lb_condition;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_condition->offset = pp->hc_fill[pp->hc_active];
			lb_condition->dimension = pp->hc_active;
			lb_condition->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit loop
			cl_stack_push(&pp->cl_loop_stack, lb_condition);	// condition
		}
		'(' assignment_expression ')'
		{
			cl_label_node *lb_exit;
			lb_exit= (cl_label_node *) pp->cl_loop_stack->next_node->data;
			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_exit, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
		statement
		{
			cl_label_node *lb_exit, *lb_condition;
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_condition, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->dimension = pp->hc_active;
			lb_exit->flags = ZLF_DEFINED;
		}
	| T_DO
		{
			cl_label_node *lb_exit, *lb_condition, *lb_start;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_start = cl_label_define(&pp->labels_table, NULL);
			lb_start->offset = pp->hc_fill[pp->hc_active];
			lb_start->dimension = pp->hc_active;
			lb_start->flags = ZLF_DEFINED;

			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit loop
			cl_stack_push(&pp->cl_loop_stack, lb_condition);	// condition
			cl_stack_push(&pp->cl_stack, lb_start);				// start loop
		}
		statement
		T_WHILE
		{
			cl_label_node *lb_condition;
			lb_condition = (cl_label_node *) pp->cl_loop_stack->data;
			lb_condition->offset = pp->hc_fill[pp->hc_active];
			lb_condition->dimension = pp->hc_active;
			lb_condition->flags = ZLF_DEFINED;
		}
		'(' assignment_expression ')'
		{
			cl_label_node *lb_exit, *lb_condition;
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JNZ_POP_STK);
			cl_label_reference((cl_label_node *) cl_stack_pop(&pp->cl_stack), pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->dimension = pp->hc_active;
			lb_exit->flags = ZLF_DEFINED;
		}';'
	| T_FOR '(' expression ';'
		{
			cl_label_node *lb_exit, *lb_loop, *lb_condition;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_loop = cl_label_define(&pp->labels_table, NULL);

			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit
			cl_stack_push(&pp->cl_loop_stack, lb_loop);			// loop

			cl_push(pp, OP_POP_REG);
			cl_push(pp, REG_EAX);

			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_condition->offset = pp->hc_fill[pp->hc_active];
			lb_condition->dimension = pp->hc_active;
			lb_condition->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_condition);
		}
		assignment_expression ';'
		{
			cl_label_node *lb_loop, *lb_exit, *lb_statement;

			lb_statement = cl_label_define(&pp->labels_table, NULL);
			lb_loop = (cl_label_node *) pp->cl_loop_stack->data;
			lb_exit = (cl_label_node *) pp->cl_loop_stack->next_node->data;

			cl_stack_push(&pp->cl_stack, lb_statement);

			cl_push(pp, OP_JNZ_POP_STK);
			cl_label_reference(lb_statement, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_exit, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			lb_loop->offset = pp->hc_fill[pp->hc_active];
			lb_loop->dimension = pp->hc_active;
			lb_loop->flags = ZLF_DEFINED;
		}
		expression ')'
		{
			cl_label_node *lb_condition, *lb_statement;
			lb_statement = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_stack);

			cl_push(pp, OP_POP_REG);
			cl_push(pp, REG_EAX);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_condition, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			lb_statement->offset = pp->hc_fill[pp->hc_active];
			lb_statement->dimension = pp->hc_active;
			lb_statement->flags = ZLF_DEFINED;
		}
		statement
		{
			cl_label_node *lb_exit, *lb_loop;
			lb_loop = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_loop, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->dimension = pp->hc_active;
			lb_exit->flags = ZLF_DEFINED;
		}
	| T_IF '(' assignment_expression ')'
		{
			/*
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			cl_stack_push(&pp->cl_stack, lb_skip);
			*/

			cl_push(pp, OP_JZ_POP_STK);
			//cl_label_reference(lb_skip, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
		statement
		else_statement
		{
			/*
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill[pp->hc_active];
			lb_skip->flags = ZLF_DEFINED;
			*/
			unsigned long lb_skip;
			lb_skip = (unsigned long) cl_stack_pop(&pp->cl_stack);
			cl_code_replace(pp->hard_code[pp->hc_active], lb_skip, pp->hc_fill[pp->hc_active] - lb_skip);
		}
	| T_SWITCH '(' assignment_expression ')' '{'		// conflict with 'goto' into
		{
			cl_label_node *lb_exit;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// break switch
			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// continue switch (continue == break)
			cl_stack_push(&pp->cl_stack, 0);					// lb_previous
			
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);		// eax = result of assignment_expression
		}
		switch_statement_list '}'
		{
			cl_label_node *lb_exit;
			cl_stack_pop(&pp->cl_stack);									// lb_previous
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			// break jump here
			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->dimension = pp->hc_active;
			lb_exit->flags = ZLF_DEFINED;
		}
;

switch_statement_list
	: switch_case_list
	| switch_default
	| switch_case_list switch_default
;

switch_case_list
	: switch_case
	| switch_case_list switch_case
;

switch_case
	: T_CASE
		{
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
		expr ':'
		{
			unsigned long lb_previous;
			lb_previous = (unsigned long) cl_stack_pop(&pp->cl_stack);
			
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_CMP_REG_REG);  cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);

			cl_push(pp, OP_JNE);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			
			// jump here from previous statement
			if(lb_previous)
			{
				cl_code_replace(pp->hard_code[pp->hc_active], lb_previous, pp->hc_fill[pp->hc_active] - lb_previous);
			}
		}
		statement_list
		{
			unsigned long lb_else;
			lb_else = (unsigned long) cl_stack_pop(&pp->cl_stack);

			// jmp to next statement skip cheking
			cl_push(pp, OP_JMP);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);		// lb_previous
			cl_push_dw(pp, 0);

			cl_code_replace(pp->hard_code[pp->hc_active], lb_else, pp->hc_fill[pp->hc_active] - lb_else);
		}
;

switch_default
	: T_DEFAULT ':'	
		{
			unsigned long lb_previous;
			lb_previous = (unsigned long) cl_stack_pop(&pp->cl_stack);
			if(lb_previous)
			{
				cl_code_replace(pp->hard_code[pp->hc_active], lb_previous, pp->hc_fill[pp->hc_active] - lb_previous);
			}
		}
		statement_list
		{
			cl_stack_push(&pp->cl_stack, 0);		// lb_previous
		}
;

else_statement
	: /* empty */	%prec T_THEN
	| T_ELSE
		{
			/*
			cl_label_node *lb_skip, *lb_else;
			lb_else = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			*/
			unsigned long lb_skip;
			lb_skip = (unsigned long) cl_stack_pop(&pp->cl_stack);

			cl_push(pp, OP_JMP);
			//cl_label_reference(lb_skip, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			/*
			lb_else->offset = pp->hc_fill[pp->hc_active];
			lb_else->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);
			*/
			cl_code_replace(pp->hard_code[pp->hc_active], lb_skip, pp->hc_fill[pp->hc_active] - lb_skip);
		}
		statement
;

labeled_statement
	: T_LABEL ':' /*statement*/
		{
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, $1.string);
			free_str($1.string);

			if(label->flags & ZLF_DEFINED)
			{
				ZL_ERROR("label redefined");
			}

			label->offset = pp->hc_fill[pp->hc_active];
			label->dimension = pp->hc_active;
			label->flags = ZLF_DEFINED;
		}
;

jump_statement
	: T_GOTO T_LABEL ';'
		{
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, $2.string);
			free_str($2.string);

			if(!label)
			{
				ZL_ERROR("internal error");
			}

			cl_push(pp, (unsigned char) $1.value);
			cl_label_reference(label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
;

declaration_function
	: T_IMPORT T_CONSTANT_LONG function_type_specifiers pointer T_LABEL '(' T_CONSTANT_LONG ')' ';'
		{
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, $5.string);
			free_str($5.string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!$2.uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = NULL;
			func->params = $7.uvalue;
		}
	| T_IMPORT T_CONSTANT_LONG function_type_specifiers pointer T_LABEL '(' T_CONSTANT_LONG ')' T_FROM T_CONSTANT_STRING ';'
		{
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, $5.string);
			free_str($5.string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!$2.uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = $10.string;
			func->params = $7.uvalue;
		}
	| T_IMPORT T_CONSTANT_LONG function_type_specifiers pointer T_LABEL '(' function_arguments_specifiers ')' ';'
		{
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, $5.string);
			free_str($5.string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!$2.uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = NULL;
			func->params = $7.uvalue;
		}
	| T_IMPORT T_CONSTANT_LONG function_type_specifiers pointer T_LABEL '(' function_arguments_specifiers ')' T_FROM T_CONSTANT_STRING ';'
		{
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, $5.string);
			free_str($5.string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!$2.uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = $10.string;
			func->params = $7.uvalue;
		}
	| T_FUNCTION function_type_specifiers pointer T_LABEL f_current_level_increment '(' function_arguments_list ')' ';'
		{
			cl_label_node *func;
			
			cl_var_free_level(&pp->vars_table, pp->current_level);
			pp->current_level--;

			func = cl_label_define(&pp->funcs_table, $4.string);
			free_str($4.string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_FUNC_INTERNAL | $2.flags | $3.flags;
			func->library = NULL;
		}
	| T_FUNCTION function_type_specifiers pointer T_LABEL f_current_level_increment '(' function_arguments_list ')'
		{
			cl_label_node *func;

			cl_label_define(&pp->labels_table, "@exit_func");

			func = cl_label_define(&pp->funcs_table, $4.string);
			free_str($4.string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			if(func->flags && (func->flags != (ZLF_FUNC_INTERNAL | $2.flags | $3.flags)))
			{
				ZL_ERROR("function return type different that declared before");
			}
			
			// ����� ���� ����� ������������� offset ���������� function_arguments_list � �������� �������
			
			func->flags = ZLF_FUNC_INTERNAL | ZLF_DEFINED | $2.flags | $3.flags;
			func->offset = pp->hc_fill[pp->hc_active];
			func->dimension = pp->hc_active;
			//func->params_size = $7.size;

			pp->current_level--;
			pp->stack_size = 4;

			//cl_push(pp, OP_DBG_PRINT);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBP);
			cl_push(pp, OP_MOV_REG_REG); cl_push(pp, REG_EBP); cl_push(pp, REG_ESP);
			cl_push(pp, OP_ADD_REG_IMM); cl_push(pp, REG_ESP);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			//cl_push(pp, OP_NOP);
		}
		compound_statement
		{
			cl_label_node *label;
			unsigned long fix_point;

			label = cl_label_find(pp->labels_table, "@exit_func");

			label->offset = pp->hc_fill[pp->hc_active];
			label->dimension = pp->hc_active;
			label->flags = ZLF_DEFINED;

			//cl_push(pp, OP_NOP);
			pp->stack_size -= 4;
			cl_push(pp, OP_SUB_REG_IMM); cl_push(pp, REG_ESP); cl_push_dw(pp, pp->stack_size);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EBP);
			//cl_push(pp, OP_DBG_PRINT);
			cl_push(pp, OP_RET);
			cl_push(pp, OP_EOF);

			//cl_push(pp, OP_NOP);
			//cl_push(pp, OP_NOP);
			//cl_push(pp, OP_NOP);

			fix_point = (unsigned long) cl_stack_pop(&pp->cl_stack);

			pp->hard_code[pp->hc_active][fix_point] = (char)((unsigned long) (pp->stack_size & 0xFF));
			pp->hard_code[pp->hc_active][fix_point+1] = (char)((unsigned long) ((pp->stack_size >> 8) & 0xFF));
			pp->hard_code[pp->hc_active][fix_point+2] = (char)((unsigned long) ((pp->stack_size >> 16) & 0xFF));
			pp->hard_code[pp->hc_active][fix_point+3] = (char)((unsigned long) (pp->stack_size >> 24));

			if(cl_label_fix(pp->labels_table, pp->hard_code[pp->hc_active]))
			{
				ZL_ERROR("error, jump to undefined label");
			}

			cl_label_free(&pp->labels_table);
		}
;

/*
function_type
	: declaration_specifiers									{ $$.flags = $1.flags; }
	| declaration_specifiers var_or_func_label					{ $$.flags = $1.flags | $2.flags; }
;
//*/

f_current_level_increment: 										{ pp->current_level++; };

function_arguments_specifiers
	: declaration_specifiers pointer
		{
			$$.uvalue = 1;
		}
	| function_arguments_specifiers ',' declaration_specifiers pointer
		{
			$$.value = $1.value + 1;
		}
	| /* empty - function does not have arguments */
		{
			$$.value = 0;
		}
;

function_arguments_list
	: function_argument
		{
			$$.value = 8;
			$1.var->offset = $$.uvalue;
			$1.var->flags |= ZLF_PARAM;
			//ZL_WARNING("first");
			//printf("first rule:  %s %d\n", $1.var->name, $1.var->offset);
		}
	| function_arguments_list ',' function_argument
		{
			$$.value = $1.value + 4;
			$3.var->offset = $$.uvalue;
			$3.var->flags |= ZLF_PARAM;
			//ZL_WARNING("second");
			//printf("second rule: %s offset: %d\n", $3.var->name, $3.var->offset);
		}
	| /* empty - function does not have arguments */
;

function_argument
	: declaration_specifiers
		{
			if(($1.flags & ZLF_EXTERNAL) && (pp->current_level > 0))
			{
				ZL_ERROR("external variable must be defined global");
			}

			if(!($1.flags & ZLF_TYPE))
			{
				$1.flags |= ZLF_INT;	// use default type
			}

			cl_stack_push(&pp->cl_stack, (void *) $1.flags);
		}
		declarator
		{
			if($3.var->flags & ZLF_AUTOARRAY)
			{
				//ZL_ERROR("unknown size");

				$3.var->size[1] = 1;

				/*
				$3.var->flags += 0x01000000;
				$3.var->rows--;
				if(!$3.var->rows)
				{
					$3.var->flags &= ~ZLF_ARRAY;
				}
				*/
			}

			if($3.var->flags & ZLF_ARRAY)
			{
				unsigned long level;

				//$3.var->flags += 0x01000000;
				//$3.var->size[0] = 4;

				level = $3.var->rows;

				$3.var->size[level] *= $3.var->size[0];
				level--;

				while(level)
				{
					$3.var->size[level] *= $3.var->size[level+1];
					level--;
				}
			}

			unsigned long dc, uc, x;

			dc = 1;
			uc = $3.var->rows;

			while(dc < uc)
			{
				x = $3.var->size[dc];
				$3.var->size[dc] = $3.var->size[uc];
				$3.var->size[uc] = x;

				dc++;
				uc--;
			}

			$3.var->references = 0;

			$$ = $3;

			cl_stack_pop(&pp->cl_stack);
		}
;

declaration_statement
	//: declaration_specifiers ';'								{ /* nothing to do */ }
	: declaration_specifiers
		{
			if(($1.flags & ZLF_EXTERNAL) && (pp->current_level > 0))
			{
				ZL_ERROR("external variable must be defined global");
			}

			if(!($1.flags & ZLF_TYPE))
			{
				$1.flags |= ZLF_INT;	// set default type
			}
			
			if(($1.flags & (ZLF_INT | ZLF_CHAR)) && (($1.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) == 0))
			{
				$1.flags |= ZLF_SIGNED;	// set default modifier
			}
			
			if(($1.flags & ZLF_INT) && (($1.flags & (ZLF_SHORT | ZLF_LONG)) == 0))
			{
				$1.flags |= ZLF_LONG;	// set default modifier
			}

			cl_stack_push(&pp->cl_stack, (void *) $1.flags);
		}
		init_declarator_list ';'
		{
			cl_stack_pop(&pp->cl_stack);
		}
;

function_type_specifiers
	:															{ $$.flags = ZLF_VOID; }
	| declaration_specifiers									
		{
			if($1.flags & ZLF_EXTERNAL)
			{
				ZL_ERROR("external variable must be defined global");
			}

			if(!($1.flags & ZLF_TYPE))
			{
				$1.flags |= ZLF_INT;	// set default type
			}
			
			if(($1.flags & (ZLF_INT | ZLF_CHAR)) && (($1.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) == 0))
			{
				$1.flags |= ZLF_SIGNED;	// set default modifier
			}
			
			if(($1.flags & ZLF_INT) && (($1.flags & (ZLF_SHORT | ZLF_LONG)) == 0))
			{
				$1.flags |= ZLF_LONG;	// set default modifier
			}
			
			$$.flags = $1.flags;
		}
;

declaration_specifiers
	: type_specifier											{ $$.flags = $1.flags; }
	| declaration_specifiers type_specifier
		{
			$$.flags = $1.flags | $2.flags;
			if(($$.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) == (ZLF_SIGNED | ZLF_UNSIGNED))
			{
				ZL_ERROR("signed/unsigned keywords mutually exclusive");
			}

			if(($$.flags & (ZLF_EXTERNAL | ZLF_INTERNAL)) == (ZLF_EXTERNAL | ZLF_INTERNAL))
			{
				ZL_ERROR("internal/external keywords mutually exclusive");
			}

			if(($$.flags & (ZLF_SHORT | ZLF_LONG)) == (ZLF_SHORT | ZLF_LONG))
			{
				ZL_ERROR("short/long keywords mutually exclusive");
			}

			if(($$.flags & (ZLF_SHORT | ZLF_LONG)) && ($$.flags & ZLF_TYPE) && !($$.flags & ZLF_INT))
			{
				ZL_ERROR("short/long keywords can not be used with none 'int' type");
			}

			if(($$.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) && ($$.flags & ZLF_TYPE) && !($$.flags & (ZLF_INT|ZLF_CHAR)))
			{
				ZL_ERROR("signed/unsigned keywords can not be used with none 'int/char' type ");
			}

			if(($1.flags & ZLF_TYPE) && ($2.flags & ZLF_TYPE))
			{
				ZL_ERROR("type specifier followed by type specifier is illegal");
			}
		}
;

type_specifier
	: T_VOID													{ $$.flags = ZLF_VOID; }
	| T_CHAR													{ $$.flags = ZLF_CHAR; }
	| T_SHORT													{ $$.flags = ZLF_SHORT; }
	| T_INT														{ $$.flags = ZLF_INT; }
	| T_LONG													{ $$.flags = ZLF_LONG; }
	| T_FLOAT													{ $$.flags = ZLF_FLOAT; }
	| T_DOUBLE													{ $$.flags = ZLF_DOUBLE; }
	| T_SIGNED													{ $$.flags = ZLF_SIGNED; }
	| T_UNSIGNED												{ $$.flags = ZLF_UNSIGNED; }
	| T_EXTERN													{ $$.flags = ZLF_EXTERNAL; }
//	| T_VAR														{ $$.flags = ZLF_INTERNAL; }
//	| struct_specifier											{ $$.flags = ZLF_STRUCT; }
//	| T_LABEL													{ /*cl_find_in_struct_list(); $$.flags = ZLF_STRUCT; free_str($1.string);*/ }
;

init_declarator_list
	: init_declarator											{ /* nothing to do */ }
	| init_declarator_list ',' init_declarator					{ /* nothing to do */ }
;

init_declarator
	: declarator
		{
			if($1.var->flags & ZLF_AUTOARRAY)
			{
				ZL_ERROR("unknown size");
			}

			if($1.var->flags & ZLF_ARRAY)
			{
				unsigned long level;

				level = $1.var->rows;

				$1.var->size[level] *= $1.var->size[0];
				level--;

				while(level)
				{
					$1.var->size[level] *= $1.var->size[level+1];
					level--;
				}

				//$1.var->size[0] = $1.var->size[1];
			}

			unsigned long dc, uc, x;

			dc = 1;
			uc = $1.var->rows;

			while(dc < uc)
			{
				x = $1.var->size[dc];
				$1.var->size[dc] = $1.var->size[uc];
				$1.var->size[uc] = x;

				dc++;
				uc--;
			}

			if((~$1.var->flags & ZLF_EXTERNAL) && ($1.var->level != 0))
			{
				$1.var->offset = pp->stack_size;
				pp->stack_size += $1.var->size[$1.var->rows];
				if($1.var->size[$1.var->rows] % 4)
				{
					pp->stack_size += 4 - ($1.var->size[$1.var->rows] % 4);
				}
			}

			$1.var->references = 0;

			/*
			if(!cl_var_define(&pp->vars_table, &$1.var))
			{
				ZL_ERROR("redefinition");
			}
			*/
		}
	| declarator '='
		{
			cl_var_node *var;

			if($1.var->flags & ZLF_ARRAY)
			{
				// calculate/convert array element count to size
				// long int array[2rows][3columns];
				// X X X
				// X X X
				// sizeof(array[0]) == 3*4 bytes
				// sizeof(array[0][0]) == 4 bytes

				/* debug
				printf("\n\narray              : %s\n", $1.var->name);
				printf("$1.var->rows       : %u\n", $1.var->rows);
				printf("$1.var->size[0]    : %u\n", $1.var->size[0]);
				printf("$1.var->size[%u]    : %u\n", $1.var->rows, $1.var->size[$1.var->rows]);
				//*/

				unsigned long level;
				
				level = $1.var->rows;
				$1.var->size[level] *= $1.var->size[0];
				level--;

				while(level)
				{
					//printf("$1.var->size[%u]    : %u\n", level, $1.var->size[level]);
					$1.var->size[level] *= $1.var->size[level+1];
					level--;
				}

				//$1.var->size[0] = $1.var->size[1];
			}

			// swap array of sizes
			// sizeof(array)          = $1.var->size[]
			// sizeof(array[0])       = $1.var->size[]
			// sizeof(array[0][0])    = $1.var->size[]
			// sizeof(array[0][0][0]) = $1.var->size[]
			
			unsigned long dc, uc, x;

			dc = 1;
			uc = $1.var->rows;

			while(dc < uc)
			{
				x = $1.var->size[dc];
				$1.var->size[dc] = $1.var->size[uc];
				$1.var->size[uc] = x;

				dc++;
				uc--;
			}

			/* debug
			dc = 0;
			while(dc <= $1.var->rows)
			{
				printf("$1.var->size[%u]    : %u\n", dc, $1.var->size[dc]);
				dc++;
			}
			//*/
			
			$1.var->references = 0;

			var = $1.var;
			/*
			var = cl_var_define(&pp->vars_table, &$1.var);
			if(!var)
			{
				ZL_ERROR("redefinition");
			}
			*/

			cl_stack_push(&pp->cl_stack, (void *) var);

			if($1.var->flags & ZLF_EXTERNAL)
			{
				cl_push(pp, OP_PUSH_PMEM);
				cl_var_reference(var, pp->hc_active, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
			}
			else if($1.var->level == 0) // global var
			{
				cl_push(pp, OP_PUSH_MEM);
				cl_var_reference(var, pp->hc_active, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
			}
			else // local var
			{
				var->offset = pp->stack_size;

				cl_push(pp, OP_MOV_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EBP);
				cl_push(pp, OP_ADD_REG_IMM); cl_push(pp, REG_EBX); cl_push_dw(pp, var->offset);
				cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
			}
		}
		initializer
		{
			cl_var_node *var;

			var = (cl_var_node *) pp->cl_stack->data;
			if(var->flags & ZLF_AUTOARRAY)
			{
				if(($4.size % var->size[var->rows-1]) > 0)
				{
					var->size[var->rows] = var->size[var->rows-1] - ($4.size % var->size[var->rows-1]) + $4.size;
				}
				else
				{
					var->size[var->rows] = $4.size;
				}
				// debug
				//printf("%s = (%u - (%u %% %u) + %u) = %u\n", $1.var->name, $1.var->size[$1.var->rows-1], $4.size, $1.var->size[$1.var->rows-1], $4.size, $1.var->size[$1.var->rows]);
				//for(int i = 0; i <= $1.var->rows; i++)
				//{
				//	printf("[%u]", $1.var->size[i]);
				//}
				//printf("\n");
			}
			else if(var->flags & ZLF_ARRAY)
			{
				if(var->size[var->rows] < $4.size)
				{
					ZL_ERROR("too many initializers");
				}
			}

			if((~var->flags & ZLF_EXTERNAL) && (var->level != 0))
			{
				pp->stack_size += var->size[var->rows];
				if($1.var->size[$1.var->rows] % 4)
				{
					pp->stack_size += 4 - ($1.var->size[$1.var->rows] % 4);
				}
			}

			cl_stack_pop(&pp->cl_stack);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
;

pointer
	: 															{ $$.flags = 0x00000000; }
	| '*' pointer												{ $$.flags = 0x01000000 + $2.flags; }
;

declarator
	: pointer direct_declarator
		{
			$$ = $2;

			if($1.flags)
			{
				$$.var->flags += $1.flags;
				$$.var->size[0] = 4;
			}
			else if($$.var->flags & ZLF_VOID)
			{
				ZL_ERROR("illegal use of type 'void'");
			}
		}
;

direct_declarator
	: T_LABEL
		{
			$$.var = cl_var_define(&pp->vars_table, $1.string, pp->current_level);

			if(!$$.var)
			{
				ZL_ERROR("redefinition");
			}

			$$.var->name = $1.string;
			$$.var->flags = (unsigned long) pp->cl_stack->data;
			$$.var->level = pp->current_level;
			$$.var->rows = 0;
			$$.var->size[0] = 4; // default var size

			switch($$.var->flags & ZLF_TYPE)
			{
				case ZLF_CHAR:
					$$.var->size[0] = 1;
					break;
				case ZLF_INT:
					if($$.var->flags & ZLF_SHORT)
					{
						$$.var->size[0] = 2;
					}
					break;
				case ZLF_DOUBLE:
					$$.var->size[0] = 8;
					break;
			}
		}
	| direct_declarator '[' const_expr ']'
		{
			$$ = $1;

			if($1.var->flags & ZLF_ARRAY)
			{
				//ZL_ERROR("sorry, multi-level arrays not yet supported!");
			}
			
			if($3.uvalue == 0)
			{
				ZL_ERROR("cannot allocate an array of constant size 0.");
			}

			$$.var->flags |= ZLF_ARRAY;
			$$.var->rows++;
			$$.var->size[$$.var->rows] = $3.uvalue; // ���-�� ��������� � ������ �������
			// ������� ���� ������ ���������� ���-�� ��������� � ������ ������ �������
		}
	| direct_declarator '[' ']'
		{
			// last array level with auto size
			$$ = $1;

			if($1.var->flags & ZLF_ARRAY)
			{
				ZL_ERROR("unknown size, missing subscript!");
			}

			$$.var->flags |= ZLF_ARRAY | ZLF_AUTOARRAY;
			$$.var->rows++;
			$$.var->size[$$.var->rows] = 0; // set after initialize
		}
	| '(' declarator ')'
		{
			$$ = $2;
		}
;

initializer
	: assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);  // assignment_expression
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);  // var address

			$$.size = 4;
			
			int temp_flag = 1;

			if(!(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_POINTER))
			{
				switch(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						$$.size = 1;
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						
						if((((cl_var_node *) pp->cl_stack->data)->flags & ZLF_ARRAY) && (($1.flags & (ZLF_ARRAY | ZLF_CHAR)) == (ZLF_ARRAY | ZLF_CHAR)))
						{
							/* 
								char text[] = "like this";


								mov edx, $1.size
							lb_loop:
								test edx, edx
								jz lb_exit
								dec edx
								size_1
								mov [ecx], [eax]
								inc eax
								inc ecx
								jmp lb_loop
							lb_exit:
							//*/
							
							$$.size = $1.size;
							unsigned long lb_loop, lb_exit;
							
							cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);
							
							//cl_push(pp, OP_DBG_PRINT);
							
							cl_push(pp, OP_MOV_REG_IMM); cl_push(pp, REG_EDX); cl_push_dw(pp, $1.size);
							lb_loop = pp->hc_fill[pp->hc_active];
							cl_push(pp, OP_TEST_REG_REG); cl_push(pp, REG_EDX); cl_push(pp, REG_EDX);
							cl_push(pp, OP_JZ);
							lb_exit = pp->hc_fill[pp->hc_active];
							cl_push_dw(pp, 0);
							cl_push(pp, OP_DEC_REG); cl_push(pp, REG_EDX);
							cl_push(pp, OP_SIZE_OVERRIDE_1);
							cl_push(pp, OP_MOV_PREG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
							//cl_push(pp, OP_DBG_PRINT);
							cl_push(pp, OP_INC_REG); cl_push(pp, REG_EAX);
							cl_push(pp, OP_INC_REG); cl_push(pp, REG_ECX);
							cl_push(pp, OP_JMP); cl_push_dw(pp, lb_loop - pp->hc_fill[pp->hc_active]);
							cl_code_replace(pp->hard_code[pp->hc_active], lb_exit, pp->hc_fill[pp->hc_active] - lb_exit);
							
							temp_flag = 0;
						}
						break;
					case ZLF_INT:
						if(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_SHORT)
						{
							$$.size = 2;
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						$$.size = 8;
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			if(temp_flag)
			{
				cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
				cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);
			}
		}
	| '{' initializer_list '}'
		{
			$$ = $2;
		}
;

initializer_list
	: initializer
		{
			//if(((zl_names_map *) pp->cl_stack->data)->flags & ZLF_AUTOARRAY)
			//{
				//((zl_names_map *) pp->cl_stack->data)->elements->size += var_size;
			//}
		}
	| initializer ','
		{
			if((~((cl_var_node *) pp->cl_stack->data)->flags & ZLF_POINTER) && (((cl_var_node *) pp->cl_stack->data)->flags & ZLF_CHAR))
			{
				//ZL_ERROR("too many initializers");
				
				// FAILED: char text[] = {"abc", "def"};
			}
			
			if(~((cl_var_node *) pp->cl_stack->data)->flags & ZLF_ARRAY)
			{
				ZL_ERROR("too many initializers");
			}

			// check array for overflow here or error!

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);

			if(((cl_var_node *) pp->cl_stack->data)->size[0] > 1)
			{
				//cl_push(pp, OP_ADD_REG_IMM); cl_push(pp, REG_EAX); cl_push_dw(pp, $1.size);
				cl_push(pp, OP_ADD_REG_IMM); cl_push(pp, REG_EAX); cl_push_dw(pp, ((cl_var_node *) pp->cl_stack->data)->size[0]);
			}
			else
			{
				cl_push(pp, OP_INC_REG); cl_push(pp, REG_EAX);
			}

			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);

			//if(((zl_names_map *) pp->cl_stack->data)->flags & ZLF_AUTOARRAY)
			{
				//((zl_names_map *) pp->cl_stack->data)->elements->size += var_size;
			}
		}
		initializer_list
		{
			$$.size = $1.size + $4.size;
		}
;

/*
struct_specifier
	: T_STRUCT T_LABEL '{' struct_declaration_list '}'			{ free_str($2.string); }
;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
;

specifier_qualifier_list
	: type_specifier
	| type_specifier specifier_qualifier_list
;

struct_declarator_list
	: declarator
	| struct_declarator_list ',' declarator
;
//*/

expression
	: assignment_expression
	| expression ','
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
		assignment_expression
;															
															
argument_expression_list									
	:  f_sw_context /* empty */											{ $$.size = 0; }
	|  f_sw_context assignment_expression								
		{
			$$.size = 4;
			//here ha is 1
		}
	|  argument_expression_list ',' f_sw_context assignment_expression
		{
			$$.size = 4 + $1.size;
			//here ha is 2

			//hc[1] = concat(hc[2], hc[1]);
			// (2 + 1) -> 1
			//printf("argument_expression_list ',' f_sw_context assignment_expression -- concat(%u, %u)\n", pp->hc_active, pp->hc_active-1);
			cl_var_swap_and_join_dimensions(pp->vars_table, pp->hc_active-1, pp->hc_fill[pp->hc_active]);
			cl_label_swap_and_join_dimensions(pp->funcs_table, pp->hc_active-1, pp->hc_fill[pp->hc_active]);
			cl_const_swap_and_join_dimensions(pp->data_table, pp->hc_active-1, pp->hc_fill[pp->hc_active]);

			/*
			printf("\n--- %u ---\n", pp->hc_active);
			zl_decompile(pp->hard_code[pp->hc_active], pp->hc_fill[pp->hc_active]);
			printf("\n--- %u ---\n", pp->hc_active-1);
			zl_decompile(pp->hard_code[pp->hc_active-1], pp->hc_fill[pp->hc_active-1]);
			*/
			
			cl_code_add(pp, pp->hard_code[pp->hc_active-1], pp->hc_fill[pp->hc_active-1]);

			/*
			printf("\n--- %u + %u -> %u ---\n", pp->hc_active, pp->hc_active-1, pp->hc_active);
			zl_decompile(pp->hard_code[pp->hc_active], pp->hc_fill[pp->hc_active]);
			printf("\n--- END ---\n");
			*/

			zfree(pp->hard_code[pp->hc_active-1]);

			pp->hard_code[pp->hc_active-1] = pp->hard_code[pp->hc_active];
			pp->hc_fill[pp->hc_active-1] = pp->hc_fill[pp->hc_active];
			pp->hc_buffer_size[pp->hc_active-1] = pp->hc_buffer_size[pp->hc_active];

			pp->hc_active--;

			pp->hard_code[pp->hc_active+1] = NULL;
			pp->hc_fill[pp->hc_active+1] = 0;
			pp->hc_buffer_size[pp->hc_active+1] = 0;
		}
;															

f_sw_context
:	{
		pp->hc_active++;
	}
;

assignment_expression										
	: expr																{ $$ = $1; }
	| unary_expression '=' assignment_expression
		{
			if(($1.flags & (ZLF_POINTER|ZLF_VOID|ZLF_CHAR|ZLF_DOUBLE|ZLF_FLOAT|ZLF_INT|ZLF_SHORT|ZLF_LONG|ZLF_SIGNED|ZLF_UNSIGNED|ZLF_STRUCT|ZLF_ARRAY)) != ($3.flags & (ZLF_POINTER|ZLF_VOID|ZLF_CHAR|ZLF_DOUBLE|ZLF_FLOAT|ZLF_INT|ZLF_SHORT|ZLF_LONG|ZLF_SIGNED|ZLF_UNSIGNED|ZLF_STRUCT|ZLF_ARRAY)))
			{
				//printf("\n\n###########\n\n %x != %x \n\n###########\n\n", $1.flags, $3.flags);
				//ZL_ERROR("type mismatch");
			}
			
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
	| unary_expression T_ADD_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_ADD_REG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
	| unary_expression T_SUB_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_SUB_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
	| unary_expression T_MUL_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_MUL_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
	| unary_expression T_DIV_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_DIV_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
	| unary_expression T_MOD_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_MOD_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
	| unary_expression T_SHL_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_SHL_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
	| unary_expression T_SHR_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_SHR_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
	| unary_expression T_AND_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_AND_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
	| unary_expression T_XOR_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_XOR_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
	| unary_expression T_OR_ASSIGN assignment_expression
		{
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!($1.flags & ZLF_POINTER))
			{
				switch($1.flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if($1.flags & ZLF_SHORT)
						{
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						ZL_ERROR("sorry, double not yet supported");
						break;
				}
			}

			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_OR_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
		}
;

unary_expression
	: T_LABEL													
		{
			// push address of value to stack
			cl_var_node *var;
			cl_label_node *func;

			$$ = $1;

			var = cl_var_find(pp->vars_table, $1.string);
			if(var)
			{
				//memcpy(&$$.var, var, sizeof(cl_var_node));
				$$.var = var;
				$$.flags = var->flags;
				$$.rows = var->rows;

				if($$.flags & ZLF_EXTERNAL)
				{
					cl_push(pp, OP_PUSH_PMEM);
					cl_var_reference(var, pp->hc_active, pp->hc_fill[pp->hc_active]);
					cl_push_dw(pp, 0);
				}
				else if($$.var->level == 0) // global var
				{
					cl_push(pp, OP_PUSH_MEM);
					cl_var_reference(var, pp->hc_active, pp->hc_fill[pp->hc_active]);
					cl_push_dw(pp, 0);
				}
				else // local var
				{
					cl_push(pp, OP_MOV_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EBP);
					if(var->flags & ZLF_PARAM)
					{
						cl_push(pp, OP_SUB_REG_IMM);
					}
					else
					{
						cl_push(pp, OP_ADD_REG_IMM);
					}
					cl_push(pp, REG_EBX); cl_push_dw(pp, var->offset);

					if(($$.flags & (ZLF_PARAM | ZLF_ARRAY)) == (ZLF_PARAM | ZLF_ARRAY))
					{
						// ������ �� ������ ���������� ����� �������� �������
						cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_EBX);
					}

					cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
				}
			}
			else
			{
				func = cl_label_find(pp->funcs_table, $1.string);
				if(!func)
				{
					free_str($1.string);
					ZL_ERROR("undeclared identifier");
				}
				
				if(~func->flags & ZLF_FUNC_INTERNAL)
				{
					free_str($1.string);
					ZL_ERROR("expected internal function");
				}
				
				$$.flags = ZLF_FUNC_INTERNAL;
				
				cl_push(pp, OP_PUSH_FUNC);
				cl_label_reference(func, pp->hc_active, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
			}
			free_str($1.string);

		}
	| '*' unary_expression	%prec T_POINTER
		{
			$$ = $2;
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EAX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
			if(!($2.flags & ZLF_POINTER))
			{
				ZL_ERROR("illegal indirection");
			}

			$$.flags -= 0x01000000;
		}
	| unary_expression '[' assignment_expression ']'
		{
			// pop address
			// add to address offset
			// push address this address to stack

			// ul *v = {0,1,2};
			// v[1]; //= 1

			$$.flags = $1.flags;

			if($$.flags & ZLF_ARRAY)
			{
				unsigned long ptr_step;
				ptr_step = 4;
				
				$$.rows--;

				if($$.rows)
				{
					ptr_step = $$.var->size[$$.rows];
				}
				else
				{
					$$.flags &= ~ZLF_ARRAY;

					if(!($$.flags & ZLF_POINTER))
					{
						ptr_step = $$.var->size[0];
					}
				}

				cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);
				cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
				if(ptr_step > 1)
				{
					cl_push(pp, OP_MOV_REG_IMM); cl_push(pp, REG_EBX); cl_push_dw(pp, ptr_step);
					cl_push(pp, OP_MUL_REG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
				}
				cl_push(pp, OP_ADD_REG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
				cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
			}
			else if($$.flags & ZLF_POINTER)
			{
				$$.flags -= 0x01000000;

				if(!($$.flags & ZLF_POINTER))
				{
					switch($$.flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							$$.var->size[0] = 1;
							break;
						case ZLF_INT:
							if($$.flags & ZLF_SHORT)
							{
								$$.var->size[0] = 2;
							}
							break;
						case ZLF_DOUBLE:
							$$.var->size[0] = 8;
							break;
					}
				}

				cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);
				cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
				cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EAX); cl_push(pp, REG_EAX);
				cl_push(pp, OP_MOV_REG_IMM); cl_push(pp, REG_EBX); cl_push_dw(pp, $$.var->size[0]);
				cl_push(pp, OP_MUL_REG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
				cl_push(pp, OP_ADD_REG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
				cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
			}
			else
			{
				ZL_ERROR("subscript requires array or pointer type");
			}
		}
//	| unary_expression '.' T_LABEL
//	| unary_expression T_PTR_OP T_LABEL
//	| cast_expression														{ $$.flags = $1.flags; }
;

//*
cast_expression
	: declaration_specifiers pointer							
		{
			$$.flags = $1.flags + $2.flags;
			if($$.flags & ZLF_EXTERNAL)
			{
				ZL_ERROR("external variable must be defined global");
			}

			if(!($$.flags & ZLF_TYPE))
			{
				$$.flags |= ZLF_INT;	// set default type
			}
			
			if(($$.flags & (ZLF_INT | ZLF_CHAR)) && (($$.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) == 0))
			{
				$$.flags |= ZLF_SIGNED;	// set default modifier
			}
			
			if(($$.flags & ZLF_INT) && (($$.flags & (ZLF_SHORT | ZLF_LONG)) == 0))
			{
				$$.flags |= ZLF_LONG;	// set default modifier
			}
			
		}
;
//*/

expr
//	: const_expr												{ cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, $1.uvalue); }
	: T_CONSTANT_LONG											{ cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, $1.uvalue); }
//	| T_CONSTANT_DOUBLE											{ cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, $1.value); }
	| T_CONSTANT_STRING											
		{
			cl_push(pp, OP_PUSH_OFFSET);
			cl_const_define(&pp->data_table, pp->hc_active, $1.string, $1.size, pp->hc_fill[pp->hc_active]); // ��������� ������ �� ��� ������
			free_str($1.string);
			cl_push_dw(pp, 0);						// ������ ��������
		}
	| '(' expr ')'												{ $$ = $2; }
	| expr '+' expr												{ cl_do_op(pp, OP_ADD_STK_STK, &$$, &$1, &$3); }
	| expr '-' expr												{ cl_do_op(pp, OP_SUB_STK_STK, &$$, &$1, &$3); }
	| expr '*' expr												{ cl_do_op(pp, OP_MUL_STK_STK, &$$, &$1, &$3); }
	| expr '/' expr												{ cl_do_op(pp, OP_DIV_STK_STK, &$$, &$1, &$3); }
	| expr '|' expr												{ cl_do_op(pp, OP_OR_STK_STK, &$$, &$1, &$3); }
	| expr '&' expr												{ cl_do_op(pp, OP_AND_STK_STK, &$$, &$1, &$3); }
	| expr '%' expr												{ cl_do_op(pp, OP_MOD_STK_STK, &$$, &$1, &$3); }
	| expr '^' expr												{ cl_do_op(pp, OP_XOR_STK_STK, &$$, &$1, &$3); }
	| expr T_SHL expr											{ cl_do_op(pp, OP_SHL_STK_STK, &$$, &$1, &$3); }
	| expr T_SHR expr											{ cl_do_op(pp, OP_SHR_STK_STK, &$$, &$1, &$3); }
	| expr '>' expr
		{
			if(($1.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) != ($3.flags & (ZLF_SIGNED | ZLF_UNSIGNED)))
			{
				ZL_WARNING("'>': signed/unsigned mismatch");
			}

			if(($1.flags | $3.flags) & ZLF_UNSIGNED)
			{
				cl_do_op(pp, OP_UG_STK_STK, &$$, &$1, &$3);
			}
			else
			{
				cl_do_op(pp, OP_G_STK_STK, &$$, &$1, &$3);
			}
		}
	| expr '<' expr
		{
			if(($1.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) != ($3.flags & (ZLF_SIGNED | ZLF_UNSIGNED)))
			{
				ZL_WARNING("'>': signed/unsigned mismatch");
			}

			if(($1.flags | $3.flags) & ZLF_UNSIGNED)
			{
				cl_do_op(pp, OP_UL_STK_STK, &$$, &$1, &$3);
			}
			else
			{
				cl_do_op(pp, OP_L_STK_STK, &$$, &$1, &$3);
			}
		}
	| expr T_GE expr
		{
			if(($1.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) != ($3.flags & (ZLF_SIGNED | ZLF_UNSIGNED)))
			{
				ZL_WARNING("'>': signed/unsigned mismatch");
			}

			if(($1.flags | $3.flags) & ZLF_UNSIGNED)
			{
				cl_do_op(pp, OP_UGE_STK_STK, &$$, &$1, &$3);
			}
			else
			{
				cl_do_op(pp, OP_GE_STK_STK, &$$, &$1, &$3);
			}
		}
	| expr T_LE expr
		{
			if(($1.flags & (ZLF_SIGNED | ZLF_UNSIGNED)) != ($3.flags & (ZLF_SIGNED | ZLF_UNSIGNED)))
			{
				ZL_WARNING("'>': signed/unsigned mismatch");
			}

			if(($1.flags | $3.flags) & ZLF_UNSIGNED)
			{
				cl_do_op(pp, OP_ULE_STK_STK, &$$, &$1, &$3);
			}
			else
			{
				cl_do_op(pp, OP_LE_STK_STK, &$$, &$1, &$3);
			}
		}
	| expr T_EQ expr											{ cl_do_op(pp, OP_E_STK_STK, &$$, &$1, &$3); }
	| expr T_NE expr											{ cl_do_op(pp, OP_NE_STK_STK, &$$, &$1, &$3); }
	| expr T_OR
		{
			/*
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			//lb_skip->offset = pp->hc_fill;
			//lb_skip->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);
			*/

			cl_push(pp, OP_JNZ_STK);
			//cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
		expr
		{
			/*
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill[pp->hc_active];
			lb_skip->flags = ZLF_DEFINED;
			*/
			unsigned long lb_skip;
			lb_skip = (unsigned long) cl_stack_pop(&pp->cl_stack);
			cl_code_replace(pp->hard_code[pp->hc_active], lb_skip, pp->hc_fill[pp->hc_active] - lb_skip);
		}
	| expr T_AND
		{
			/*
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			//lb_skip->offset = pp->hc_fill;
			//lb_skip->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);
			*/

			cl_push(pp, OP_JZ_STK);
			//cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
		expr
		{
			/*
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill[pp->hc_active];
			lb_skip->flags = ZLF_DEFINED;
			*/
			unsigned long lb_skip;
			lb_skip = (unsigned long) cl_stack_pop(&pp->cl_stack);
			cl_code_replace(pp->hard_code[pp->hc_active], lb_skip, pp->hc_fill[pp->hc_active] - lb_skip);
		}
	| expr '?'
		{
			/*
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			cl_stack_push(&pp->cl_stack, lb_skip);
			*/

			cl_push(pp, OP_JZ_POP_STK);
			//cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_stack_push(&pp->cl_stack, (void *) (pp->hc_fill[pp->hc_active]));
			cl_push_dw(pp, 0);
		}
		expr ':'
		{
			/*
			cl_label_node *lb_skip, *lb_else;
			lb_else = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			*/
			unsigned long lb_else;
			lb_else = (unsigned long) cl_stack_pop(&pp->cl_stack);

			
			cl_push(pp, OP_JMP);
			//cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			/*
			lb_else->offset = pp->hc_fill[pp->hc_active];
			lb_else->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);
			*/
			cl_code_replace(pp->hard_code[pp->hc_active], lb_else, pp->hc_fill[pp->hc_active] - lb_else);
		}
		expr
		{
			/*
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill[pp->hc_active];
			lb_skip->flags = ZLF_DEFINED;
			*/
			unsigned long lb_skip;
			lb_skip = (unsigned long)cl_stack_pop(&pp->cl_stack);
			cl_code_replace(pp->hard_code[pp->hc_active], lb_skip, pp->hc_fill[pp->hc_active] - lb_skip);
		}
	| '~' expr													{ $$ = $2; cl_push(pp, OP_BNOT_STK); }
	| '!' expr													{ $$ = $2; cl_push(pp, OP_LNOT_STK); }
	| '+' expr	%prec T_PLUS									{ $$ = $2; }
	| '-' expr	%prec T_MINUS
		{
			$$ = $2;
			$$.flags &= ~ZLF_UNSIGNED;
			$$.flags |= ZLF_SIGNED;
			cl_push(pp, OP_MINUS_STK);
		}
	| '&' unary_expression	%prec T_POINTER						{ /* nothing to do */ }
	/*
	| '*' expr	%prec T_POINTER
		{
			$$ = $2;
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EAX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
			if(!($2.flags & ZLF_POINTER))
			{
				ZL_ERROR("illegal indirection");
			}

			$$.flags -= 0x01000000;
		}
	*/
	| unary_expression T_INC
		{
			if($1.flags & (ZLF_STRUCT | ZLF_ARRAY))
			{
				ZL_ERROR("needs l-value");
			}

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);

			if($1.flags & ZLF_POINTER)
			{
				unsigned long ptr_step;
				ptr_step = 4;

				if(($1.flags & ZLF_POINTER) == 0x01000000)
				{
					switch($$.flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							ptr_step = 1;
							break;
						case ZLF_INT:
							if($$.flags & ZLF_SHORT)
							{
								ptr_step = 2;
							}
							break;
						case ZLF_DOUBLE:
							ptr_step = 8;
							break;
					}
				}

				cl_push(pp, OP_ADD_REG_IMM); cl_push(pp, REG_ECX); cl_push_dw(pp, ptr_step);
			}
			else
			{
				cl_push(pp, OP_INC_REG); cl_push(pp, REG_ECX);
			}

			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
		}
	| unary_expression T_DEC
		{
			if($1.flags & (ZLF_STRUCT | ZLF_ARRAY))
			{
				ZL_ERROR("needs l-value");
			}

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);

			if($1.flags & ZLF_POINTER)
			{
				unsigned long ptr_step;
				ptr_step = 4;

				if(($1.flags & ZLF_POINTER) == 0x01000000)
				{
					switch($$.flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							ptr_step = 1;
							break;
						case ZLF_INT:
							if($$.flags & ZLF_SHORT)
							{
								ptr_step = 2;
							}
							break;
						case ZLF_DOUBLE:
							ptr_step = 8;
							break;
					}
				}

				cl_push(pp, OP_SUB_REG_IMM); cl_push(pp, REG_ECX); cl_push_dw(pp, ptr_step);
			}
			else
			{
				cl_push(pp, OP_DEC_REG); cl_push(pp, REG_ECX);
			}

			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
		}
	| T_INC unary_expression
		{
			if($2.flags & (ZLF_STRUCT | ZLF_ARRAY))
			{
				ZL_ERROR("needs l-value");
			}

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);

			if($2.flags & ZLF_POINTER)
			{
				unsigned long ptr_step;
				ptr_step = 4;

				if(($1.flags & ZLF_POINTER) == 0x01000000)
				{
					switch($$.flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							ptr_step = 1;
							break;
						case ZLF_INT:
							if($$.flags & ZLF_SHORT)
							{
								ptr_step = 2;
							}
							break;
						case ZLF_DOUBLE:
							ptr_step = 8;
							break;
					}
				}

				cl_push(pp, OP_ADD_REG_IMM); cl_push(pp, REG_ECX); cl_push_dw(pp, ptr_step);
			}
			else
			{
				cl_push(pp, OP_INC_REG); cl_push(pp, REG_ECX);
			}

			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);
		}
	| T_DEC unary_expression
		{
			if($2.flags & (ZLF_STRUCT | ZLF_ARRAY))
			{
				ZL_ERROR("needs l-value");
			}

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);

			if($2.flags & ZLF_POINTER)
			{
				unsigned long ptr_step;
				ptr_step = 4;

				if(($1.flags & ZLF_POINTER) == 0x01000000)
				{
					switch($$.flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							ptr_step = 1;
							break;
						case ZLF_INT:
							if($$.flags & ZLF_SHORT)
							{
								ptr_step = 2;
							}
							break;
						case ZLF_DOUBLE:
							ptr_step = 8;
							break;
					}
				}

				cl_push(pp, OP_SUB_REG_IMM); cl_push(pp, REG_ECX); cl_push_dw(pp, ptr_step);
			}
			else
			{
				cl_push(pp, OP_DEC_REG); cl_push(pp, REG_ECX);
			}

			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);
		}
//	| unary_expression '(' argument_expression_list ')'
	| T_LABEL '(' argument_expression_list ')'
		{
			cl_label_node *func;
			cl_var_node *var;

			//if(pp->hc_fill[pp->hc_active] > 0)
			{
				//hc[active-1] = concat(hc[active-1], hc[active])
				// (0 + 1) -> 0
				//printf("T_LABEL ( argument_expression_list ) -- concat(%u, %u)\n", pp->hc_active-1, pp->hc_active);
				cl_var_join_dimension(pp->vars_table, pp->hc_active, pp->hc_active-1, pp->hc_fill[pp->hc_active-1]);
				cl_label_join_dimension(pp->funcs_table, pp->hc_active, pp->hc_active-1, pp->hc_fill[pp->hc_active-1]);
				cl_const_join_dimension(pp->data_table, pp->hc_active, pp->hc_active-1, pp->hc_fill[pp->hc_active-1]);
				pp->hc_active--;
				//cl_const_shift_dimension(pp->data_table, pp->hc_active, 0);
				
				/*
				printf("\n--- %u ---\n", pp->hc_active);
				zl_decompile(pp->hard_code[pp->hc_active], pp->hc_fill[pp->hc_active]);
				printf("\n--- %u ---\n", pp->hc_active+1);
				zl_decompile(pp->hard_code[pp->hc_active+1], pp->hc_fill[pp->hc_active+1]);
				*/
				
				cl_code_add(pp, pp->hard_code[pp->hc_active+1], pp->hc_fill[pp->hc_active+1]);

				/*
				printf("\n--- %u + %u -> %u ---\n", pp->hc_active, pp->hc_active+1, pp->hc_active);
				zl_decompile(pp->hard_code[pp->hc_active], pp->hc_fill[pp->hc_active]);
				printf("\n--- END ---\n");
				*/
				
				zfree(pp->hard_code[pp->hc_active+1]);

				pp->hard_code[pp->hc_active+1] = NULL;
				pp->hc_fill[pp->hc_active+1] = 0;
				pp->hc_buffer_size[pp->hc_active+1] = 0;
			}

			/*
			func = cl_label_define(&pp->funcs_table, $1.string);
			free_str($1.string);

			if(~func->flags & ZLF_DEFINED)
			{
				func->flags = ZLF_FUNC_INTERNAL;
				func->library = NULL;
			}
			*/

			// - OR - then function must be predefined before call
			func = cl_label_find(pp->funcs_table, $1.string);
			if(func)
			{
				$$.flags = func->flags & (ZLF_POINTER|ZLF_VOID|ZLF_CHAR|ZLF_DOUBLE|ZLF_FLOAT|ZLF_INT|ZLF_SHORT|ZLF_LONG|ZLF_SIGNED|ZLF_UNSIGNED|ZLF_STRUCT|ZLF_ARRAY);
				
				if(func->flags & ZLF_FUNC_INTERNAL)
				{
					cl_push(pp, OP_CALL_IMM); // call near
				}
				else
				{
					cl_push(pp, OP_CALL_FAR); // rcall far
				}
				
				cl_label_reference(func, pp->hc_active, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
			}
			else // get function address from variable
			{
				var = cl_var_find(pp->vars_table, $1.string);
				if(!var)
				{
					free_str($1.string);
					ZL_ERROR("undeclared identifier");
				}

				//memcpy(&$$.var, var, sizeof(cl_var_node));
				$1.var = var;
				$1.flags = var->flags;
				$1.rows = var->rows;

				if($1.flags & ZLF_EXTERNAL)
				{
					cl_push(pp, OP_PUSH_PMEM);
					cl_var_reference(var, pp->hc_active, pp->hc_fill[pp->hc_active]);
					cl_push_dw(pp, 0);
				}
				else if($1.var->level == 0) // global var
				{
					cl_push(pp, OP_PUSH_MEM);
					cl_var_reference(var, pp->hc_active, pp->hc_fill[pp->hc_active]);
					cl_push_dw(pp, 0);
				}
				else // local var
				{
					cl_push(pp, OP_MOV_REG_REG); cl_push(pp, REG_EBX); cl_push(pp, REG_EBP);
					if(var->flags & ZLF_PARAM)
					{
						cl_push(pp, OP_SUB_REG_IMM);
					}
					else
					{
						cl_push(pp, OP_ADD_REG_IMM);
					}
					cl_push(pp, REG_EBX); cl_push_dw(pp, var->offset);

					if(($1.flags & (ZLF_PARAM | ZLF_ARRAY)) == (ZLF_PARAM | ZLF_ARRAY))
					{
						// ������ �� ������ ���������� ����� �������� �������
						cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_EBX);
					}

					cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
				}

				cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
				cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EAX); cl_push(pp, REG_EAX);

				cl_push(pp, OP_CALL_REG);  cl_push(pp, REG_EAX); // call near
			}
			free_str($1.string);

			if($3.size)
			{
				cl_push(pp, OP_SUB_REG_IMM); cl_push(pp, REG_ESP); cl_push_dw(pp, $3.size);
			}
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
	| unary_expression
		{
			// get value from address and push
			if(!($1.flags & (ZLF_STRUCT | ZLF_ARRAY | ZLF_FUNC_INTERNAL)))
			{
				cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
				cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EAX); cl_push(pp, REG_EAX);

				if(!($1.flags & ZLF_POINTER))
				{
					switch($1.flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							cl_push(pp, OP_MOV_REG_IMM); cl_push(pp, REG_ECX); cl_push_dw(pp, 0x000000FF);
							cl_push(pp, OP_AND_REG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
							break;
						case ZLF_INT:
							if($1.flags & ZLF_SHORT)
							{
								cl_push(pp, OP_MOV_REG_IMM); cl_push(pp, REG_ECX); cl_push_dw(pp, 0x0000FFFF);
								cl_push(pp, OP_AND_REG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
							}
							break;
						case ZLF_DOUBLE:
							ZL_ERROR("sorry, double not yet supported");
							break;
					}
				}

				cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
			}
		}
	| T_SIZEOF '(' declaration_specifiers ')'
		{
			$$.flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			unsigned long var_size;
			switch($3.flags & ZLF_TYPE)
			{
				case ZLF_CHAR:
					var_size = 1;					
					break;
				case ZLF_INT:
					if($3.flags & ZLF_SHORT)
					{
						var_size = 2;
					}
					else
					{
						var_size = 4;
					}
					break;
				case ZLF_DOUBLE:
					var_size = 8;
					break;
			}

			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, var_size);
		}
	| T_SIZEOF '('
		{
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
		unary_expression ')'
		{
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
			$$.flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, $4.var->size[$4.rows]);
		}
	| T_TYPEOF '(' declaration_specifiers ')'
		{
			$$.flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, $3.flags);
		}
	| T_TYPEOF '('
		{
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
		unary_expression ')'
		{
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
			$$.flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, $4.var->flags);
		}
//*/
	| '(' cast_expression ')' unary_expression
		{
			$$ = $4;
			$$.flags = $2.flags; 
			//printf("(%s) %s\n", ($2.flags&ZLF_SIGNED)?"signed":(($2.flags&ZLF_UNSIGNED)?"unsigned":""), ($4.flags&ZLF_SIGNED)?"signed":(($4.flags&ZLF_UNSIGNED)?"unsigned":""));
		}
;

const_expr
	: T_CONSTANT_LONG											{ /* nop */ }
//	| T_CONSTANT_DOUBLE											{ /* nop */ }
//	| T_CONSTANT_STRING											{ /* incorrect */ }
	| '(' const_expr ')'										{ /* nop */ }
	| const_expr '+' const_expr									{ $$.value = $1.value + $3.value; }
	| const_expr '-' const_expr									{ $$.value = $1.value - $3.value; }
	| const_expr '*' const_expr									{ $$.value = $1.value * $3.value; }
	| const_expr '/' const_expr									{ $$.value = $1.value / $3.value; }
	| const_expr '|' const_expr									{ $$.value = $1.value | $3.value; }
	| const_expr '&' const_expr									{ $$.value = $1.value & $3.value; }
	| const_expr '%' const_expr									{ $$.value = $1.value % $3.value; }
	| const_expr '^' const_expr									{ $$.value = $1.value ^ $3.value; }
	| const_expr T_SHL const_expr								{ $$.value = $1.value << $3.value; }
	| const_expr T_SHR const_expr								{ $$.value = $1.value >> $3.value; }
	| const_expr '>' const_expr									{ $$.value = $1.value < $3.value; }
	| const_expr '<' const_expr									{ $$.value = $1.value > $3.value; }
	| const_expr T_GE const_expr								{ $$.value = $1.value >= $3.value; }
	| const_expr T_LE const_expr								{ $$.value = $1.value <= $3.value; }
	| const_expr T_EQ const_expr								{ $$.value = $1.value == $3.value; }
	| const_expr T_NE const_expr								{ $$.value = $1.value != $3.value; }
	| const_expr T_OR const_expr								{ $$.value = $1.value || $3.value; }
	| const_expr T_AND const_expr								{ $$.value = $1.value && $3.value; }
	| const_expr '?' const_expr ':' const_expr					{ $$.value = $1.value ? $3.value : $5.value; }
	| '~' const_expr											{ $$.value = ~$2.value; }
	| '!' const_expr											{ $$.value = !$2.value; }
	| '+' const_expr	%prec T_PLUS							{ /* nothing to do */ }
	| '-' const_expr	%prec T_MINUS							{ $$.value = -$2.value; }
	| T_SIZEOF '(' declaration_specifiers ')'
		{
			unsigned long var_size;
			switch($3.flags & ZLF_TYPE)
			{
				case ZLF_CHAR:
					var_size = 1;					
					break;
				case ZLF_INT:
					if($3.flags & ZLF_SHORT)
					{
						var_size = 2;
					}
					else
					{
						var_size = 4;
					}
					break;
				case ZLF_DOUBLE:
					var_size = 8;
					break;
			}

			$$.uvalue = var_size;
		}
	| T_SIZEOF '('
		{
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
		unary_expression ')'
		{
			$$.uvalue = $4.var->size[$4.rows];
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
	| T_TYPEOF '(' declaration_specifiers ')'
		{
			$$.uvalue = $3.flags;
		}
	| T_TYPEOF '('
		{
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
		unary_expression ')'
		{
			$$.uvalue = $4.var->flags;
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
;









%%









void yyerror(void *scanner, cl_parser_params *pp, const char *err)
{
	pp->error_msg = cl_sprintf("zlc: error at line %d: %s", pp->lineno, err);
}

void yywarning(void *scanner, cl_parser_params *pp, const char *err)
{
	char *temp_str;
	temp_str = cl_sprintf("zlc: warning at line %d: %s\n", pp->lineno, err);
	cl_strcat(&pp->warning_msg, temp_str);
	free_str(temp_str);
}

int zl_compile(unsigned char **hardcode, unsigned long *hard_code_size, char *code, char **warning_msg, char **error_msg,
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
)
{
	int ret;
	void *scanner;
	cl_parser_params pp;
	cl_label_node *func;

	memset(&pp, 0, sizeof(cl_parser_params));

	pp.source_code = code;
	pp.sc_length = strlen(code);
	pp.lineno = 1;
	
	if(hardcode)		*hardcode  = NULL;
	if(hard_code_size)	*hard_code_size = 0;
	if(warning_msg)		*warning_msg = NULL;
	if(error_msg)		*error_msg = NULL;
	if(const_sect)		*const_sect = NULL;
	if(const_size)		*const_size = 0;
	if(data_sect)		*data_sect = NULL;
	if(data_size)		*data_size = 0;
	if(reloc_sect)		*reloc_sect = NULL;
	if(reloc_size)		*reloc_size = 0;
	if(import_sect)		*import_sect = NULL;
	if(import_size)		*import_size = 0;
	if(export_sect)		*export_sect = NULL;
	if(export_size)		*export_size = 0;
	if(map_sect)		*map_sect = NULL;
	if(map_size)		*map_size = 0;

	// predefined int main()
	func = cl_label_define(&pp.funcs_table, "main");

	func->flags = ZLF_FUNC_INTERNAL | ZLF_SIGNED | ZLF_LONG | ZLF_INT;
	func->library = NULL;
	
	/* moved to grammar
	cl_push(&pp, OP_CALL);
	cl_label_reference(func, 0, pp.hc_fill[0]);
	cl_push_dw(&pp, 0);
	cl_push(&pp, OP_EOF);
	//*/

	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x6D697A66);
	cl_push(&pp, OP_POP_REG); cl_push(&pp, REG_EAX);
	cl_push(&pp, OP_JMP);
	cl_push_dw(&pp, 64);				// 8: jump to lb_start
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 13: const_sect offset
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 18: const_sect size
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 23: data_sect offset
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 28: data_sect size
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 33: reloc_sect offset
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 38: reloc_sect size
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 43: import_sect offset
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 48: import_sect size
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 53: export_sect offset
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 58: export_sect size
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 63: map_sect offset
	cl_push(&pp, OP_PUSH_IMM);
	cl_push_dw(&pp, 0x00000000);		// 68: map_sect size

	yylex_init(&scanner);
	yyset_extra(&pp, scanner);
	ret = yyparse(scanner, &pp);
	yylex_destroy(scanner);

	cl_push(&pp, OP_EOF);

	if(warning_msg)
	{
		*warning_msg = pp.warning_msg;
	}
	else if(ret)
	{
		free_str(pp.warning_msg);
	}

	if(error_msg)
	{
		*error_msg = pp.error_msg;
	}
	else if(ret)
	{
		free_str(pp.error_msg);
	}

	if(!ret && cl_label_fix(pp.funcs_table, pp.hard_code[0]))
	{
		ret = 1;
		if(error_msg)
		{
			*error_msg = alloc_string("zlc: error, jump to undefined label");
		}
	}

	/*
	printf("\n--- %u ---\n", pp.hc_active);
	zl_decompile(pp.hard_code[pp.hc_active], pp.hc_fill[pp.hc_active]);
	printf("--- END END END ---\n");
	//*/

	if(!ret)
	{
		cl_link_sections(pp.data_table, pp.vars_table, pp.funcs_table, &pp.hard_code[0], &pp.hc_fill[0],
			const_sect, const_size,
			data_sect, data_size,
			reloc_sect, reloc_size,
			import_sect, import_size,
			export_sect, export_size,
			map_sect, map_size);
	}

	/*
	printf("\n--- %u ---\n", pp.hc_active);
	zl_decompile(pp.hard_code[pp.hc_active], pp.hc_fill[pp.hc_active]);
	printf("--- END END END ---\n");
	//*/

	*hard_code_size = pp.hc_fill[0];

	cl_label_free(&pp.labels_table);
	cl_label_free(&pp.funcs_table);
	cl_const_free(&pp.data_table);
	cl_var_free_level(&pp.vars_table, 0);

	cl_stack_free(&pp.cl_stack);
	cl_stack_free(&pp.cl_loop_stack);

	*hardcode = pp.hard_code[0];
	
	while(pp.hc_active)
	{
		zfree(pp.hard_code[pp.hc_active]);
		pp.hc_active--;
	}

	return ret;
}

