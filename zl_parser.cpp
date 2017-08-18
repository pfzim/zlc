/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 7 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:316  */


#include "zl_parser.h"


#line 69 "zl_parser.cpp" /* yacc.c:316  */



/* Copy the first part of user declarations.  */
#line 12 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:339  */


//#define YYPARSE_PARAM pp
//#define YYPP ((cl_parser_params *) pp)
//#define YYLEX_PARAM pp

#define YYSTYPE zlval

#define ZL_WARNING(message) { yywarning(scanner, pp, message); }
#define ZL_ERROR(message) { yyerror(scanner, pp, message); YYABORT; }

void yywarning(void *scanner, cl_parser_params *pp, const char *err);
void yyerror(void *scanner, cl_parser_params *pp, const char *err);
int yylex(zlval *yylval, void *yyscanner);

int yylex_init(void  **ptr_yy_globals);
int yylex_destroy(void *yyscanner);
void yyset_extra(cl_parser_params *user_defined, void *yyscanner);


#line 95 "zl_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "zl_parser.hpp".  */
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
#line 1 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:355  */


#include "zl_compiler.h"
#include "zl.h"


#line 132 "zl_parser.cpp" /* yacc.c:355  */

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

/* Copy the second part of user declarations.  */

#line 224 "zl_parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   916

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  413

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      91,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,     2,     2,    34,    21,     2,
      92,    93,    32,    30,     3,    31,    47,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,    95,
      24,     4,    26,    15,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    94,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    19,    90,    36,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    17,    18,
      22,    23,    25,    27,    28,    29,    37,    38,    40,    41,
      42,    44,    45,    46,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   156,   157,   161,   162,   165,   166,   169,
     170,   173,   174,   175,   176,   177,   178,   179,   180,   185,
     184,   197,   201,   202,   203,   207,   223,   224,   225,   226,
     248,   269,   270,   271,   275,   276,   277,   302,   303,   307,
     308,   309,   317,   325,   340,   355,   365,   380,   391,   379,
     412,   427,   435,   411,   448,   466,   488,   447,   519,   518,
     545,   544,   569,   570,   571,   575,   576,   581,   585,   580,
     619,   618,   634,   636,   635,   660,   679,   698,   718,   738,
     758,   778,   797,   796,   879,   882,   886,   891,   897,   905,
     913,   918,   917,   994,   993,  1024,  1025,  1052,  1053,  1089,
    1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,  1105,
    1106,  1110,  1170,  1169,  1315,  1316,  1320,  1337,  1368,  1387,
    1401,  1408,  1489,  1496,  1504,  1503,  1570,  1571,  1575,  1576,
    1581,  1623,  1629,  1630,  1663,  1692,  1721,  1750,  1779,  1808,
    1837,  1866,  1895,  1924,  1956,  2010,  2023,  2108,  2137,  2139,
    2146,  2147,  2148,  2149,  2150,  2151,  2152,  2153,  2154,  2155,
    2156,  2157,  2173,  2189,  2205,  2221,  2222,  2224,  2223,  2252,
    2251,  2280,  2293,  2279,  2326,  2327,  2328,  2329,  2336,  2352,
    2396,  2440,  2484,  2528,  2601,  2633,  2660,  2659,  2670,  2676,
    2675,  2687,  2697,  2700,  2701,  2702,  2703,  2704,  2705,  2706,
    2707,  2708,  2709,  2710,  2711,  2712,  2713,  2714,  2715,  2716,
    2717,  2718,  2719,  2720,  2721,  2722,  2723,  2724,  2750,  2749,
    2758,  2763,  2762
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "'='", "T_OR_ASSIGN",
  "T_XOR_ASSIGN", "T_SHL_ASSIGN", "T_SHR_ASSIGN", "T_ADD_ASSIGN",
  "T_MOD_ASSIGN", "T_DIV_ASSIGN", "T_MUL_ASSIGN", "T_SUB_ASSIGN",
  "T_AND_ASSIGN", "'?'", "':'", "T_OR", "T_AND", "'|'", "'^'", "'&'",
  "T_EQ", "T_NE", "'<'", "T_LE", "'>'", "T_GE", "T_SHL", "T_SHR", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "T_INC", "T_DEC", "'@'",
  "T_PLUS", "T_MINUS", "T_POINTER", "'['", "T_IF", "T_THEN", "T_ELSE",
  "'.'", "T_PTR_OP", "T_WHILE", "T_DO", "T_BREAK", "T_CONTINUE", "T_FOR",
  "T_SWITCH", "T_CASE", "T_DEFAULT", "T_LABEL", "T_CONSTANT_DOUBLE",
  "T_CONSTANT_LONG", "T_CONSTANT_STRING", "T_VOID", "T_CHAR", "T_SHORT",
  "T_INT", "T_LONG", "T_FLOAT", "T_DOUBLE", "T_SIGNED", "T_UNSIGNED",
  "T_STRUCT", "T_STRUCT_DEFINED", "T_ELLIPSIS", "T_STRING", "T_EXTERN",
  "T_VAR", "T_IMPORT", "T_FROM", "T_GOTO", "T_SIZEOF", "T_TYPEOF",
  "T_RETURN", "T_REGISTER", "T_OPERATOR", "T_ASM", "T_PARAM_SEPARATOR",
  "T_NOP", "T_DBG_PRINT_REGS", "T_FUNCTION", "'{'", "'}'", "'\\n'", "'('",
  "')'", "']'", "';'", "$accept", "top", "program_list", "program",
  "f_current_level_zero", "f_current_level_one", "statement_list",
  "statement", "compound_statement", "$@1", "assembler_statement",
  "assembler_command_list", "assembler_command", "assembler_argument_list",
  "operator_parameter", "expression_statement", "buildin_statement",
  "selection_statement", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "$@11", "switch_statement_list", "switch_case_list",
  "switch_case", "$@12", "$@13", "switch_default", "$@14",
  "else_statement", "$@15", "labeled_statement", "jump_statement",
  "declaration_function", "$@16", "f_current_level_increment",
  "function_arguments_specifiers", "function_arguments_list",
  "function_argument", "$@17", "declaration_statement", "$@18",
  "function_type_specifiers", "declaration_specifiers", "type_specifier",
  "init_declarator_list", "init_declarator", "$@19", "pointer",
  "declarator", "direct_declarator", "initializer", "initializer_list",
  "$@20", "expression", "argument_expression_list", "f_sw_context",
  "assignment_expression", "unary_expression", "cast_expression", "expr",
  "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "const_expr", "$@27",
  "$@28", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,    61,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,    63,    58,   268,   269,   124,
      94,    38,   270,   271,    60,   272,    62,   273,   274,   275,
      43,    45,    42,    47,    37,    33,   126,   276,   277,    64,
     278,   279,   280,    91,   281,   282,   283,    46,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   123,
     125,    10,    40,    41,    93,    59
};
# endif

#define YYPACT_NINF -308

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-308)))

#define YYTABLE_NINF -9

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-9)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      59,    41,  -308,    59,   288,   -43,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
     288,   -16,   288,  -308,    22,  -308,   288,    22,  -308,    22,
       7,  -308,   -13,    52,    22,     4,  -308,    22,  -308,  -308,
      22,    20,  -308,    17,  -308,  -308,   -12,   564,   532,   -10,
       8,  -308,   498,   498,   498,   498,  -308,    54,    75,   498,
    -308,   231,    -9,   550,   550,    -9,   550,   550,    -9,    -9,
      76,  -308,  -308,    89,    90,   532,   481,  -308,  -308,   283,
     704,   207,   288,  -308,  -308,  -308,  -308,   288,   288,   284,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,  -308,
    -308,    37,   105,  -308,  -308,    37,  -308,  -308,    37,    37,
    -308,   288,   288,    96,    51,    22,    94,   361,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,  -308,
    -308,   550,  -308,  -308,  -308,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,    95,    12,    22,    33,  -308,  -308,   147,    -9,   148,
      -9,  -308,   644,   739,   172,   787,   816,   843,   856,   856,
     184,   184,   184,   184,   143,   143,    19,    19,  -308,  -308,
    -308,    35,   550,   150,    -9,   151,    -9,  -308,  -308,  -308,
      -9,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,    50,   550,   550,   550,   802,   830,   869,
     882,   882,   607,   607,   607,   607,   297,   297,   117,   117,
    -308,  -308,  -308,   -56,   288,   -45,  -308,   288,   152,    22,
    -308,   -31,  -308,   -26,   498,  -308,  -308,  -308,  -308,   -25,
    -308,   -21,   532,    37,  -308,   664,   756,   772,   129,  -308,
      22,   217,  -308,  -308,  -308,   178,  -308,  -308,  -308,   466,
     550,  -308,  -308,  -308,  -308,   183,  -308,   187,  -308,  -308,
    -308,   550,  -308,  -308,   377,   722,   192,  -308,  -308,   -22,
     -17,   193,   208,     9,   222,   444,   -23,   224,   227,  -308,
     234,   377,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
     237,   331,   550,   243,   377,   241,  -308,   242,  -308,   550,
     550,  -308,   244,  -308,   246,    48,   281,   -24,   252,   253,
     -23,  -308,  -308,  -308,  -308,  -308,   550,   250,   550,   296,
    -308,  -308,   251,   254,  -308,  -308,   -24,  -308,   276,  -308,
    -308,   357,  -308,   -23,  -308,  -308,  -308,   268,  -308,  -308,
     274,   271,   362,   273,   -24,  -308,   377,  -308,   277,   550,
    -308,  -308,   -24,  -308,  -308,   322,   377,   550,   275,    10,
    -308,  -308,  -308,  -308,   278,  -308,  -308,   356,   306,    10,
    -308,  -308,   377,  -308,   550,   550,  -308,  -308,  -308,  -308,
    -308,   279,   280,   684,   377,  -308,  -308,  -308,  -308,   377,
     377,  -308,  -308
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     2,     7,     0,     0,     1,     3,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     5,    93,
      97,     0,    95,     6,   114,    98,    95,   114,    96,   114,
       0,   109,     0,   111,   114,     0,   115,   114,    94,   117,
     114,   116,   112,     0,    84,   110,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,   192,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   148,   149,     0,     0,     0,     0,   113,   121,   184,
     132,    87,    90,   215,   216,   214,   213,   218,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     144,   178,   184,   176,   177,   145,   175,   174,   181,   182,
     131,   186,   189,   123,     0,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
     180,     0,   171,   167,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,    88,    91,     0,     0,     0,
       0,   193,     0,   210,   211,   198,   201,   199,   208,   209,
     205,   207,   204,   206,   202,   203,   194,   195,   196,   197,
     200,     0,   128,     0,     0,     0,     0,   124,   122,   147,
       0,   150,   133,   143,   142,   139,   140,   134,   138,   137,
     136,   135,   141,     0,     0,     0,     0,   155,   158,   156,
     165,   166,   162,   164,   161,   163,   159,   160,   151,   152,
     153,   154,   157,     0,     0,     0,    85,     0,    82,   114,
     217,     0,   220,     0,     0,   131,   183,   129,   185,     0,
     188,     0,     0,   191,   146,     0,   168,   170,     0,    77,
     114,     0,    79,    89,    81,     0,    92,   219,   222,   212,
       0,   187,   190,   125,   172,     0,    86,     0,    19,    83,
     130,     0,    78,    80,    10,   173,     0,    47,    50,     0,
       0,     0,     0,   144,     0,     0,    30,     0,     0,    37,
       0,    10,    11,    18,    12,    13,    14,    15,    16,    17,
       0,   126,     0,     0,     0,     0,    41,     0,    42,     0,
       0,    75,     0,    45,     0,     0,     0,    28,     0,    24,
      30,    39,    40,    20,     9,    38,     0,     0,     0,     0,
      43,    44,     0,     0,    76,    46,    33,    25,     0,    36,
      34,    27,    21,    30,    23,   127,    58,     0,    51,    54,
       0,     0,    32,     0,     0,    22,     0,    48,     0,     0,
      60,    29,    33,    35,    26,    72,     0,     0,     0,     0,
      31,    73,    59,    49,     0,    55,    67,     0,     0,    62,
      65,    63,     0,    52,     0,     0,    70,    61,    66,    64,
      74,     0,     0,     0,    10,    53,    56,    68,    71,     0,
      10,    57,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,  -308,   396,  -308,  -308,  -308,  -277,  -237,   135,  -308,
    -308,  -304,  -308,    29,  -307,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
      13,  -308,  -308,    14,  -308,  -308,  -308,  -283,  -308,  -308,
    -308,  -308,  -308,  -308,   167,  -308,   402,  -308,   384,    49,
    -308,  -308,   374,  -308,   -18,   -32,  -308,   368,   165,  -308,
    -290,  -308,   173,    28,   -62,  -308,   -36,  -308,  -308,  -308,
    -308,  -308,  -308,   131,  -308,  -308
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     4,     5,   300,   301,   302,   284,
     303,   328,   329,   361,   362,   304,   305,   306,   313,   376,
     314,   368,   401,   369,   394,   409,   366,   379,   388,   389,
     390,   395,   410,   391,   404,   382,   392,   307,   308,    23,
     265,    50,   162,   164,   165,   239,   309,    24,    27,    19,
      20,    30,    31,    48,    32,    33,    41,   123,   124,   252,
     310,   191,   192,   311,    79,   126,    80,   215,   216,   214,
     281,   194,   196,    61,   168,   170
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,   112,   112,   115,   112,   112,   118,   119,    46,    35,
      37,    36,   141,   330,   112,   234,    43,   141,   141,   348,
     351,   258,   141,    65,   334,   321,   354,   113,   114,   342,
     116,   117,   261,    21,   325,   349,   237,   315,   245,   259,
     127,     6,   317,    26,    39,    22,   355,   330,   110,   365,
     262,   106,   107,   108,    29,   326,    42,   374,   350,    -4,
     327,    44,   267,    47,   321,   386,   387,   268,   271,    25,
     330,    28,   272,   316,    49,    28,    78,   339,   318,    40,
     141,    51,    81,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   197,
      82,   120,    38,    78,   402,   235,   241,   199,   243,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   125,   238,   408,   246,   375,
     163,   166,   249,   412,   251,    -8,   167,   169,   253,   383,
     346,   198,   139,   140,   254,   236,    87,    -8,   141,   158,
     159,   160,   112,   112,   112,   400,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,    88,   120,   213,
     193,   195,   411,   104,   105,   106,   107,   108,   255,   256,
     257,   121,   122,    83,    84,    85,    86,   200,   233,   275,
      89,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   266,    -9,    -9,
      -9,    -9,   102,   103,   104,   105,   106,   107,   108,   112,
     247,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     240,   242,   276,   248,   250,   285,    90,   264,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   161,   278,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   277,   282,   322,
      78,    17,   283,   260,   312,   319,   166,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   280,    90,
     320,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   331,
     139,   140,   332,   324,   333,   109,   141,   156,   157,   158,
     159,   160,   335,   112,   336,   338,   340,   341,   347,   344,
     337,   345,   352,   356,   353,   358,   359,   360,   343,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   363,   403,
     364,   367,    17,   370,   371,   372,   357,   373,   381,   377,
     385,   393,   396,   406,   405,   269,   142,   171,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   397,   378,    62,     7,
     279,   380,   398,   399,   263,   384,    18,    63,    64,    65,
      34,    45,    66,    67,    68,    69,    77,   273,   270,     0,
       0,   286,     0,     0,     0,     0,   287,   288,   289,   290,
     291,   292,     0,     0,   293,     0,    71,    72,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,    17,     0,     0,   201,   294,    73,    74,   295,     0,
       0,   296,     0,   297,   298,    62,   278,     0,     0,    76,
       0,     0,   299,     0,    63,    64,    65,     0,     0,    66,
      67,    68,    69,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    70,    62,    71,    72,     0,     0,     0,     0,     0,
       0,    63,    64,    65,     0,     0,    66,    67,    68,    69,
       0,     0,     0,    73,    74,     0,     0,     0,    52,    53,
       0,     0,     0,    54,    55,     0,    76,     0,    70,   323,
      71,    72,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    62,     0,    17,     0,    56,     0,     0,
      73,    74,    63,    64,    65,     0,     0,    66,    67,    68,
      69,    62,     0,    76,     0,     0,     0,    57,    58,     0,
      63,    64,    65,     0,     0,    66,    67,    68,    69,    70,
      59,    71,    72,     0,    52,    53,     0,     0,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    70,     0,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,    56,    76,     0,     0,     0,     0,    73,
      74,    -9,    -9,    -9,    -9,   154,   155,   156,   157,   158,
     159,   160,    76,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,    60,    90,
     244,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   142,
     274,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   142,
     407,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    -9,    -9,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,    -9,    -9,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160
};

static const yytype_int16 yycheck[] =
{
      62,    63,    64,    65,    66,    67,    68,    69,    40,    27,
       3,    29,    43,   296,    76,     3,    34,    43,    43,    43,
     327,    77,    43,    32,   301,    16,   330,    63,    64,   319,
      66,    67,    77,    76,    57,    59,     3,    59,     3,    95,
      76,     0,    59,    59,    57,    88,   336,   330,    57,   353,
      95,    32,    33,    34,    32,    78,     4,   364,    82,     0,
      83,    57,    93,    43,    16,    55,    56,    93,    93,    20,
     353,    22,    93,    95,    57,    26,    48,   314,    95,    92,
      43,    93,    92,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     3,
      92,    92,    95,    75,   394,    93,   168,   125,   170,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,    76,    93,   404,    93,   366,
      81,    82,   194,   410,   196,    76,    87,    88,   200,   376,
      92,    90,    37,    38,    94,   163,    92,    88,    43,    32,
      33,    34,   214,   215,   216,   392,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    92,    92,   141,
     121,   122,   409,    30,    31,    32,    33,    34,   214,   215,
     216,    92,    92,    52,    53,    54,    55,    93,    93,    60,
      59,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   239,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   281,
     192,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      93,    93,   260,    93,    93,   281,    15,    95,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    59,    89,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    60,    95,    57,
     252,    74,    95,   234,    92,    92,   237,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   270,    15,
      92,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    95,
      37,    38,    95,   295,    90,    94,    43,    30,    31,    32,
      33,    34,    95,   395,     3,    92,    95,    95,    57,    95,
     312,    95,    90,    93,    91,    49,    95,    93,   320,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    82,   395,
       3,    93,    74,    89,    93,     3,   338,    94,    46,    92,
      95,    93,    16,    93,    95,   244,    15,    93,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    90,   369,    21,     3,
     265,   372,   389,   389,   237,   377,     4,    30,    31,    32,
      26,    37,    35,    36,    37,    38,    48,   252,   245,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    93,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    86,    87,    21,    89,    -1,    -1,    92,
      -1,    -1,    95,    -1,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    57,    21,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    36,    -1,    92,    -1,    57,    95,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    21,    -1,    74,    -1,    59,    -1,    -1,
      79,    80,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    21,    -1,    92,    -1,    -1,    -1,    79,    80,    -1,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    57,
      92,    59,    60,    -1,    30,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      60,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    59,    92,    -1,    -1,    -1,    -1,    79,
      80,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    92,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    97,    98,    99,   100,   101,     0,    98,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    74,   142,   145,
     146,    76,    88,   135,   143,   145,    59,   144,   145,    32,
     147,   148,   150,   151,   144,   150,   150,     3,    95,    57,
      92,   152,     4,   150,    57,   148,   151,    43,   149,    57,
     137,    93,    30,    31,    35,    36,    59,    79,    80,    92,
      94,   169,    21,    30,    31,    32,    35,    36,    37,    38,
      57,    59,    60,    79,    80,    89,    92,   153,   159,   160,
     162,    92,    92,   169,   169,   169,   169,    92,    92,   169,
      15,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    94,
      57,   160,   160,   162,   162,   160,   162,   162,   160,   160,
      92,    92,    92,   153,   154,   145,   161,   162,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    37,
      38,    43,    15,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    59,   138,   145,   139,   140,   145,   145,   170,   145,
     171,    93,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   157,   158,   145,   167,   145,   168,     3,    90,   150,
      93,    93,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   165,   163,   164,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,    93,     3,    93,   150,     3,    93,   141,
      93,   160,    93,   160,    16,     3,    93,   159,    93,   160,
      93,   160,   155,   160,    94,   162,   162,   162,    77,    95,
     145,    77,    95,   140,    95,   136,   151,    93,    93,   169,
     158,    93,    93,   154,    16,    60,   150,    60,    89,   104,
     159,   166,    95,    95,   105,   162,    44,    49,    50,    51,
      52,    53,    54,    57,    78,    81,    84,    86,    87,    95,
     102,   103,   104,   106,   111,   112,   113,   133,   134,   142,
     156,   159,    92,   114,   116,    59,    95,    59,    95,    92,
      92,    16,    57,    95,   159,    57,    78,    83,   107,   108,
     133,    95,    95,    90,   102,    95,     3,   159,    92,   103,
      95,    95,   156,   159,    95,    95,    92,    57,    43,    59,
      82,   110,    90,    91,   107,   156,    93,   159,    49,    95,
      93,   109,   110,    82,     3,   107,   122,    93,   117,   119,
      89,    93,     3,    94,   110,   103,   115,    92,   159,   123,
     109,    46,   131,   103,   159,    95,    55,    56,   124,   125,
     126,   129,   132,    93,   120,   127,    16,    90,   126,   129,
     103,   118,   156,   162,   130,    95,    93,    16,   102,   121,
     128,   103,   102
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    99,    99,   100,   101,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   105,
     104,   106,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   109,   109,   109,   110,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   114,   115,   113,
     116,   117,   118,   113,   119,   120,   121,   113,   122,   113,
     123,   113,   124,   124,   124,   125,   125,   127,   128,   126,
     130,   129,   131,   132,   131,   133,   134,   135,   135,   135,
     135,   135,   136,   135,   137,   138,   138,   138,   139,   139,
     139,   141,   140,   143,   142,   144,   144,   145,   145,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   147,
     147,   148,   149,   148,   150,   150,   151,   152,   152,   152,
     152,   153,   153,   154,   155,   154,   156,   156,   157,   157,
     157,   158,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   160,   161,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   162,   164,
     162,   165,   166,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   167,   162,   162,   168,
     162,   162,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   170,   169,
     169,   171,   169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     2,     0,     0,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     3,     3,     2,     1,     2,     4,     2,     1,     4,
       0,     3,     1,     0,     1,     3,     1,     1,     2,     2,
       2,     2,     2,     3,     3,     2,     3,     0,     0,     7,
       0,     0,     0,    10,     0,     0,     0,    12,     0,     7,
       0,     8,     1,     1,     2,     1,     2,     0,     0,     6,
       0,     4,     0,     0,     3,     2,     3,     9,    11,     9,
      11,     9,     0,    10,     0,     2,     4,     0,     1,     3,
       0,     0,     3,     0,     4,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     4,     0,     2,     2,     1,     4,     3,
       3,     1,     3,     1,     0,     4,     1,     3,     1,     2,
       4,     0,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     4,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     4,     0,
       4,     0,     0,     7,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     4,     0,     5,     4,     0,
       5,     4,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     2,     2,     2,     2,     4,     0,     5,
       4,     0,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (scanner, pp, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, scanner, pp); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner, cl_parser_params *pp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (scanner);
  YYUSE (pp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner, cl_parser_params *pp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner, pp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, void *scanner, cl_parser_params *pp)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , scanner, pp);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, scanner, pp); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *scanner, cl_parser_params *pp)
{
  YYUSE (yyvaluep);
  YYUSE (scanner);
  YYUSE (pp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *scanner, cl_parser_params *pp)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 113 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
				pp->hc_active = 0;
				
				cl_label_node *func;
				func = cl_label_find(pp->funcs_table, "main");
				if(!func)
				{
					ZL_ERROR("undeclared identifier");
				}
			
				cl_push(pp, OP_CALL);
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
#line 1769 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 165 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { pp->hc_active = 0; }
#line 1775 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 166 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { pp->hc_active = 1; }
#line 1781 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 185 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->current_level++;
		}
#line 1789 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 189 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_var_free_level(&pp->vars_table, pp->current_level);
			pp->current_level--;
		}
#line 1798 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 208 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, (yyvsp[0]).string);
			free_str((yyvsp[0]).string);

			if(!label)
			{
				ZL_ERROR("internal error");
			}

			cl_push(pp, (unsigned char) (yyvsp[-1]).value);
			cl_label_reference(label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1818 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 223 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[-3]).value, &(yyvsp[-2]), &(yyvsp[0])); }
#line 1824 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 224 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[-1]).value, &(yyvsp[0]), NULL); }
#line 1830 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 225 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[0]).value, NULL, NULL); }
#line 1836 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 227 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			func = cl_label_find(pp->funcs_table, (yyvsp[-3]).string);
			if(!func)
			{
				ZL_ERROR("undeclared identifier");
			}

			if(func->flags & ZLF_FUNC_INTERNAL)
			{
				cl_push(pp, OP_CALL); // call near
			}
			else
			{
				ZL_ERROR("unsupported far call");
			}

			cl_label_reference(func, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1862 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 269 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).value); }
#line 1868 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 270 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).value); }
#line 1874 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 275 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval).flags = ARG_REG; }
#line 1880 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 276 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); (yyval).flags = ARG_PREG; }
#line 1886 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 277 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval).flags = ARG_IMM; }
#line 1892 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 303 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX); }
#line 1898 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 307 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_NOP); }
#line 1904 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 308 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_DBG_PRINT); }
#line 1910 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 310 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack) ZL_ERROR("break not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->next_node->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1922 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 318 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack || !pp->cl_loop_stack->next_node) ZL_ERROR("continue not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1934 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 326 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_buffer *lsb;
			lsb = pp->cl_loop_stack;
			(yyvsp[-1]).value = (yyvsp[-1]).value*2-1;
			while((yyvsp[-1]).value--)
			{
				lsb = lsb->next_node;
				if(!lsb) ZL_ERROR("break not in loop");
			}
			cl_push(pp, OP_JMP);

			cl_label_reference((cl_label_node *) lsb->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1953 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 341 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_buffer *lsb;
			lsb = pp->cl_loop_stack;
			(yyvsp[-1]).value = ((yyvsp[-1]).value-1)*2;
			while((yyvsp[-1]).value--)
			{
				lsb = lsb->next_node;
				if(!lsb) ZL_ERROR("continue not in loop");
			}
			cl_push(pp, OP_JMP);

			cl_label_reference((cl_label_node *) lsb->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1972 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 356 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_label;

			lb_label = cl_label_find(pp->labels_table, "@exit_func");

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1986 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 366 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_label;

			lb_label = cl_label_find(pp->labels_table, "@exit_func");

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_JMP);
			cl_label_reference(lb_label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 2001 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 380 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2016 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 391 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit;
			lb_exit= (cl_label_node *) pp->cl_loop_stack->next_node->data;
			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_exit, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 2028 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 399 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2045 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 412 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2063 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 427 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_condition;
			lb_condition = (cl_label_node *) pp->cl_loop_stack->data;
			lb_condition->offset = pp->hc_fill[pp->hc_active];
			lb_condition->dimension = pp->hc_active;
			lb_condition->flags = ZLF_DEFINED;
		}
#line 2075 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 435 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
		}
#line 2092 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 448 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2114 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 466 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2140 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 488 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2161 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 505 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2179 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 519 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2196 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 533 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2212 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 545 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// break switch
			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// continue switch (continue == break)
			cl_stack_push(&pp->cl_stack, 0);					// lb_previous
			
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);		// eax = result of assignment_expression
		}
#line 2226 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 555 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2242 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 581 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
#line 2250 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 585 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2273 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 604 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			unsigned long lb_else;
			lb_else = (unsigned long) cl_stack_pop(&pp->cl_stack);

			// jmp to next statement skip cheking
			cl_push(pp, OP_JMP);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);		// lb_previous
			cl_push_dw(pp, 0);

			cl_code_replace(pp->hard_code[pp->hc_active], lb_else, pp->hc_fill[pp->hc_active] - lb_else);
		}
#line 2289 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 619 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			unsigned long lb_previous;
			lb_previous = (unsigned long) cl_stack_pop(&pp->cl_stack);
			if(lb_previous)
			{
				cl_code_replace(pp->hard_code[pp->hc_active], lb_previous, pp->hc_fill[pp->hc_active] - lb_previous);
			}
		}
#line 2302 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 628 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, 0);		// lb_previous
		}
#line 2310 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 636 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2335 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 661 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, (yyvsp[-1]).string);
			free_str((yyvsp[-1]).string);

			if(label->flags & ZLF_DEFINED)
			{
				ZL_ERROR("label redefined");
			}

			label->offset = pp->hc_fill[pp->hc_active];
			label->dimension = pp->hc_active;
			label->flags = ZLF_DEFINED;
		}
#line 2355 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 680 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, (yyvsp[-1]).string);
			free_str((yyvsp[-1]).string);

			if(!label)
			{
				ZL_ERROR("internal error");
			}

			cl_push(pp, (unsigned char) (yyvsp[-2]).value);
			cl_label_reference(label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 2375 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 699 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, (yyvsp[-4]).string);
			free_str((yyvsp[-4]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!(yyvsp[-7]).uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = NULL;
			func->params = (yyvsp[-2]).uvalue;
		}
#line 2399 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 719 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, (yyvsp[-6]).string);
			free_str((yyvsp[-6]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!(yyvsp[-9]).uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = (yyvsp[-1]).string;
			func->params = (yyvsp[-4]).uvalue;
		}
#line 2423 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 739 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, (yyvsp[-4]).string);
			free_str((yyvsp[-4]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!(yyvsp[-7]).uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = NULL;
			func->params = (yyvsp[-2]).uvalue;
		}
#line 2447 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 759 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, (yyvsp[-6]).string);
			free_str((yyvsp[-6]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!(yyvsp[-9]).uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = (yyvsp[-1]).string;
			func->params = (yyvsp[-4]).uvalue;
		}
#line 2471 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 779 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;
			
			cl_var_free_level(&pp->vars_table, pp->current_level);
			pp->current_level--;

			func = cl_label_define(&pp->funcs_table, (yyvsp[-5]).string);
			free_str((yyvsp[-5]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_FUNC_INTERNAL | (yyvsp[-7]).flags | (yyvsp[-6]).flags;
			func->library = NULL;
		}
#line 2493 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 797 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			cl_label_define(&pp->labels_table, "@exit_func");

			func = cl_label_define(&pp->funcs_table, (yyvsp[-4]).string);
			free_str((yyvsp[-4]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			if(func->flags && (func->flags != (ZLF_FUNC_INTERNAL | (yyvsp[-6]).flags | (yyvsp[-5]).flags)))
			{
				ZL_ERROR("function return type different that declared before");
			}
			
			// здесь надо будет пересчитывать offset параметров function_arguments_list в обратный порядок
			
			func->flags = ZLF_FUNC_INTERNAL | ZLF_DEFINED | (yyvsp[-6]).flags | (yyvsp[-5]).flags;
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
#line 2534 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 834 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2575 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 879 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { pp->current_level++; }
#line 2581 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 883 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = 1;
		}
#line 2589 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 887 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = (yyvsp[-3]).value + 1;
		}
#line 2597 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 891 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = 0;
		}
#line 2605 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 898 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = 8;
			(yyvsp[0]).var->offset = (yyval).uvalue;
			(yyvsp[0]).var->flags |= ZLF_PARAM;
			//ZL_WARNING("first");
			//printf("first rule:  %s %d\n", $1.var->name, $1.var->offset);
		}
#line 2617 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 906 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = (yyvsp[-2]).value + 4;
			(yyvsp[0]).var->offset = (yyval).uvalue;
			(yyvsp[0]).var->flags |= ZLF_PARAM;
			//ZL_WARNING("second");
			//printf("second rule: %s offset: %d\n", $3.var->name, $3.var->offset);
		}
#line 2629 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 918 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if(((yyvsp[0]).flags & ZLF_EXTERNAL) && (pp->current_level > 0))
			{
				ZL_ERROR("external variable must be defined global");
			}

			if(!((yyvsp[0]).flags & ZLF_TYPE))
			{
				(yyvsp[0]).flags |= ZLF_INT;	// use default type
			}

			cl_stack_push(&pp->cl_stack, (void *) (yyvsp[0]).flags);
		}
#line 2647 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 932 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if((yyvsp[0]).var->flags & ZLF_AUTOARRAY)
			{
				//ZL_ERROR("unknown size");

				(yyvsp[0]).var->size[1] = 1;

				/*
				$3.var->flags += 0x01000000;
				$3.var->rows--;
				if(!$3.var->rows)
				{
					$3.var->flags &= ~ZLF_ARRAY;
				}
				*/
			}

			if((yyvsp[0]).var->flags & ZLF_ARRAY)
			{
				unsigned long level;

				//$3.var->flags += 0x01000000;
				//$3.var->size[0] = 4;

				level = (yyvsp[0]).var->rows;

				(yyvsp[0]).var->size[level] *= (yyvsp[0]).var->size[0];
				level--;

				while(level)
				{
					(yyvsp[0]).var->size[level] *= (yyvsp[0]).var->size[level+1];
					level--;
				}
			}

			unsigned long dc, uc, x;

			dc = 1;
			uc = (yyvsp[0]).var->rows;

			while(dc < uc)
			{
				x = (yyvsp[0]).var->size[dc];
				(yyvsp[0]).var->size[dc] = (yyvsp[0]).var->size[uc];
				(yyvsp[0]).var->size[uc] = x;

				dc++;
				uc--;
			}

			(yyvsp[0]).var->references = 0;

			(yyval) = (yyvsp[0]);

			cl_stack_pop(&pp->cl_stack);
		}
#line 2709 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 994 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if(((yyvsp[0]).flags & ZLF_EXTERNAL) && (pp->current_level > 0))
			{
				ZL_ERROR("external variable must be defined global");
			}

			if(!((yyvsp[0]).flags & ZLF_TYPE))
			{
				(yyvsp[0]).flags |= ZLF_INT;	// set default type
			}
			
			if(((yyvsp[0]).flags & (ZLF_INT | ZLF_CHAR)) && (((yyvsp[0]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) == 0))
			{
				(yyvsp[0]).flags |= ZLF_SIGNED;	// set default modifier
			}
			
			if(((yyvsp[0]).flags & ZLF_INT) && (((yyvsp[0]).flags & (ZLF_SHORT | ZLF_LONG)) == 0))
			{
				(yyvsp[0]).flags |= ZLF_LONG;	// set default modifier
			}

			cl_stack_push(&pp->cl_stack, (void *) (yyvsp[0]).flags);
		}
#line 2737 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1018 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_pop(&pp->cl_stack);
		}
#line 2745 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1024 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_VOID; }
#line 2751 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1026 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if((yyvsp[0]).flags & ZLF_EXTERNAL)
			{
				ZL_ERROR("external variable must be defined global");
			}

			if(!((yyvsp[0]).flags & ZLF_TYPE))
			{
				(yyvsp[0]).flags |= ZLF_INT;	// set default type
			}
			
			if(((yyvsp[0]).flags & (ZLF_INT | ZLF_CHAR)) && (((yyvsp[0]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) == 0))
			{
				(yyvsp[0]).flags |= ZLF_SIGNED;	// set default modifier
			}
			
			if(((yyvsp[0]).flags & ZLF_INT) && (((yyvsp[0]).flags & (ZLF_SHORT | ZLF_LONG)) == 0))
			{
				(yyvsp[0]).flags |= ZLF_LONG;	// set default modifier
			}
			
			(yyval).flags = (yyvsp[0]).flags;
		}
#line 2779 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1052 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = (yyvsp[0]).flags; }
#line 2785 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1054 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).flags = (yyvsp[-1]).flags | (yyvsp[0]).flags;
			if(((yyval).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) == (ZLF_SIGNED | ZLF_UNSIGNED))
			{
				ZL_ERROR("signed/unsigned keywords mutually exclusive");
			}

			if(((yyval).flags & (ZLF_EXTERNAL | ZLF_INTERNAL)) == (ZLF_EXTERNAL | ZLF_INTERNAL))
			{
				ZL_ERROR("internal/external keywords mutually exclusive");
			}

			if(((yyval).flags & (ZLF_SHORT | ZLF_LONG)) == (ZLF_SHORT | ZLF_LONG))
			{
				ZL_ERROR("short/long keywords mutually exclusive");
			}

			if(((yyval).flags & (ZLF_SHORT | ZLF_LONG)) && ((yyval).flags & ZLF_TYPE) && !((yyval).flags & ZLF_INT))
			{
				ZL_ERROR("short/long keywords can not be used with none 'int' type");
			}

			if(((yyval).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) && ((yyval).flags & ZLF_TYPE) && !((yyval).flags & (ZLF_INT|ZLF_CHAR)))
			{
				ZL_ERROR("signed/unsigned keywords can not be used with none 'int/char' type ");
			}

			if(((yyvsp[-1]).flags & ZLF_TYPE) && ((yyvsp[0]).flags & ZLF_TYPE))
			{
				ZL_ERROR("type specifier followed by type specifier is illegal");
			}
		}
#line 2822 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1089 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_VOID; }
#line 2828 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1090 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_CHAR; }
#line 2834 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1091 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_SHORT; }
#line 2840 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1092 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_INT; }
#line 2846 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1093 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_LONG; }
#line 2852 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1094 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_FLOAT; }
#line 2858 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1095 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_DOUBLE; }
#line 2864 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1096 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_SIGNED; }
#line 2870 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1097 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_UNSIGNED; }
#line 2876 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1098 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_EXTERNAL; }
#line 2882 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1105 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2888 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1106 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2894 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1111 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if((yyvsp[0]).var->flags & ZLF_AUTOARRAY)
			{
				ZL_ERROR("unknown size");
			}

			if((yyvsp[0]).var->flags & ZLF_ARRAY)
			{
				unsigned long level;

				level = (yyvsp[0]).var->rows;

				(yyvsp[0]).var->size[level] *= (yyvsp[0]).var->size[0];
				level--;

				while(level)
				{
					(yyvsp[0]).var->size[level] *= (yyvsp[0]).var->size[level+1];
					level--;
				}

				//$1.var->size[0] = $1.var->size[1];
			}

			unsigned long dc, uc, x;

			dc = 1;
			uc = (yyvsp[0]).var->rows;

			while(dc < uc)
			{
				x = (yyvsp[0]).var->size[dc];
				(yyvsp[0]).var->size[dc] = (yyvsp[0]).var->size[uc];
				(yyvsp[0]).var->size[uc] = x;

				dc++;
				uc--;
			}

			if((~(yyvsp[0]).var->flags & ZLF_EXTERNAL) && ((yyvsp[0]).var->level != 0))
			{
				(yyvsp[0]).var->offset = pp->stack_size;
				pp->stack_size += (yyvsp[0]).var->size[(yyvsp[0]).var->rows];
				if((yyvsp[0]).var->size[(yyvsp[0]).var->rows] % 4)
				{
					pp->stack_size += 4 - ((yyvsp[0]).var->size[(yyvsp[0]).var->rows] % 4);
				}
			}

			(yyvsp[0]).var->references = 0;

			/*
			if(!cl_var_define(&pp->vars_table, &$1.var))
			{
				ZL_ERROR("redefinition");
			}
			*/
		}
#line 2957 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1170 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_var_node *var;

			if((yyvsp[-1]).var->flags & ZLF_ARRAY)
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
				
				level = (yyvsp[-1]).var->rows;
				(yyvsp[-1]).var->size[level] *= (yyvsp[-1]).var->size[0];
				level--;

				while(level)
				{
					//printf("$1.var->size[%u]    : %u\n", level, $1.var->size[level]);
					(yyvsp[-1]).var->size[level] *= (yyvsp[-1]).var->size[level+1];
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
			uc = (yyvsp[-1]).var->rows;

			while(dc < uc)
			{
				x = (yyvsp[-1]).var->size[dc];
				(yyvsp[-1]).var->size[dc] = (yyvsp[-1]).var->size[uc];
				(yyvsp[-1]).var->size[uc] = x;

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
			
			(yyvsp[-1]).var->references = 0;

			var = (yyvsp[-1]).var;
			/*
			var = cl_var_define(&pp->vars_table, &$1.var);
			if(!var)
			{
				ZL_ERROR("redefinition");
			}
			*/

			cl_stack_push(&pp->cl_stack, (void *) var);

			if((yyvsp[-1]).var->flags & ZLF_EXTERNAL)
			{
				cl_push(pp, OP_PUSH_PMEM);
				cl_var_reference(var, pp->hc_active, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
			}
			else if((yyvsp[-1]).var->level == 0) // global var
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
#line 3061 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1270 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_var_node *var;

			var = (cl_var_node *) pp->cl_stack->data;
			if(var->flags & ZLF_AUTOARRAY)
			{
				if(((yyvsp[0]).size % var->size[var->rows-1]) > 0)
				{
					var->size[var->rows] = var->size[var->rows-1] - ((yyvsp[0]).size % var->size[var->rows-1]) + (yyvsp[0]).size;
				}
				else
				{
					var->size[var->rows] = (yyvsp[0]).size;
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
				if(var->size[var->rows] < (yyvsp[0]).size)
				{
					ZL_ERROR("too many initializers");
				}
			}

			if((~var->flags & ZLF_EXTERNAL) && (var->level != 0))
			{
				pp->stack_size += var->size[var->rows];
				if((yyvsp[-3]).var->size[(yyvsp[-3]).var->rows] % 4)
				{
					pp->stack_size += 4 - ((yyvsp[-3]).var->size[(yyvsp[-3]).var->rows] % 4);
				}
			}

			cl_stack_pop(&pp->cl_stack);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
#line 3108 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1315 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = 0x00000000; }
#line 3114 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1316 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = 0x01000000 + (yyvsp[0]).flags; }
#line 3120 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1321 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);

			if((yyvsp[-1]).flags)
			{
				(yyval).var->flags += (yyvsp[-1]).flags;
				(yyval).var->size[0] = 4;
			}
			else if((yyval).var->flags & ZLF_VOID)
			{
				ZL_ERROR("illegal use of type 'void'");
			}
		}
#line 3138 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1338 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).var = cl_var_define(&pp->vars_table, (yyvsp[0]).string, pp->current_level);

			if(!(yyval).var)
			{
				ZL_ERROR("redefinition");
			}

			(yyval).var->name = (yyvsp[0]).string;
			(yyval).var->flags = (unsigned long) pp->cl_stack->data;
			(yyval).var->level = pp->current_level;
			(yyval).var->rows = 0;
			(yyval).var->size[0] = 4; // default var size

			switch((yyval).var->flags & ZLF_TYPE)
			{
				case ZLF_CHAR:
					(yyval).var->size[0] = 1;
					break;
				case ZLF_INT:
					if((yyval).var->flags & ZLF_SHORT)
					{
						(yyval).var->size[0] = 2;
					}
					break;
				case ZLF_DOUBLE:
					(yyval).var->size[0] = 8;
					break;
			}
		}
#line 3173 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1369 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-3]);

			if((yyvsp[-3]).var->flags & ZLF_ARRAY)
			{
				//ZL_ERROR("sorry, multi-level arrays not yet supported!");
			}
			
			if((yyvsp[-1]).uvalue == 0)
			{
				ZL_ERROR("cannot allocate an array of constant size 0.");
			}

			(yyval).var->flags |= ZLF_ARRAY;
			(yyval).var->rows++;
			(yyval).var->size[(yyval).var->rows] = (yyvsp[-1]).uvalue; // кол-во элементов в строке массива
			// уровнем выше делать перерасчёт кол-ва элементов в размер строки массива
		}
#line 3196 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1388 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			// last array level with auto size
			(yyval) = (yyvsp[-2]);

			if((yyvsp[-2]).var->flags & ZLF_ARRAY)
			{
				ZL_ERROR("unknown size, missing subscript!");
			}

			(yyval).var->flags |= ZLF_ARRAY | ZLF_AUTOARRAY;
			(yyval).var->rows++;
			(yyval).var->size[(yyval).var->rows] = 0; // set after initialize
		}
#line 3214 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1402 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 3222 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1409 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);  // assignment_expression
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);  // var address

			(yyval).size = 4;
			
			int temp_flag = 1;

			if(!(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_POINTER))
			{
				switch(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						(yyval).size = 1;
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						
						if((((cl_var_node *) pp->cl_stack->data)->flags & ZLF_ARRAY) && (((yyvsp[0]).flags & (ZLF_ARRAY | ZLF_CHAR)) == (ZLF_ARRAY | ZLF_CHAR)))
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
							
							(yyval).size = (yyvsp[0]).size;
							unsigned long lb_loop, lb_exit;
							
							cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);
							
							//cl_push(pp, OP_DBG_PRINT);
							
							cl_push(pp, OP_MOV_REG_IMM); cl_push(pp, REG_EDX); cl_push_dw(pp, (yyvsp[0]).size);
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
							(yyval).size = 2;
							cl_push(pp, OP_SIZE_OVERRIDE_2);
						}
						break;
					case ZLF_DOUBLE:
						(yyval).size = 8;
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
#line 3307 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1490 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 3315 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1497 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			//if(((zl_names_map *) pp->cl_stack->data)->flags & ZLF_AUTOARRAY)
			//{
				//((zl_names_map *) pp->cl_stack->data)->elements->size += var_size;
			//}
		}
#line 3326 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1504 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3365 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1539 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).size = (yyvsp[-3]).size + (yyvsp[0]).size;
		}
#line 3373 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1571 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX); }
#line 3379 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1575 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).size = 0; }
#line 3385 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1577 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).size = 4;
			//here ha is 1
		}
#line 3394 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1582 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).size = 4 + (yyvsp[-3]).size;
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
#line 3437 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1623 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
		pp->hc_active++;
	}
#line 3445 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1629 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3451 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1631 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if(((yyvsp[-2]).flags & (ZLF_POINTER|ZLF_VOID|ZLF_CHAR|ZLF_DOUBLE|ZLF_FLOAT|ZLF_INT|ZLF_SHORT|ZLF_LONG|ZLF_SIGNED|ZLF_UNSIGNED|ZLF_STRUCT|ZLF_ARRAY)) != ((yyvsp[0]).flags & (ZLF_POINTER|ZLF_VOID|ZLF_CHAR|ZLF_DOUBLE|ZLF_FLOAT|ZLF_INT|ZLF_SHORT|ZLF_LONG|ZLF_SIGNED|ZLF_UNSIGNED|ZLF_STRUCT|ZLF_ARRAY)))
			{
				//printf("\n\n###########\n\n %x != %x \n\n###########\n\n", $1.flags, $3.flags);
				//ZL_ERROR("type mismatch");
			}
			
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3488 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1664 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3521 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1693 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3554 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1722 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3587 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1751 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3620 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1780 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3653 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1809 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3686 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1838 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3719 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1867 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3752 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1896 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3785 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1925 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			if(!((yyvsp[-2]).flags & ZLF_POINTER))
			{
				switch((yyvsp[-2]).flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						break;
					case ZLF_INT:
						if((yyvsp[-2]).flags & ZLF_SHORT)
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
#line 3818 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1957 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			// push address of value to stack

			cl_var_node *var;

			(yyval) = (yyvsp[0]);

			var = cl_var_find(pp->vars_table, (yyvsp[0]).string);
			free_str((yyvsp[0]).string);
			if(!var)
			{
				ZL_ERROR("undeclared identifier");
			}

			//memcpy(&$$.var, var, sizeof(cl_var_node));
			(yyval).var = var;
			(yyval).flags = var->flags;
			(yyval).rows = var->rows;

			if((yyval).flags & ZLF_EXTERNAL)
			{
				cl_push(pp, OP_PUSH_PMEM);
				cl_var_reference(var, pp->hc_active, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
			}
			else if((yyval).var->level == 0) // global var
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

				if(((yyval).flags & (ZLF_PARAM | ZLF_ARRAY)) == (ZLF_PARAM | ZLF_ARRAY))
				{
					// ссылка на массив переданная через параметр функции
					cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_EBX);
				}

				cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
			}
		}
#line 3876 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 2011 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EAX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
			if(!((yyvsp[0]).flags & ZLF_POINTER))
			{
				ZL_ERROR("illegal indirection");
			}

			(yyval).flags -= 0x01000000;
		}
#line 3893 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 2024 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			// pop address
			// add to address offset
			// push address this address to stack

			// ul *v = {0,1,2};
			// v[1]; //= 1

			(yyval).flags = (yyvsp[-3]).flags;

			if((yyval).flags & ZLF_ARRAY)
			{
				unsigned long ptr_step;
				ptr_step = 4;
				
				(yyval).rows--;

				if((yyval).rows)
				{
					ptr_step = (yyval).var->size[(yyval).rows];
				}
				else
				{
					(yyval).flags &= ~ZLF_ARRAY;

					if(!((yyval).flags & ZLF_POINTER))
					{
						ptr_step = (yyval).var->size[0];
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
			else if((yyval).flags & ZLF_POINTER)
			{
				(yyval).flags -= 0x01000000;

				if(!((yyval).flags & ZLF_POINTER))
				{
					switch((yyval).flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							(yyval).var->size[0] = 1;
							break;
						case ZLF_INT:
							if((yyval).flags & ZLF_SHORT)
							{
								(yyval).var->size[0] = 2;
							}
							break;
						case ZLF_DOUBLE:
							(yyval).var->size[0] = 8;
							break;
					}
				}

				cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);
				cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
				cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EAX); cl_push(pp, REG_EAX);
				cl_push(pp, OP_MOV_REG_IMM); cl_push(pp, REG_EBX); cl_push_dw(pp, (yyval).var->size[0]);
				cl_push(pp, OP_MUL_REG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EBX);
				cl_push(pp, OP_ADD_REG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
				cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
			}
			else
			{
				ZL_ERROR("subscript requires array or pointer type");
			}
		}
#line 3975 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 2109 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).flags = (yyvsp[-1]).flags + (yyvsp[0]).flags;
			if((yyval).flags & ZLF_EXTERNAL)
			{
				ZL_ERROR("external variable must be defined global");
			}

			if(!((yyval).flags & ZLF_TYPE))
			{
				(yyval).flags |= ZLF_INT;	// set default type
			}
			
			if(((yyval).flags & (ZLF_INT | ZLF_CHAR)) && (((yyval).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) == 0))
			{
				(yyval).flags |= ZLF_SIGNED;	// set default modifier
			}
			
			if(((yyval).flags & ZLF_INT) && (((yyval).flags & (ZLF_SHORT | ZLF_LONG)) == 0))
			{
				(yyval).flags |= ZLF_LONG;	// set default modifier
			}
			
		}
#line 4003 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 2137 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).uvalue); }
#line 4009 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 2140 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_PUSH_OFFSET);
			cl_const_define(&pp->data_table, pp->hc_active, (yyvsp[0]).string, (yyvsp[0]).size, pp->hc_fill[pp->hc_active]); // добавляем ссылку на эти данные
			free_str((yyvsp[0]).string);
			cl_push_dw(pp, 0);						// ставим заглушку
		}
#line 4020 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 2146 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4026 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 2147 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_ADD_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4032 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 2148 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SUB_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4038 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 2149 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_MUL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4044 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 2150 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_DIV_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4050 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 2151 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_OR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4056 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 2152 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_AND_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4062 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 2153 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_MOD_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4068 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 2154 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_XOR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4074 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 2155 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SHL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4080 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 2156 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SHR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4086 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 2158 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if(((yyvsp[-2]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) != ((yyvsp[0]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)))
			{
				ZL_WARNING("'>': signed/unsigned mismatch");
			}

			if(((yyvsp[-2]).flags | (yyvsp[0]).flags) & ZLF_UNSIGNED)
			{
				cl_do_op(pp, OP_UG_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0]));
			}
			else
			{
				cl_do_op(pp, OP_G_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0]));
			}
		}
#line 4106 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 2174 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if(((yyvsp[-2]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) != ((yyvsp[0]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)))
			{
				ZL_WARNING("'>': signed/unsigned mismatch");
			}

			if(((yyvsp[-2]).flags | (yyvsp[0]).flags) & ZLF_UNSIGNED)
			{
				cl_do_op(pp, OP_UL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0]));
			}
			else
			{
				cl_do_op(pp, OP_L_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0]));
			}
		}
#line 4126 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 2190 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if(((yyvsp[-2]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) != ((yyvsp[0]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)))
			{
				ZL_WARNING("'>': signed/unsigned mismatch");
			}

			if(((yyvsp[-2]).flags | (yyvsp[0]).flags) & ZLF_UNSIGNED)
			{
				cl_do_op(pp, OP_UGE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0]));
			}
			else
			{
				cl_do_op(pp, OP_GE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0]));
			}
		}
#line 4146 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 2206 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if(((yyvsp[-2]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)) != ((yyvsp[0]).flags & (ZLF_SIGNED | ZLF_UNSIGNED)))
			{
				ZL_WARNING("'>': signed/unsigned mismatch");
			}

			if(((yyvsp[-2]).flags | (yyvsp[0]).flags) & ZLF_UNSIGNED)
			{
				cl_do_op(pp, OP_ULE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0]));
			}
			else
			{
				cl_do_op(pp, OP_LE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0]));
			}
		}
#line 4166 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 2221 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_E_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4172 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 2222 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_NE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 4178 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 2224 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4198 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 2240 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4214 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 2252 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4234 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 2268 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4250 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 2280 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4267 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 2293 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4293 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 2315 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4309 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 2326 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); cl_push(pp, OP_BNOT_STK); }
#line 4315 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 2327 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); cl_push(pp, OP_LNOT_STK); }
#line 4321 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 2328 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4327 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 2330 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			(yyval).flags &= ~ZLF_UNSIGNED;
			(yyval).flags |= ZLF_SIGNED;
			cl_push(pp, OP_MINUS_STK);
		}
#line 4338 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 2336 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 4344 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 2353 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1]).flags & (ZLF_STRUCT | ZLF_ARRAY))
			{
				ZL_ERROR("needs l-value");
			}

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);

			if((yyvsp[-1]).flags & ZLF_POINTER)
			{
				unsigned long ptr_step;
				ptr_step = 4;

				if(((yyvsp[-1]).flags & ZLF_POINTER) == 0x01000000)
				{
					switch((yyval).flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							ptr_step = 1;
							break;
						case ZLF_INT:
							if((yyval).flags & ZLF_SHORT)
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
#line 4392 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 2397 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1]).flags & (ZLF_STRUCT | ZLF_ARRAY))
			{
				ZL_ERROR("needs l-value");
			}

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);

			if((yyvsp[-1]).flags & ZLF_POINTER)
			{
				unsigned long ptr_step;
				ptr_step = 4;

				if(((yyvsp[-1]).flags & ZLF_POINTER) == 0x01000000)
				{
					switch((yyval).flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							ptr_step = 1;
							break;
						case ZLF_INT:
							if((yyval).flags & ZLF_SHORT)
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
#line 4440 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 2441 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if((yyvsp[0]).flags & (ZLF_STRUCT | ZLF_ARRAY))
			{
				ZL_ERROR("needs l-value");
			}

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);

			if((yyvsp[0]).flags & ZLF_POINTER)
			{
				unsigned long ptr_step;
				ptr_step = 4;

				if(((yyvsp[-1]).flags & ZLF_POINTER) == 0x01000000)
				{
					switch((yyval).flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							ptr_step = 1;
							break;
						case ZLF_INT:
							if((yyval).flags & ZLF_SHORT)
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
#line 4488 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 2485 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if((yyvsp[0]).flags & (ZLF_STRUCT | ZLF_ARRAY))
			{
				ZL_ERROR("needs l-value");
			}

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);

			if((yyvsp[0]).flags & ZLF_POINTER)
			{
				unsigned long ptr_step;
				ptr_step = 4;

				if(((yyvsp[-1]).flags & ZLF_POINTER) == 0x01000000)
				{
					switch((yyval).flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							ptr_step = 1;
							break;
						case ZLF_INT:
							if((yyval).flags & ZLF_SHORT)
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
#line 4536 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 2529 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
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
			cl_label_node *func;

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
			func = cl_label_find(pp->funcs_table, (yyvsp[-3]).string);
			free_str((yyvsp[-3]).string);
			if(!func)
			{
				ZL_ERROR("undeclared identifier");
			}
			
			(yyval).flags = func->flags & (ZLF_POINTER|ZLF_VOID|ZLF_CHAR|ZLF_DOUBLE|ZLF_FLOAT|ZLF_INT|ZLF_SHORT|ZLF_LONG|ZLF_SIGNED|ZLF_UNSIGNED|ZLF_STRUCT|ZLF_ARRAY);
			
			if(func->flags & ZLF_FUNC_INTERNAL)
			{
				cl_push(pp, OP_CALL); // call near
			}
			else
			{
				cl_push(pp, OP_CALL_FAR); // rcall far
			}
			cl_label_reference(func, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			if((yyvsp[-1]).size)
			{
				cl_push(pp, OP_SUB_REG_IMM); cl_push(pp, REG_ESP); cl_push_dw(pp, (yyvsp[-1]).size);
			}
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
#line 4613 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 2602 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			// get value from address and push
			if(!((yyvsp[0]).flags & (ZLF_STRUCT | ZLF_ARRAY)))
			{
				cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
				cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EAX); cl_push(pp, REG_EAX);

				if(!((yyvsp[0]).flags & ZLF_POINTER))
				{
					switch((yyvsp[0]).flags & ZLF_TYPE)
					{
						case ZLF_CHAR:
							cl_push(pp, OP_MOV_REG_IMM); cl_push(pp, REG_ECX); cl_push_dw(pp, 0x000000FF);
							cl_push(pp, OP_AND_REG_REG); cl_push(pp, REG_EAX); cl_push(pp, REG_ECX);
							break;
						case ZLF_INT:
							if((yyvsp[0]).flags & ZLF_SHORT)
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
#line 4649 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 2634 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			unsigned long var_size;
			switch((yyvsp[-1]).flags & ZLF_TYPE)
			{
				case ZLF_CHAR:
					var_size = 1;					
					break;
				case ZLF_INT:
					if((yyvsp[-1]).flags & ZLF_SHORT)
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
#line 4679 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 2660 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4687 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 2664 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).var->size[(yyvsp[-1]).rows]);
		}
#line 4698 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 2671 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).flags);
		}
#line 4707 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 2676 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4715 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 2680 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).var->flags);
		}
#line 4726 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 2688 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			(yyval).flags = (yyvsp[-2]).flags; 
			//printf("(%s) %s\n", ($2.flags&ZLF_SIGNED)?"signed":(($2.flags&ZLF_UNSIGNED)?"unsigned":""), ($4.flags&ZLF_SIGNED)?"signed":(($4.flags&ZLF_UNSIGNED)?"unsigned":""));
		}
#line 4736 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 2697 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nop */ }
#line 4742 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 2700 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nop */ }
#line 4748 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 2701 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value + (yyvsp[0]).value; }
#line 4754 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 2702 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value - (yyvsp[0]).value; }
#line 4760 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 2703 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value * (yyvsp[0]).value; }
#line 4766 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 2704 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value / (yyvsp[0]).value; }
#line 4772 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 2705 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value | (yyvsp[0]).value; }
#line 4778 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 2706 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value & (yyvsp[0]).value; }
#line 4784 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 2707 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value % (yyvsp[0]).value; }
#line 4790 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 2708 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value ^ (yyvsp[0]).value; }
#line 4796 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 2709 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value << (yyvsp[0]).value; }
#line 4802 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 2710 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value >> (yyvsp[0]).value; }
#line 4808 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 2711 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value < (yyvsp[0]).value; }
#line 4814 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 2712 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value > (yyvsp[0]).value; }
#line 4820 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 2713 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value >= (yyvsp[0]).value; }
#line 4826 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 2714 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value <= (yyvsp[0]).value; }
#line 4832 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 2715 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value == (yyvsp[0]).value; }
#line 4838 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 2716 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value != (yyvsp[0]).value; }
#line 4844 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 2717 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value || (yyvsp[0]).value; }
#line 4850 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 2718 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value && (yyvsp[0]).value; }
#line 4856 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 2719 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-4]).value ? (yyvsp[-2]).value : (yyvsp[0]).value; }
#line 4862 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 2720 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = ~(yyvsp[0]).value; }
#line 4868 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 2721 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = !(yyvsp[0]).value; }
#line 4874 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 2722 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 4880 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 2723 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = -(yyvsp[0]).value; }
#line 4886 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 2725 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			unsigned long var_size;
			switch((yyvsp[-1]).flags & ZLF_TYPE)
			{
				case ZLF_CHAR:
					var_size = 1;					
					break;
				case ZLF_INT:
					if((yyvsp[-1]).flags & ZLF_SHORT)
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

			(yyval).uvalue = var_size;
		}
#line 4915 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 2750 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4923 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 2754 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).var->size[(yyvsp[-1]).rows];
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
#line 4932 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 2759 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).flags;
		}
#line 4940 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 2763 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4948 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 2767 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).var->flags;
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
#line 4957 "zl_parser.cpp" /* yacc.c:1646  */
    break;


#line 4961 "zl_parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (scanner, pp, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (scanner, pp, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, scanner, pp);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, scanner, pp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (scanner, pp, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, scanner, pp);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, scanner, pp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2781 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1906  */










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
	cl_push_dw(&pp, 64);
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

