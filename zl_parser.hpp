/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_ZL_PARSER_HPP_INCLUDED
# define YY_YY_ZL_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1909  */


#include "zl_compiler.h"
#include "zl.h"


#line 51 "zl_parser.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_OR_ASSIGN = 258,
    T_XOR_ASSIGN = 259,
    T_SHL_ASSIGN = 260,
    T_SHR_ASSIGN = 261,
    T_ADD_ASSIGN = 262,
    T_MOD_ASSIGN = 263,
    T_DIV_ASSIGN = 264,
    T_MUL_ASSIGN = 265,
    T_SUB_ASSIGN = 266,
    T_AND_ASSIGN = 267,
    T_OR = 268,
    T_AND = 269,
    T_EQ = 270,
    T_NE = 271,
    T_LE = 272,
    T_GE = 273,
    T_SHL = 274,
    T_SHR = 275,
    T_INC = 276,
    T_DEC = 277,
    T_PLUS = 278,
    T_MINUS = 279,
    T_POINTER = 280,
    T_IF = 281,
    T_THEN = 282,
    T_ELSE = 283,
    T_PTR_OP = 284,
    T_WHILE = 285,
    T_DO = 286,
    T_BREAK = 287,
    T_CONTINUE = 288,
    T_FOR = 289,
    T_SWITCH = 290,
    T_CASE = 291,
    T_DEFAULT = 292,
    T_LABEL = 293,
    T_CONSTANT_DOUBLE = 294,
    T_CONSTANT_LONG = 295,
    T_CONSTANT_STRING = 296,
    T_VOID = 297,
    T_CHAR = 298,
    T_SHORT = 299,
    T_INT = 300,
    T_LONG = 301,
    T_FLOAT = 302,
    T_DOUBLE = 303,
    T_SIGNED = 304,
    T_UNSIGNED = 305,
    T_STRUCT = 306,
    T_STRUCT_DEFINED = 307,
    T_ELLIPSIS = 308,
    T_STRING = 309,
    T_EXTERN = 310,
    T_VAR = 311,
    T_IMPORT = 312,
    T_FROM = 313,
    T_GOTO = 314,
    T_SIZEOF = 315,
    T_TYPEOF = 316,
    T_RETURN = 317,
    T_REGISTER = 318,
    T_OPERATOR = 319,
    T_ASM = 320,
    T_PARAM_SEPARATOR = 321,
    T_NOP = 322,
    T_DBG_PRINT_REGS = 323,
    T_FUNCTION = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void *scanner, cl_parser_params *pp);

#endif /* !YY_YY_ZL_PARSER_HPP_INCLUDED  */
