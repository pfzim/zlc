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
#line 6 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:316  */


#include "zl_parser.h"


#line 69 "zl_parser.cpp" /* yacc.c:316  */



/* Copy the first part of user declarations.  */
#line 11 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:339  */


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


#line 131 "zl_parser.cpp" /* yacc.c:355  */

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
    T_LABEL = 290,
    T_CONSTANT_DOUBLE = 291,
    T_CONSTANT_LONG = 292,
    T_CONSTANT_STRING = 293,
    T_VOID = 294,
    T_CHAR = 295,
    T_SHORT = 296,
    T_INT = 297,
    T_LONG = 298,
    T_FLOAT = 299,
    T_DOUBLE = 300,
    T_SIGNED = 301,
    T_UNSIGNED = 302,
    T_STRUCT = 303,
    T_STRUCT_DEFINED = 304,
    T_ELLIPSIS = 305,
    T_STRING = 306,
    T_EXTERN = 307,
    T_VAR = 308,
    T_IMPORT = 309,
    T_FROM = 310,
    T_GOTO = 311,
    T_SIZEOF = 312,
    T_TYPEOF = 313,
    T_RETURN = 314,
    T_REGISTER = 315,
    T_OPERATOR = 316,
    T_ASM = 317,
    T_PARAM_SEPARATOR = 318,
    T_NOP = 319,
    T_DBG_PRINT_REGS = 320,
    T_FUNCTION = 321
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

#line 220 "zl_parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   889

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  202
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  376

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      88,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,     2,     2,    34,    21,     2,
      89,    90,    32,    30,     3,    31,    47,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,    92,
      24,     4,    26,    15,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    91,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    19,    87,    36,     2,     2,     2,
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
      84,    85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   112,   116,   117,   121,   122,   125,   126,
     127,   128,   129,   130,   131,   132,   137,   136,   149,   153,
     154,   155,   159,   175,   176,   177,   178,   200,   221,   222,
     223,   227,   228,   229,   254,   255,   259,   260,   261,   269,
     277,   292,   307,   317,   332,   342,   331,   362,   376,   383,
     361,   395,   412,   433,   394,   462,   461,   490,   492,   491,
     516,   534,   553,   573,   593,   612,   611,   692,   695,   703,
     711,   716,   715,   792,   791,   822,   823,   850,   851,   887,
     888,   889,   890,   891,   892,   893,   894,   895,   896,   903,
     904,   908,   968,   967,  1113,  1114,  1118,  1135,  1166,  1185,
    1199,  1206,  1258,  1265,  1273,  1272,  1332,  1333,  1337,  1338,
    1343,  1369,  1375,  1376,  1409,  1438,  1467,  1496,  1525,  1554,
    1583,  1612,  1641,  1670,  1702,  1756,  1769,  1854,  1883,  1885,
    1892,  1893,  1894,  1895,  1896,  1897,  1898,  1899,  1900,  1901,
    1902,  1903,  1919,  1935,  1951,  1967,  1968,  1970,  1969,  1998,
    1997,  2026,  2039,  2025,  2072,  2073,  2074,  2075,  2082,  2098,
    2142,  2186,  2230,  2274,  2331,  2363,  2390,  2389,  2400,  2406,
    2405,  2417,  2427,  2430,  2431,  2432,  2433,  2434,  2435,  2436,
    2437,  2438,  2439,  2440,  2441,  2442,  2443,  2444,  2445,  2446,
    2447,  2448,  2449,  2450,  2451,  2452,  2453,  2454,  2480,  2479,
    2488,  2493,  2492
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
  "T_LABEL", "T_CONSTANT_DOUBLE", "T_CONSTANT_LONG", "T_CONSTANT_STRING",
  "T_VOID", "T_CHAR", "T_SHORT", "T_INT", "T_LONG", "T_FLOAT", "T_DOUBLE",
  "T_SIGNED", "T_UNSIGNED", "T_STRUCT", "T_STRUCT_DEFINED", "T_ELLIPSIS",
  "T_STRING", "T_EXTERN", "T_VAR", "T_IMPORT", "T_FROM", "T_GOTO",
  "T_SIZEOF", "T_TYPEOF", "T_RETURN", "T_REGISTER", "T_OPERATOR", "T_ASM",
  "T_PARAM_SEPARATOR", "T_NOP", "T_DBG_PRINT_REGS", "T_FUNCTION", "'{'",
  "'}'", "'\\n'", "'('", "')'", "']'", "';'", "$accept", "program_list",
  "program", "statement_list", "statement", "compound_statement", "$@1",
  "assembler_statement", "assembler_command_list", "assembler_command",
  "assembler_argument_list", "operator_parameter", "expression_statement",
  "buildin_statement", "selection_statement", "$@2", "$@3", "$@4", "$@5",
  "$@6", "$@7", "$@8", "$@9", "$@10", "else_statement", "$@11",
  "labeled_statement", "jump_statement", "declaration_function", "$@12",
  "f_current_level_increment", "function_arguments_list",
  "function_argument", "$@13", "declaration_statement", "$@14",
  "function_type_specifiers", "declaration_specifiers", "type_specifier",
  "init_declarator_list", "init_declarator", "$@15", "pointer",
  "declarator", "direct_declarator", "initializer", "initializer_list",
  "$@16", "expression", "argument_expression_list", "f_sw_context",
  "assignment_expression", "unary_expression", "cast_expression", "expr",
  "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "const_expr", "$@23",
  "$@24", YY_NULLPTR
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
     316,   317,   318,   319,   320,   321,   123,   125,    10,    40,
      41,    93,    59
};
# endif

#define YYPACT_NINF -284

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-284)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     235,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   -23,   163,    41,   235,  -284,  -284,  -284,   163,   163,
      15,  -284,  -284,  -284,    15,  -284,    15,    15,     0,     1,
    -284,   -31,   109,    86,  -284,  -284,    15,  -284,  -284,    15,
      71,  -284,    53,    57,  -284,    68,   521,   504,   110,   163,
    -284,   160,   160,   160,   160,  -284,    84,    88,   160,  -284,
     238,    -2,   532,   532,    -2,   532,   532,    -2,    -2,    97,
    -284,  -284,   103,   105,   504,   456,  -284,  -284,   272,   647,
      85,     4,  -284,  -284,  -284,  -284,  -284,  -284,   163,   163,
     313,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
    -284,  -284,   141,     5,  -284,  -284,   141,  -284,  -284,   141,
     141,  -284,   163,   163,   194,   111,    15,   112,   333,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
    -284,  -284,   532,  -284,  -284,  -284,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,    65,   163,   107,    15,   115,    -2,   116,    -2,
    -284,   607,   700,   733,   438,   778,   805,   818,   818,   473,
     473,   473,   473,   138,   138,   122,   122,  -284,  -284,  -284,
      25,   532,   117,    -2,   118,    -2,  -284,  -284,  -284,    -2,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   120,   532,   532,   532,   764,   792,   831,   844,
     844,   855,   855,   855,   855,   149,   149,   128,   128,  -284,
    -284,  -284,   143,  -284,  -284,  -284,   123,  -284,  -284,   -35,
    -284,   -34,   160,  -284,  -284,  -284,  -284,    -9,  -284,    69,
     504,   141,  -284,   627,   717,   749,   121,  -284,  -284,  -284,
    -284,   665,   532,  -284,  -284,  -284,  -284,  -284,   355,  -284,
     532,   125,  -284,  -284,   -54,    60,   130,   -11,   158,   419,
     -51,   139,   146,  -284,   148,   355,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,   147,   227,   683,   532,   144,   355,
     150,  -284,   151,  -284,   532,  -284,   153,  -284,   154,   -10,
     186,    95,   161,   159,   -51,  -284,  -284,  -284,  -284,  -284,
     532,   164,   532,   192,  -284,  -284,   181,  -284,  -284,    95,
    -284,   195,  -284,  -284,   284,  -284,   -51,  -284,  -284,  -284,
     198,  -284,  -284,   199,   287,   200,    95,  -284,   355,  -284,
     213,   532,  -284,    95,  -284,  -284,   257,   355,   532,   215,
    -284,  -284,  -284,  -284,   222,  -284,   355,  -284,   532,  -284,
     221,   224,  -284,  -284,   355,  -284
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,    75,     0,     3,     5,     4,    73,    77,    75,
      94,    76,     1,     2,    94,    78,    94,    94,     0,     0,
      89,     0,    91,     0,    95,    67,    94,    74,    97,    94,
      96,    92,     0,     0,    90,     0,     0,     0,     0,    70,
     100,     0,     0,     0,     0,   172,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     128,   129,     0,     0,     0,     0,    93,   101,   164,   112,
       0,     0,    68,    71,   195,   196,   194,   193,   198,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,   124,   158,   164,   156,   157,   125,   155,   154,   161,
     162,   111,   166,   169,   103,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     159,   160,     0,   151,   147,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    94,     0,     0,     0,     0,
     173,     0,   190,   191,   178,   181,   179,   188,   189,   185,
     187,   184,   186,   182,   183,   174,   175,   176,   177,   180,
       0,   108,     0,     0,     0,     0,   104,   102,   127,     0,
     130,   113,   123,   122,   119,   120,   114,   118,   117,   116,
     115,   121,     0,     0,     0,     0,   135,   138,   136,   145,
     146,   142,   144,   141,   143,   139,   140,   131,   132,   133,
     134,   137,     0,    62,    69,    64,     0,    72,   197,     0,
     200,     0,     0,   111,   163,   109,   165,     0,   168,     0,
       0,   171,   126,     0,   148,   150,     0,    16,    66,   199,
     202,   192,     0,   167,   170,   105,   152,    63,     7,   110,
       0,     0,    44,    47,     0,     0,     0,   124,     0,     0,
      27,     0,     0,    34,     0,     7,     8,    15,     9,    10,
      11,    12,    13,    14,     0,   106,   153,     0,     0,     0,
       0,    38,     0,    39,     0,    60,     0,    42,     0,     0,
       0,    25,     0,    21,    27,    36,    37,    17,     6,    35,
       0,     0,     0,     0,    40,    41,     0,    61,    43,    30,
      22,     0,    33,    31,    24,    18,    27,    20,   107,    55,
       0,    48,    51,     0,    29,     0,     0,    19,     0,    45,
       0,     0,    26,    30,    32,    23,    57,     0,     0,     0,
      28,    58,    56,    46,     0,    52,     0,    49,     0,    59,
       0,     0,    50,    53,     0,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,   291,  -284,    31,  -181,    81,  -284,  -284,  -283,  -284,
     -30,  -266,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -279,  -284,  -284,  -284,
    -284,  -284,   155,  -284,    32,  -284,   300,   129,  -284,  -284,
     285,  -284,    24,   -29,  -284,   275,    74,  -284,  -167,  -284,
      82,   -47,   -50,  -284,   -26,  -284,  -284,  -284,  -284,  -284,
    -284,   -32,  -284,  -284
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,   284,   285,   286,   268,   287,   312,   313,
     343,   344,   288,   289,   290,   298,   357,   299,   350,   370,
     351,   368,   374,   348,   362,   366,   291,   292,    15,   236,
      43,    81,    82,   165,   293,    24,    20,    17,    18,    29,
      30,    47,    31,    32,    40,   124,   125,   250,   294,   190,
     191,   295,    78,   127,    79,   214,   215,   213,   270,   193,
     195,    60,   167,   169
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,   314,   300,   309,    36,   305,   305,   163,   142,   142,
      45,   112,   113,   113,   116,   113,   113,   119,   120,    84,
      85,    86,    87,    38,   310,   113,    90,    77,   243,   311,
      64,   337,    16,    19,   142,   314,   114,   115,   301,   117,
     118,    22,   140,   141,    28,   334,    16,    27,   142,   128,
      33,    34,   111,   347,    35,   259,   260,   314,    39,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   121,   329,
     355,   263,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    37,   164,   212,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   142,    41,    46,   244,   302,   239,   323,   241,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   237,   326,   331,   232,
      42,    21,    48,   247,   245,   249,    49,    25,    21,   251,
     198,   332,   303,   338,   107,   108,   109,   233,    50,   264,
     159,   160,   161,   113,   113,   113,    80,   356,   105,   106,
     107,   108,   109,    88,   333,   162,   363,    89,    83,   157,
     158,   159,   160,   161,   142,   369,   121,   253,   254,   255,
      51,    52,   122,   375,   123,    53,    54,   196,   197,   235,
     256,   371,   199,    77,   126,   238,   240,   246,   248,   257,
     261,   252,   306,   267,   297,   269,    55,   166,   168,   304,
     113,     1,     2,     3,     4,     5,     6,     7,     8,     9,
     320,   315,   308,   322,    10,   317,    56,    57,   316,   319,
     330,   341,   324,   325,   296,   327,   328,   336,   335,    58,
     321,   192,   194,    91,   339,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   342,   345,   340,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   346,   349,   352,
     353,   354,    83,     1,     2,     3,     4,     5,     6,     7,
       8,     9,   358,   361,   359,    23,    10,   365,    11,   140,
     141,   364,   367,   372,   373,   142,   318,   258,   234,    26,
      12,    44,    76,   360,   265,   262,     0,     0,    91,   110,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   143,     0,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,     0,     0,
      65,    66,    67,    68,     0,     0,     0,     0,     0,   271,
       0,     0,     0,   170,   272,   273,   274,   275,   276,   277,
       0,    70,    71,     1,     2,     3,     4,     5,     6,     7,
       8,     9,     0,   200,     0,     0,    10,     0,     0,     0,
     278,    72,    73,   279,     0,     0,   280,     0,   281,   282,
      61,   257,     0,     0,    75,     0,     0,   283,     0,    62,
      63,    64,     0,     0,    65,    66,    67,    68,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    69,     0,    70,    71,    61,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,     0,
       0,    65,    66,    67,    68,    72,    73,    -1,    -1,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,    75,     0,
      69,   307,    70,    71,     1,     2,     3,     4,     5,     6,
       7,     8,     9,     0,     0,    61,     0,    10,     0,     0,
       0,     0,    72,    73,    62,    63,    64,     0,     0,    65,
      66,    67,    68,     0,     0,    75,     0,     0,     0,     0,
       0,    51,    52,    61,     0,     0,    53,    54,    69,     0,
      70,    71,    62,    63,    64,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    55,     0,     0,
      72,    73,     0,     0,     0,     0,    69,     0,    70,    71,
      74,     0,     0,    75,     0,     0,     0,    56,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      58,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    91,   242,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   143,   266,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   143,     0,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,    -1,
      -1,    -1,    -1,   155,   156,   157,   158,   159,   160,   161
};

static const yytype_int16 yycheck[] =
{
      47,   280,    56,    54,     3,    16,    16,     3,    43,    43,
      39,    61,    62,    63,    64,    65,    66,    67,    68,    51,
      52,    53,    54,    54,    75,    75,    58,    74,     3,    80,
      32,   314,     0,    56,    43,   314,    62,    63,    92,    65,
      66,     0,    37,    38,    20,   311,    14,    32,    43,    75,
      26,    27,    54,   336,    54,    90,    90,   336,    89,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    89,    89,
     346,    90,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    92,    90,   142,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    43,     4,    43,    90,    56,   167,   299,   169,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   165,   304,    43,    74,
      54,    12,    89,   193,   191,   195,    89,    18,    19,   199,
     126,    56,    92,   320,    32,    33,    34,    92,    90,    90,
      32,    33,    34,   213,   214,   215,    56,   348,    30,    31,
      32,    33,    34,    89,    79,    90,   357,    89,    49,    30,
      31,    32,    33,    34,    43,   366,    89,   213,   214,   215,
      30,    31,    89,   374,    89,    35,    36,     3,    87,    92,
      57,   368,    90,   250,    75,    90,    90,    90,    90,    86,
     242,    91,    54,    92,    89,   262,    56,    88,    89,    89,
     270,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       3,    92,   279,    89,    71,    87,    76,    77,    92,    92,
      54,    49,    92,    92,   270,    92,    92,    88,    87,    89,
     297,   122,   123,    15,    90,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    92,    79,   322,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     3,    90,    90,
       3,    91,   163,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    89,    46,   351,    14,    71,    92,    73,    37,
      38,   358,    90,    92,    90,    43,   285,   236,   163,    19,
      85,    36,    47,   353,   250,   243,    -1,    -1,    15,    91,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    90,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    90,    -1,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    78,    -1,    -1,    81,    -1,    83,    84,
      21,    86,    -1,    -1,    89,    -1,    -1,    92,    -1,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    54,    -1,    56,    57,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    76,    77,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    89,    -1,
      54,    92,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    21,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    30,    31,    21,    -1,    -1,    35,    36,    54,    -1,
      56,    57,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      86,    -1,    -1,    89,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      89,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      71,    73,    85,    94,    95,   121,   127,   130,   131,    56,
     129,   130,     0,    94,   128,   130,   129,    32,   135,   132,
     133,   135,   136,   135,   135,    54,     3,    92,    54,    89,
     137,     4,    54,   123,   133,   136,    43,   134,    89,    89,
      90,    30,    31,    35,    36,    56,    76,    77,    89,    91,
     154,    21,    30,    31,    32,    35,    36,    37,    38,    54,
      56,    57,    76,    77,    86,    89,   138,   144,   145,   147,
      56,   124,   125,   130,   154,   154,   154,   154,    89,    89,
     154,    15,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      91,    54,   145,   145,   147,   147,   145,   147,   147,   145,
     145,    89,    89,    89,   138,   139,   130,   146,   147,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      37,    38,    43,    15,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    90,     3,    90,   126,   130,   155,   130,   156,
      90,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     142,   143,   130,   152,   130,   153,     3,    87,   135,    90,
      90,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   150,   148,   149,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,    74,    92,   125,    92,   122,   136,    90,   145,
      90,   145,    16,     3,    90,   144,    90,   145,    90,   145,
     140,   145,    91,   147,   147,   147,    57,    86,    98,    90,
      90,   154,   143,    90,    90,   139,    16,    92,    99,   144,
     151,    44,    49,    50,    51,    52,    53,    54,    75,    78,
      81,    83,    84,    92,    96,    97,    98,   100,   105,   106,
     107,   119,   120,   127,   141,   144,   147,    89,   108,   110,
      56,    92,    56,    92,    89,    16,    54,    92,   144,    54,
      75,    80,   101,   102,   119,    92,    92,    87,    96,    92,
       3,   144,    89,    97,    92,    92,   141,    92,    92,    89,
      54,    43,    56,    79,   104,    87,    88,   101,   141,    90,
     144,    49,    92,   103,   104,    79,     3,   101,   116,    90,
     111,   113,    90,     3,    91,   104,    97,   109,    89,   144,
     103,    46,   117,    97,   144,    92,   118,    90,   114,    97,
     112,   141,    92,    90,   115,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    99,    98,   100,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   108,   109,   107,   110,   111,   112,
     107,   113,   114,   115,   107,   116,   107,   117,   118,   117,
     119,   120,   121,   121,   121,   122,   121,   123,   124,   124,
     124,   126,   125,   128,   127,   129,   129,   130,   130,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   133,   134,   133,   135,   135,   136,   137,   137,   137,
     137,   138,   138,   139,   140,   139,   141,   141,   142,   142,
     142,   143,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   145,   145,   145,   146,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   148,   147,   149,
     147,   150,   151,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   152,   147,   147,   153,
     147,   147,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   155,   154,
     154,   156,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     3,     3,
       2,     1,     2,     4,     2,     1,     4,     0,     3,     1,
       0,     1,     3,     1,     1,     2,     2,     2,     2,     2,
       3,     3,     2,     3,     0,     0,     7,     0,     0,     0,
      10,     0,     0,     0,    12,     0,     7,     0,     0,     3,
       2,     3,     9,    11,     9,     0,    10,     0,     1,     3,
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
        case 16:
#line 137 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->current_level++;
		}
#line 1698 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 141 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_var_free_level(&pp->vars_table, pp->current_level);
			pp->current_level--;
		}
#line 1707 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 160 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 1727 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 175 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[-3]).value, &(yyvsp[-2]), &(yyvsp[0])); }
#line 1733 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 176 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[-1]).value, &(yyvsp[0]), NULL); }
#line 1739 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 177 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[0]).value, NULL, NULL); }
#line 1745 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 179 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 1771 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 221 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).value); }
#line 1777 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 222 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).value); }
#line 1783 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 227 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval).flags = ARG_REG; }
#line 1789 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 228 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); (yyval).flags = ARG_PREG; }
#line 1795 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 229 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval).flags = ARG_IMM; }
#line 1801 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 255 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX); }
#line 1807 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 259 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_NOP); }
#line 1813 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 260 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_DBG_PRINT); }
#line 1819 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 262 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack) ZL_ERROR("break not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->next_node->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1831 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 270 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack || !pp->cl_loop_stack->next_node) ZL_ERROR("continue not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->data, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1843 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 278 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 1862 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 293 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 1881 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 308 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_label;

			lb_label = cl_label_find(pp->labels_table, "@exit_func");

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1895 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 318 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_label;

			lb_label = cl_label_find(pp->labels_table, "@exit_func");

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_JMP);
			cl_label_reference(lb_label, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1910 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_condition->offset = pp->hc_fill[pp->hc_active];
			lb_condition->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit loop
			cl_stack_push(&pp->cl_loop_stack, lb_condition);	// condition
		}
#line 1924 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 342 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit;
			lb_exit= (cl_label_node *) pp->cl_loop_stack->next_node->data;
			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_exit, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1936 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 350 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_condition, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->flags = ZLF_DEFINED;
		}
#line 1952 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 362 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition, *lb_start;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_start = cl_label_define(&pp->labels_table, NULL);
			lb_start->offset = pp->hc_fill[pp->hc_active];
			lb_start->flags = ZLF_DEFINED;

			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit loop
			cl_stack_push(&pp->cl_loop_stack, lb_condition);	// condition
			cl_stack_push(&pp->cl_stack, lb_start);				// start loop
		}
#line 1969 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 376 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_condition;
			lb_condition = (cl_label_node *) pp->cl_loop_stack->data;
			lb_condition->offset = pp->hc_fill[pp->hc_active];
			lb_condition->flags = ZLF_DEFINED;
		}
#line 1980 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 383 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JNZ_POP_STK);
			cl_label_reference((cl_label_node *) cl_stack_pop(&pp->cl_stack), pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->flags = ZLF_DEFINED;
		}
#line 1996 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 395 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
			lb_condition->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_condition);
		}
#line 2017 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 412 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
			lb_loop->flags = ZLF_DEFINED;
		}
#line 2042 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 433 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
			lb_statement->flags = ZLF_DEFINED;
		}
#line 2062 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 449 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_loop;
			lb_loop = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_loop, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->flags = ZLF_DEFINED;
		}
#line 2079 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 462 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2096 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 476 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2112 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 492 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2137 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 517 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, (yyvsp[-1]).string);
			free_str((yyvsp[-1]).string);

			if(label->flags & ZLF_DEFINED)
			{
				ZL_ERROR("label redefined");
			}

			label->offset = pp->hc_fill[pp->hc_active];
			label->flags = ZLF_DEFINED;
		}
#line 2156 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 535 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2176 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 554 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2200 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 574 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2224 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 594 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2246 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 612 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
			
			// ����� ���� ����� ������������� offset ���������� function_arguments_list � �������� �������
			
			func->flags = ZLF_FUNC_INTERNAL | ZLF_DEFINED | (yyvsp[-6]).flags | (yyvsp[-5]).flags;
			func->offset = pp->hc_fill[pp->hc_active];
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
#line 2286 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 648 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;
			unsigned long fix_point;

			label = cl_label_find(pp->labels_table, "@exit_func");

			label->offset = pp->hc_fill[pp->hc_active];
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
#line 2326 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 692 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { pp->current_level++; }
#line 2332 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 696 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = 8;
			(yyvsp[0]).var->offset = (yyval).uvalue;
			(yyvsp[0]).var->flags |= ZLF_PARAM;
			//ZL_WARNING("first");
			//printf("first rule:  %s %d\n", $1.var->name, $1.var->offset);
		}
#line 2344 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 704 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = (yyvsp[-2]).value + 4;
			(yyvsp[0]).var->offset = (yyval).uvalue;
			(yyvsp[0]).var->flags |= ZLF_PARAM;
			//ZL_WARNING("second");
			//printf("second rule: %s offset: %d\n", $3.var->name, $3.var->offset);
		}
#line 2356 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 716 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2374 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 730 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2436 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 792 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2464 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 816 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_pop(&pp->cl_stack);
		}
#line 2472 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 822 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_VOID; }
#line 2478 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 824 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2506 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 850 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = (yyvsp[0]).flags; }
#line 2512 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 852 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2549 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 887 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_VOID; }
#line 2555 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 888 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_CHAR; }
#line 2561 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 889 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_SHORT; }
#line 2567 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 890 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_INT; }
#line 2573 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 891 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_LONG; }
#line 2579 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 892 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_FLOAT; }
#line 2585 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 893 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_DOUBLE; }
#line 2591 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 894 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_SIGNED; }
#line 2597 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 895 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_UNSIGNED; }
#line 2603 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 896 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_EXTERNAL; }
#line 2609 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 903 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2615 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 904 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2621 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 909 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2684 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 968 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2788 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1068 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2835 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1113 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = 0x00000000; }
#line 2841 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1114 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = 0x01000000 + (yyvsp[0]).flags; }
#line 2847 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1119 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2865 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1136 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2900 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1167 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
			(yyval).var->size[(yyval).var->rows] = (yyvsp[-1]).uvalue; // ���-�� ��������� � ������ �������
			// ������� ���� ������ ���������� ���-�� ��������� � ������ ������ �������
		}
#line 2923 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1186 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2941 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1200 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 2949 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1207 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);  // assignment_expression
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);  // var address

			(yyval).size = 4;

			if(!(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_POINTER))
			{
				switch(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						(yyval).size = 1;
						cl_push(pp, OP_SIZE_OVERRIDE_1);
						
						/* char text[] = "like this";
						if(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_ARRAY)
						{
							mov edx, ecx
						loop:
							size_1
							mov [edx], [eax]
							inc edx
							size_1
							test [eax], [eax]
							jz lb_exit
							inc eax
							jmp lb_loop
							
							
							cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
							cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);
						}
						//*/
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

			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_ECX);
		}
#line 3005 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1259 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 3013 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1266 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			//if(((zl_names_map *) pp->cl_stack->data)->flags & ZLF_AUTOARRAY)
			//{
				//((zl_names_map *) pp->cl_stack->data)->elements->size += var_size;
			//}
		}
#line 3024 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1273 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
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
#line 3056 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1301 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).size = (yyvsp[-3]).size + (yyvsp[0]).size;
		}
#line 3064 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1333 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX); }
#line 3070 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1337 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).size = 0; }
#line 3076 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1339 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).size = 4;
			//here ha is 1
		}
#line 3085 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1344 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).size = 4 + (yyvsp[-3]).size;
			//here ha is 2

			//hc[1] = concat(hc[2], hc[1]);
			cl_var_join_dimension(pp->vars_table, pp->hc_active-1, pp->hc_active, pp->hc_fill[pp->hc_active]);
			cl_label_join_dimension(pp->funcs_table, pp->hc_active, pp->hc_active-1, pp->hc_fill[pp->hc_active-1]);
			cl_const_swap_and_join_dimensions(pp->data_table, pp->hc_active-1, pp->hc_fill[pp->hc_active]);
			cl_code_add(pp, pp->hard_code[pp->hc_active-1], pp->hc_fill[pp->hc_active-1]);

			zfree(pp->hard_code[pp->hc_active-1]);

			pp->hard_code[pp->hc_active-1] = pp->hard_code[pp->hc_active];
			pp->hc_fill[pp->hc_active-1] = pp->hc_fill[pp->hc_active];
			pp->hc_buffer_size[pp->hc_active-1] = pp->hc_buffer_size[pp->hc_active];

			pp->hc_active--;

			pp->hard_code[pp->hc_active+1] = NULL;
			pp->hc_fill[pp->hc_active+1] = 0;
			pp->hc_buffer_size[pp->hc_active+1] = 0;
		}
#line 3112 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1369 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
		pp->hc_active++;
	}
#line 3120 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1375 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3126 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1377 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3163 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1410 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3196 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1439 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3229 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1468 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3262 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1497 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3295 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1526 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3328 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1555 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3361 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1584 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3394 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1613 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3427 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1642 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3460 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1671 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3493 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1703 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
					// ������ �� ������ ���������� ����� �������� �������
					cl_push(pp, OP_MOV_REG_PREG); cl_push(pp, REG_EBX); cl_push(pp, REG_EBX);
				}

				cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBX);
			}
		}
#line 3551 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1757 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3568 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1770 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3650 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1855 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3678 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1883 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).uvalue); }
#line 3684 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1886 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_PUSH_OFFSET);
			cl_const_define(&pp->data_table, pp->hc_active, (yyvsp[0]).string, (yyvsp[0]).size, pp->hc_fill[pp->hc_active]); // ��������� ������ �� ��� ������
			free_str((yyvsp[0]).string);
			cl_push_dw(pp, 0);						// ������ ��������
		}
#line 3695 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1892 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 3701 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1893 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_ADD_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3707 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1894 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SUB_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3713 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1895 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_MUL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3719 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1896 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_DIV_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3725 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1897 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_OR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3731 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1898 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_AND_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3737 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1899 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_MOD_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3743 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1900 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_XOR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3749 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1901 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SHL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3755 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1902 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SHR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3761 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1904 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3781 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1920 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3801 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1936 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3821 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1952 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3841 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1967 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_E_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3847 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1968 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_NE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3853 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1970 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3873 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1986 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3889 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1998 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3909 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 2014 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3925 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 2026 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3942 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 2039 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3968 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 2061 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3984 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 2072 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); cl_push(pp, OP_BNOT_STK); }
#line 3990 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 2073 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); cl_push(pp, OP_LNOT_STK); }
#line 3996 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 2074 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4002 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 2076 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			(yyval).flags &= ~ZLF_UNSIGNED;
			(yyval).flags |= ZLF_SIGNED;
			cl_push(pp, OP_MINUS_STK);
		}
#line 4013 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 2082 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 4019 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 2099 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4067 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 2143 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4115 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 2187 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4163 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 2231 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4211 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 2275 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			//if(pp->hc_fill[pp->hc_active] > 0)
			{
				//hc[active-1] = concat(hc[active-1], hc[active])
				cl_var_join_dimension(pp->vars_table, pp->hc_active, pp->hc_active-1, pp->hc_fill[pp->hc_active-1]);
				cl_label_join_dimension(pp->funcs_table, pp->hc_active, pp->hc_active-1, pp->hc_fill[pp->hc_active-1]);
				cl_const_join_dimension(pp->data_table, pp->hc_active, pp->hc_fill[pp->hc_active-1]);
				pp->hc_active--;
				//cl_const_shift_dimension(pp->data_table, pp->hc_active, 0);
				cl_code_add(pp, pp->hard_code[pp->hc_active+1], pp->hc_fill[pp->hc_active+1]);

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
#line 4272 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 2332 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4308 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 2364 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4338 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 2390 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4346 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 2394 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).var->size[(yyvsp[-1]).rows]);
		}
#line 4357 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 2401 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).flags);
		}
#line 4366 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 2406 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4374 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 2410 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).var->flags);
		}
#line 4385 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 2418 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			(yyval).flags = (yyvsp[-2]).flags; 
			//printf("(%s) %s\n", ($2.flags&ZLF_SIGNED)?"signed":(($2.flags&ZLF_UNSIGNED)?"unsigned":""), ($4.flags&ZLF_SIGNED)?"signed":(($4.flags&ZLF_UNSIGNED)?"unsigned":""));
		}
#line 4395 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 2427 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nop */ }
#line 4401 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 2430 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nop */ }
#line 4407 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 2431 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value + (yyvsp[0]).value; }
#line 4413 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 2432 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value - (yyvsp[0]).value; }
#line 4419 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 2433 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value * (yyvsp[0]).value; }
#line 4425 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 2434 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value / (yyvsp[0]).value; }
#line 4431 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 2435 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value | (yyvsp[0]).value; }
#line 4437 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 2436 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value & (yyvsp[0]).value; }
#line 4443 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 2437 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value % (yyvsp[0]).value; }
#line 4449 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 2438 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value ^ (yyvsp[0]).value; }
#line 4455 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 2439 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value << (yyvsp[0]).value; }
#line 4461 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 2440 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value >> (yyvsp[0]).value; }
#line 4467 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 2441 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value < (yyvsp[0]).value; }
#line 4473 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 2442 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value > (yyvsp[0]).value; }
#line 4479 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 2443 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value >= (yyvsp[0]).value; }
#line 4485 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 2444 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value <= (yyvsp[0]).value; }
#line 4491 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 2445 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value == (yyvsp[0]).value; }
#line 4497 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 2446 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value != (yyvsp[0]).value; }
#line 4503 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 2447 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value || (yyvsp[0]).value; }
#line 4509 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 2448 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value && (yyvsp[0]).value; }
#line 4515 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 2449 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-4]).value ? (yyvsp[-2]).value : (yyvsp[0]).value; }
#line 4521 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 2450 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = ~(yyvsp[0]).value; }
#line 4527 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 2451 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = !(yyvsp[0]).value; }
#line 4533 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 2452 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 4539 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 2453 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = -(yyvsp[0]).value; }
#line 4545 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 2455 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4574 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 2480 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4582 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 2484 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).var->size[(yyvsp[-1]).rows];
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
#line 4591 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 2489 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).flags;
		}
#line 4599 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 2493 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4607 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 2497 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).var->flags;
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
#line 4616 "zl_parser.cpp" /* yacc.c:1646  */
    break;


#line 4620 "zl_parser.cpp" /* yacc.c:1646  */
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
#line 2511 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1906  */










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


	// predefined int main()
	func = cl_label_define(&pp.funcs_table, "main");

	func->flags = ZLF_FUNC_INTERNAL | ZLF_SIGNED | ZLF_LONG | ZLF_INT;
	func->library = NULL;
	
	cl_push(&pp, OP_CALL);
	cl_label_reference(func, 0, pp.hc_fill[0]);
	cl_push_dw(&pp, 0);
	cl_push(&pp, OP_EOF);

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

	*hard_code_size = pp.hc_fill[0];

	if(!ret && cl_label_fix(pp.funcs_table, pp.hard_code[0]))
	{
		ret = 1;
		if(error_msg)
		{
			*error_msg = alloc_string("zlc: error, jump to undefined label");
		}
	}


	cl_link_sections(0, pp.data_table, pp.vars_table, pp.funcs_table, pp.hard_code[0], pp.hc_fill[0],
		const_sect, const_size,
		data_sect, data_size,
		reloc_sect, reloc_size,
		import_sect, import_size,
		export_sect, export_size,
		map_sect, map_size);

	cl_label_free(&pp.labels_table);
	cl_label_free(&pp.funcs_table);
	cl_const_free(&pp.data_table);
	cl_var_free_level(&pp.vars_table, 0);

	cl_stack_free(&pp.cl_stack);
	cl_stack_free(&pp.cl_loop_stack);

	*hardcode = pp.hard_code[0];

	return ret;
}

