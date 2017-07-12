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
#define YYLAST   880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  374

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
     277,   292,   307,   317,   332,   331,   350,   360,   349,   380,
     394,   401,   379,   413,   430,   451,   412,   482,   484,   483,
     500,   518,   537,   557,   577,   596,   595,   674,   677,   683,
     689,   694,   693,   770,   769,   800,   801,   828,   829,   865,
     866,   867,   868,   869,   870,   871,   872,   873,   874,   881,
     882,   886,   946,   945,  1091,  1092,  1096,  1113,  1144,  1163,
    1177,  1184,  1236,  1243,  1251,  1250,  1310,  1311,  1315,  1316,
    1317,  1327,  1328,  1361,  1390,  1419,  1448,  1477,  1506,  1535,
    1564,  1593,  1622,  1654,  1708,  1721,  1806,  1835,  1837,  1844,
    1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,
    1855,  1871,  1887,  1903,  1919,  1920,  1922,  1921,  1942,  1941,
    1962,  1972,  1961,  1991,  1992,  1993,  1994,  2001,  2017,  2061,
    2105,  2149,  2193,  2234,  2266,  2293,  2292,  2303,  2309,  2308,
    2320,  2330,  2333,  2334,  2335,  2336,  2337,  2338,  2339,  2340,
    2341,  2342,  2343,  2344,  2345,  2346,  2347,  2348,  2349,  2350,
    2351,  2352,  2353,  2354,  2355,  2356,  2357,  2383,  2382,  2391,
    2396,  2395
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
  "$@16", "expression", "argument_expression_list",
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

#define YYPACT_NINF -300

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-300)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     501,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,   -25,   475,    21,   501,  -300,  -300,  -300,   475,   475,
       0,  -300,  -300,  -300,     0,  -300,     0,     0,   -16,     1,
    -300,   -31,    40,    -7,  -300,  -300,     0,  -300,  -300,     0,
      14,  -300,   -19,   -17,  -300,   -13,   144,   466,     5,   475,
    -300,   429,   429,   429,   429,  -300,    49,    50,   429,  -300,
     259,    -3,   494,   494,    -3,   494,   494,    -3,    -3,    51,
    -300,  -300,    53,    55,   466,   418,  -300,  -300,   333,   612,
       4,    60,    70,  -300,  -300,  -300,  -300,  -300,   475,   475,
     297,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
    -300,  -300,   117,    75,  -300,  -300,   117,  -300,  -300,   117,
     117,   494,   475,   475,   159,    79,     0,    81,   334,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
    -300,  -300,   494,  -300,  -300,  -300,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   -28,    77,   475,     0,    86,    -3,    87,    -3,
    -300,   572,   665,   698,   729,   758,   785,   798,   798,   835,
     835,   835,   835,   125,   125,    47,    47,  -300,  -300,  -300,
      88,   183,   100,    -3,   101,    -3,  -300,  -300,  -300,    -3,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,   103,   494,   494,   494,   744,   772,   811,   824,
     824,   846,   846,   846,   846,   151,   151,    82,    82,  -300,
    -300,  -300,   138,  -300,  -300,   110,  -300,  -300,  -300,   -37,
    -300,   -36,   429,  -300,   494,  -300,   -35,  -300,   -21,   466,
     117,  -300,   592,   682,   714,   107,  -300,  -300,  -300,  -300,
     630,  -300,  -300,  -300,  -300,  -300,  -300,   354,   494,   112,
    -300,  -300,   -32,   -30,   114,   -14,   150,   116,    -9,   115,
     121,  -300,   119,   354,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,   122,   212,   648,   494,   128,   354,   127,  -300,
     130,  -300,   494,  -300,   131,  -300,   133,   -11,   172,   -23,
     140,   141,    -9,  -300,  -300,  -300,  -300,  -300,   494,   142,
     494,   179,  -300,  -300,   139,  -300,  -300,   -23,  -300,   155,
    -300,  -300,   233,  -300,    -9,  -300,  -300,  -300,   153,  -300,
    -300,   154,   236,   156,   -23,  -300,   354,  -300,   152,   494,
    -300,   -23,  -300,  -300,   194,   354,   494,   176,  -300,  -300,
    -300,  -300,   180,  -300,   354,  -300,   494,  -300,   177,   185,
    -300,  -300,   354,  -300
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
     100,     0,     0,     0,     0,   171,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
     127,   128,     0,     0,     0,     0,    93,   101,   163,   111,
       0,     0,    68,    71,   194,   195,   193,   192,   197,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,   123,   157,   163,   155,   156,   124,   154,   153,   160,
     161,   108,   165,   168,   103,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     158,   159,     0,   150,   146,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    70,    94,     0,     0,     0,     0,
     172,     0,   189,   190,   177,   180,   178,   187,   188,   184,
     186,   183,   185,   181,   182,   173,   174,   175,   176,   179,
       0,   109,     0,     0,     0,     0,   104,   102,   126,     0,
     129,   112,   122,   121,   118,   119,   113,   117,   116,   115,
     114,   120,     0,     0,     0,     0,   134,   137,   135,   144,
     145,   141,   143,   140,   142,   138,   139,   130,   131,   132,
     133,   136,     0,    62,    64,     0,    69,    72,   196,     0,
     199,     0,     0,   162,   108,   164,     0,   167,     0,     0,
     170,   125,     0,   147,   149,     0,    16,    66,   198,   201,
     191,   110,   166,   169,   105,   151,    63,     7,     0,     0,
      46,    49,     0,     0,     0,   123,     0,     0,    27,     0,
       0,    34,     0,     7,     8,    15,     9,    10,    11,    12,
      13,    14,     0,   106,   152,     0,     0,     0,     0,    38,
       0,    39,     0,    60,     0,    42,     0,     0,     0,    25,
       0,    21,    27,    36,    37,    17,     6,    35,     0,     0,
       0,     0,    40,    41,     0,    61,    43,    30,    22,     0,
      33,    31,    24,    18,    27,    20,   107,    44,     0,    50,
      53,     0,    29,     0,     0,    19,     0,    47,     0,     0,
      26,    30,    32,    23,    57,     0,     0,     0,    28,    58,
      45,    48,     0,    54,     0,    51,     0,    59,     0,     0,
      52,    55,     0,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,   231,  -300,    11,  -296,    61,  -300,  -300,  -282,  -300,
    -105,  -281,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -269,  -300,  -300,  -300,
    -300,   134,  -300,  -300,    34,  -300,   276,   149,  -300,  -300,
     261,  -300,    15,   -29,  -300,   252,    52,  -300,  -299,    56,
     -47,   -50,  -300,   -26,  -300,  -300,  -300,  -300,  -300,  -300,
     158,  -300,  -300
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,   282,   283,   284,   267,   285,   310,   311,
     341,   342,   286,   287,   288,   346,   296,   355,   297,   348,
     368,   349,   366,   372,   360,   364,   289,   290,    15,   235,
      43,    81,    82,   165,   291,    24,    20,    17,    18,    29,
      30,    47,    31,    32,    40,   124,   125,   249,   292,   190,
     293,    78,   127,    79,   214,   215,   213,   268,   193,   195,
      60,   167,   169
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,   321,   303,   324,    36,   303,   142,   142,   142,   312,
      45,   112,   113,   113,   116,   113,   113,   119,   120,   336,
     329,    22,   142,    38,   298,   113,   300,    77,   332,    64,
     335,    19,    27,   330,    16,    28,   114,   115,    35,   117,
     118,    33,    34,   312,    41,   307,   232,    42,    16,   128,
     354,   111,   345,   258,   259,   262,   331,    46,    39,   361,
     299,    80,   301,   353,   233,   312,   308,   369,   367,   263,
      48,   309,    49,   164,   191,   121,   373,    50,   327,   107,
     108,   109,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    37,   162,   212,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   140,   141,   159,   160,   161,   239,   142,   241,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   237,    61,    88,    89,
     121,   198,   122,   246,   123,   248,    62,    63,    64,   250,
     163,    65,    66,    67,    68,   105,   106,   107,   108,   109,
     142,    21,   196,   113,   113,   113,   197,    25,    21,   234,
      69,   199,    70,    71,    51,    52,   238,   240,   243,    53,
      54,   157,   158,   159,   160,   161,   244,   252,   253,   254,
     245,   247,    72,    73,   251,   255,   256,   191,    83,   266,
      55,   295,    77,   302,   304,    75,   315,   313,   305,    84,
      85,    86,    87,   314,   317,   318,    90,   320,   113,   322,
      56,    57,   323,   325,   126,   326,   328,   333,   339,   334,
     306,   340,   337,    58,   343,    59,   344,   166,   168,   351,
     359,   356,   294,   347,   350,    23,   358,   352,   319,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   363,   370,
     365,   192,   194,   338,    91,   371,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   316,    26,   257,    44,   236,    76,
     261,   264,   357,     0,     0,     0,     0,     0,     0,   362,
       0,     0,    91,    83,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,   143,
     110,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,     0,
     140,   141,     0,     0,     0,    61,   142,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,   170,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,   269,     0,
     260,     0,     0,   270,   271,   272,   273,   274,   275,     0,
      70,    71,     1,     2,     3,     4,     5,     6,     7,     8,
       9,     0,     0,     0,   200,    10,     0,     0,     0,   276,
      72,    73,   277,     0,     0,   278,     0,   279,   280,    61,
     256,     0,     0,    75,     0,     0,   281,     0,    62,    63,
      64,     0,     0,    65,    66,    67,    68,     0,     0,    51,
      52,     0,     0,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    69,     0,    70,    71,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    55,     0,    61,     0,    10,
       0,     0,     0,     0,    72,    73,    62,    63,    64,     0,
       0,    65,    66,    67,    68,    56,    57,    75,     0,     0,
       0,     0,     0,     0,     0,    61,     0,     0,    58,     0,
      69,     0,    70,    71,    62,    63,    64,     0,     0,    65,
      66,    67,    68,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    72,    73,     0,     0,    10,     0,    69,     0,
      70,    71,    74,     0,     0,    75,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     9,     0,     0,
      72,    73,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    12,    91,   242,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   143,   265,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   143,     0,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,    -1,
      -1,    -1,    -1,   103,   104,   105,   106,   107,   108,   109,
      -1,    -1,    -1,    -1,   155,   156,   157,   158,   159,   160,
     161
};

static const yytype_int16 yycheck[] =
{
      47,   297,    16,   302,     3,    16,    43,    43,    43,   278,
      39,    61,    62,    63,    64,    65,    66,    67,    68,   318,
      43,     0,    43,    54,    56,    75,    56,    74,   309,    32,
     312,    56,    32,    56,     0,    20,    62,    63,    54,    65,
      66,    26,    27,   312,     4,    54,    74,    54,    14,    75,
     346,    54,   334,    90,    90,    90,    79,    43,    89,   355,
      92,    56,    92,   344,    92,   334,    75,   366,   364,    90,
      89,    80,    89,     3,   121,    89,   372,    90,    89,    32,
      33,    34,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    92,    90,   142,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    37,    38,    32,    33,    34,   167,    43,   169,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   165,    21,    89,    89,
      89,   126,    89,   193,    89,   195,    30,    31,    32,   199,
      90,    35,    36,    37,    38,    30,    31,    32,    33,    34,
      43,    12,     3,   213,   214,   215,    87,    18,    19,    92,
      54,    90,    56,    57,    30,    31,    90,    90,    90,    35,
      36,    30,    31,    32,    33,    34,     3,   213,   214,   215,
      90,    90,    76,    77,    91,    57,    86,   244,    49,    92,
      56,    89,   249,    89,    54,    89,    87,    92,    92,    51,
      52,    53,    54,    92,    92,     3,    58,    89,   268,    92,
      76,    77,    92,    92,    75,    92,    54,    87,    49,    88,
     277,    92,    90,    89,    79,    91,     3,    88,    89,     3,
      46,    89,   268,    90,    90,    14,   351,    91,   295,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    92,    92,
      90,   122,   123,   320,    15,    90,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   283,    19,   235,    36,   164,    47,
     244,   249,   349,    -1,    -1,    -1,    -1,    -1,    -1,   356,
      -1,    -1,    15,   164,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    15,
      91,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      37,    38,    -1,    -1,    -1,    21,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    90,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
     242,    -1,    -1,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    90,    71,    -1,    -1,    -1,    75,
      76,    77,    78,    -1,    -1,    81,    -1,    83,    84,    21,
      86,    -1,    -1,    89,    -1,    -1,    92,    -1,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    56,    -1,    21,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    76,    77,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    89,    -1,
      54,    -1,    56,    57,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    76,    77,    -1,    -1,    71,    -1,    54,    -1,
      56,    57,    86,    -1,    -1,    89,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      76,    77,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    85,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    20,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34
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
     153,    21,    30,    31,    32,    35,    36,    37,    38,    54,
      56,    57,    76,    77,    86,    89,   138,   143,   144,   146,
      56,   124,   125,   130,   153,   153,   153,   153,    89,    89,
     153,    15,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      91,    54,   144,   144,   146,   146,   144,   146,   146,   144,
     144,    89,    89,    89,   138,   139,   130,   145,   146,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      37,    38,    43,    15,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    90,    90,     3,   126,   130,   154,   130,   155,
      90,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     142,   143,   130,   151,   130,   152,     3,    87,   135,    90,
      90,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   149,   147,   148,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,    74,    92,    92,   122,   124,   136,    90,   144,
      90,   144,    16,    90,     3,    90,   144,    90,   144,   140,
     144,    91,   146,   146,   146,    57,    86,    98,    90,    90,
     153,   142,    90,    90,   139,    16,    92,    99,   150,    44,
      49,    50,    51,    52,    53,    54,    75,    78,    81,    83,
      84,    92,    96,    97,    98,   100,   105,   106,   107,   119,
     120,   127,   141,   143,   146,    89,   109,   111,    56,    92,
      56,    92,    89,    16,    54,    92,   143,    54,    75,    80,
     101,   102,   119,    92,    92,    87,    96,    92,     3,   143,
      89,    97,    92,    92,   141,    92,    92,    89,    54,    43,
      56,    79,   104,    87,    88,   101,   141,    90,   143,    49,
      92,   103,   104,    79,     3,   101,   108,    90,   112,   114,
      90,     3,    91,   104,    97,   110,    89,   143,   103,    46,
     117,    97,   143,    92,   118,    90,   115,    97,   113,   141,
      92,    90,   116,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    99,    98,   100,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   108,   107,   109,   110,   107,   111,
     112,   113,   107,   114,   115,   116,   107,   117,   118,   117,
     119,   120,   121,   121,   121,   122,   121,   123,   124,   124,
     124,   126,   125,   128,   127,   129,   129,   130,   130,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   133,   134,   133,   135,   135,   136,   137,   137,   137,
     137,   138,   138,   139,   140,   139,   141,   141,   142,   142,
     142,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   144,   144,   144,   145,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   147,   146,   148,   146,
     149,   150,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   151,   146,   146,   152,   146,
     146,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   154,   153,   153,
     155,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     3,     3,
       2,     1,     2,     4,     2,     1,     4,     0,     3,     1,
       0,     1,     3,     1,     1,     2,     2,     2,     2,     2,
       3,     3,     2,     3,     0,     7,     0,     0,     7,     0,
       0,     0,    10,     0,     0,     0,    12,     0,     0,     3,
       2,     3,     9,    11,     9,     0,    10,     0,     1,     3,
       0,     0,     3,     0,     4,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     4,     0,     2,     2,     1,     4,     3,
       3,     1,     3,     1,     0,     4,     1,     3,     0,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     4,     2,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     4,     0,     4,
       0,     0,     7,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     0,     5,     4,     0,     5,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     2,     2,     2,     2,     4,     0,     5,     4,
       0,     5
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
			cl_label_reference(label, pp->hc_fill[pp->hc_active]);
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

			cl_label_reference(func, pp->hc_fill[pp->hc_active]);
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

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->next_node->data, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1831 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 270 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack || !pp->cl_loop_stack->next_node) ZL_ERROR("continue not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->data, pp->hc_fill[pp->hc_active]);
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

			cl_label_reference((cl_label_node *) lsb->data, pp->hc_fill[pp->hc_active]);
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

			cl_label_reference((cl_label_node *) lsb->data, pp->hc_fill[pp->hc_active]);
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
			cl_label_reference(lb_label, pp->hc_fill[pp->hc_active]);
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
			cl_label_reference(lb_label, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1910 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			cl_stack_push(&pp->cl_stack, lb_skip);

			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1924 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 343 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill[pp->hc_active];
			lb_skip->flags = ZLF_DEFINED;
		}
#line 1935 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 350 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_condition->offset = pp->hc_fill[pp->hc_active];
			lb_condition->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit loop
			cl_stack_push(&pp->cl_loop_stack, lb_condition);	// condition
		}
#line 1949 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 360 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit;
			lb_exit= (cl_label_node *) pp->cl_loop_stack->next_node->data;
			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_exit, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 1961 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 368 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_condition, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->flags = ZLF_DEFINED;
		}
#line 1977 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 380 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 1994 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 394 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_condition;
			lb_condition = (cl_label_node *) pp->cl_loop_stack->data;
			lb_condition->offset = pp->hc_fill[pp->hc_active];
			lb_condition->flags = ZLF_DEFINED;
		}
#line 2005 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 401 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JNZ_POP_STK);
			cl_label_reference((cl_label_node *) cl_stack_pop(&pp->cl_stack), pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->flags = ZLF_DEFINED;
		}
#line 2021 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 413 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2042 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 430 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_loop, *lb_exit, *lb_statement;

			lb_statement = cl_label_define(&pp->labels_table, NULL);
			lb_loop = (cl_label_node *) pp->cl_loop_stack->data;
			lb_exit = (cl_label_node *) pp->cl_loop_stack->next_node->data;

			cl_stack_push(&pp->cl_stack, lb_statement);

			cl_push(pp, OP_JNZ_POP_STK);
			cl_label_reference(lb_statement, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_exit, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			lb_loop->offset = pp->hc_fill[pp->hc_active];
			lb_loop->flags = ZLF_DEFINED;
		}
#line 2067 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 451 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_condition, *lb_statement;
			lb_statement = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_stack);

			cl_push(pp, OP_POP_REG);
			cl_push(pp, REG_EAX);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_condition, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			lb_statement->offset = pp->hc_fill[pp->hc_active];
			lb_statement->flags = ZLF_DEFINED;
		}
#line 2087 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 467 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_loop;
			lb_loop = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_loop, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);

			lb_exit->offset = pp->hc_fill[pp->hc_active];
			lb_exit->flags = ZLF_DEFINED;
		}
#line 2104 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 484 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip, *lb_else;
			lb_else = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip = cl_label_define(&pp->labels_table, NULL);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			lb_else->offset = pp->hc_fill[pp->hc_active];
			lb_else->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);
		}
#line 2121 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 501 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2140 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 519 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, (yyvsp[-1]).string);
			free_str((yyvsp[-1]).string);

			if(!label)
			{
				ZL_ERROR("internal error");
			}

			cl_push(pp, (unsigned char) (yyvsp[-2]).value);
			cl_label_reference(label, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 2160 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 538 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, (yyvsp[-4]).string);
			free_str((yyvsp[-4]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!(yyvsp[-5]).uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = NULL;
			func->params = (yyvsp[-2]).uvalue;
		}
#line 2184 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 558 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, (yyvsp[-6]).string);
			free_str((yyvsp[-6]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_DEFINED;
			if(!(yyvsp[-7]).uvalue)
			{
				func->flags |= ZLF_STDCALL;
			}
			func->library = (yyvsp[-1]).string;
			func->params = (yyvsp[-4]).uvalue;
		}
#line 2208 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 578 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2230 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 596 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2268 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 630 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2308 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 674 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { pp->current_level++; }
#line 2314 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 678 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = 8;
			(yyvsp[0]).var->offset = (yyval).value;
			(yyvsp[0]).var->flags |= ZLF_PARAM;
		}
#line 2324 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 684 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = (yyvsp[0]).value + 4;
			(yyvsp[-2]).var->offset = (yyval).value;
			(yyvsp[-2]).var->flags |= ZLF_PARAM;
		}
#line 2334 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 694 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2352 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 708 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2414 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 770 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2442 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 794 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_pop(&pp->cl_stack);
		}
#line 2450 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 800 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_VOID; }
#line 2456 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 802 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2484 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 828 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = (yyvsp[0]).flags; }
#line 2490 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 830 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2527 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 865 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_VOID; }
#line 2533 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 866 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_CHAR; }
#line 2539 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 867 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_SHORT; }
#line 2545 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 868 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_INT; }
#line 2551 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 869 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_LONG; }
#line 2557 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 870 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_FLOAT; }
#line 2563 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 871 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_DOUBLE; }
#line 2569 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 872 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_SIGNED; }
#line 2575 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 873 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_UNSIGNED; }
#line 2581 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 874 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_EXTERNAL; }
#line 2587 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 881 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2593 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 882 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2599 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 887 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2662 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 946 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
				cl_var_reference(var, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
			}
			else if((yyvsp[-1]).var->level == 0) // global var
			{
				cl_push(pp, OP_PUSH_MEM);
				cl_var_reference(var, pp->hc_fill[pp->hc_active]);
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
#line 2766 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1046 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2813 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1091 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = 0x00000000; }
#line 2819 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1092 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = 0x01000000 + (yyvsp[0]).flags; }
#line 2825 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1097 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2843 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1114 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2878 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1145 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2901 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1164 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2919 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1178 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 2927 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1185 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2983 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1237 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 2991 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1244 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			//if(((zl_names_map *) pp->cl_stack->data)->flags & ZLF_AUTOARRAY)
			//{
				//((zl_names_map *) pp->cl_stack->data)->elements->size += var_size;
			//}
		}
#line 3002 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1251 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3034 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1279 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).size = (yyvsp[-3]).size + (yyvsp[0]).size;
		}
#line 3042 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1311 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX); }
#line 3048 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1315 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).size = 0; }
#line 3054 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1316 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).size = 4; }
#line 3060 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1317 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).size = 4 + (yyvsp[0]).size; }
#line 3066 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1327 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3072 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1329 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3109 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1362 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3142 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1391 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3175 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1420 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3208 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1449 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3241 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1478 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3274 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1507 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3307 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1536 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3340 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1565 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3373 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1594 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3406 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1623 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3439 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1655 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
				cl_var_reference(var, pp->hc_fill[pp->hc_active]);
				cl_push_dw(pp, 0);
			}
			else if((yyval).var->level == 0) // global var
			{
				cl_push(pp, OP_PUSH_MEM);
				cl_var_reference(var, pp->hc_fill[pp->hc_active]);
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
#line 3497 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1709 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3514 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1722 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3596 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1807 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3624 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1835 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).uvalue); }
#line 3630 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1838 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_PUSH_OFFSET);
			cl_const_define(&pp->data_table, (yyvsp[0]).string, (yyvsp[0]).size, pp->hc_fill[pp->hc_active]); // добавляем ссылку на эти данные
			free_str((yyvsp[0]).string);
			cl_push_dw(pp, 0);						// ставим заглушку
		}
#line 3641 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1844 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 3647 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1845 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_ADD_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3653 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1846 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SUB_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3659 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1847 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_MUL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3665 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1848 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_DIV_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3671 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1849 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_OR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3677 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1850 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_AND_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3683 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1851 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_MOD_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3689 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1852 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_XOR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3695 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1853 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SHL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3701 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1854 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SHR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3707 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1856 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3727 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1872 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3747 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1888 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3767 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1904 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3787 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1919 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_E_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3793 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1920 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_NE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3799 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1922 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			//lb_skip->offset = pp->hc_fill;
			//lb_skip->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);

			cl_push(pp, OP_JNZ_STK);
			cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
#line 3816 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1935 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill[pp->hc_active];
			lb_skip->flags = ZLF_DEFINED;
		}
#line 3827 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1942 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			//lb_skip->offset = pp->hc_fill;
			//lb_skip->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);

			cl_push(pp, OP_JZ_STK);
			cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
#line 3844 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1955 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill[pp->hc_active];
			lb_skip->flags = ZLF_DEFINED;
		}
#line 3855 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1962 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			cl_stack_push(&pp->cl_stack, lb_skip);

			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
		}
#line 3869 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1972 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip, *lb_else;
			lb_else = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip = cl_label_define(&pp->labels_table, NULL);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_skip, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			lb_else->offset = pp->hc_fill[pp->hc_active];
			lb_else->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);
		}
#line 3886 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1985 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill[pp->hc_active];
			lb_skip->flags = ZLF_DEFINED;
		}
#line 3897 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1991 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); cl_push(pp, OP_BNOT_STK); }
#line 3903 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1992 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); cl_push(pp, OP_LNOT_STK); }
#line 3909 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1993 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3915 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1995 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			(yyval).flags &= ~ZLF_UNSIGNED;
			(yyval).flags |= ZLF_SIGNED;
			cl_push(pp, OP_MINUS_STK);
		}
#line 3926 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 2001 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 3932 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 2018 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3980 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 2062 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4028 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 2106 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4076 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 2150 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4124 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 2194 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
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
				cl_push(pp, OP_RCALL_FAR); // rcall far
			}
			cl_label_reference(func, pp->hc_fill[pp->hc_active]);
			cl_push_dw(pp, 0);
			if((yyvsp[-1]).size)
			{
				cl_push(pp, OP_SUB_REG_IMM); cl_push(pp, REG_ESP); cl_push_dw(pp, (yyvsp[-1]).size);
			}
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
#line 4169 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 2235 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4205 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 2267 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4235 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 2293 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4243 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 2297 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).var->size[(yyvsp[-1]).rows]);
		}
#line 4254 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 2304 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).flags);
		}
#line 4263 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 2309 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4271 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 2313 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).var->flags);
		}
#line 4282 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 2321 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			(yyval).flags = (yyvsp[-2]).flags; 
			//printf("(%s) %s\n", ($2.flags&ZLF_SIGNED)?"signed":(($2.flags&ZLF_UNSIGNED)?"unsigned":""), ($4.flags&ZLF_SIGNED)?"signed":(($4.flags&ZLF_UNSIGNED)?"unsigned":""));
		}
#line 4292 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 2330 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nop */ }
#line 4298 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 2333 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nop */ }
#line 4304 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 2334 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value + (yyvsp[0]).value; }
#line 4310 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 2335 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value - (yyvsp[0]).value; }
#line 4316 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 2336 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value * (yyvsp[0]).value; }
#line 4322 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 2337 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value / (yyvsp[0]).value; }
#line 4328 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 2338 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value | (yyvsp[0]).value; }
#line 4334 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 2339 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value & (yyvsp[0]).value; }
#line 4340 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 2340 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value % (yyvsp[0]).value; }
#line 4346 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 2341 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value ^ (yyvsp[0]).value; }
#line 4352 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 2342 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value << (yyvsp[0]).value; }
#line 4358 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 2343 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value >> (yyvsp[0]).value; }
#line 4364 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 2344 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value < (yyvsp[0]).value; }
#line 4370 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 2345 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value > (yyvsp[0]).value; }
#line 4376 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 2346 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value >= (yyvsp[0]).value; }
#line 4382 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 2347 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value <= (yyvsp[0]).value; }
#line 4388 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 2348 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value == (yyvsp[0]).value; }
#line 4394 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 2349 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value != (yyvsp[0]).value; }
#line 4400 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 2350 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value || (yyvsp[0]).value; }
#line 4406 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 2351 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value && (yyvsp[0]).value; }
#line 4412 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 2352 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-4]).value ? (yyvsp[-2]).value : (yyvsp[0]).value; }
#line 4418 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 2353 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = ~(yyvsp[0]).value; }
#line 4424 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 2354 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = !(yyvsp[0]).value; }
#line 4430 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 2355 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 4436 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 2356 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = -(yyvsp[0]).value; }
#line 4442 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 2358 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4471 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 2383 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4479 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 2387 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).var->size[(yyvsp[-1]).rows];
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
#line 4488 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 2392 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).flags;
		}
#line 4496 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 2396 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill[pp->hc_active]);
		}
#line 4504 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 2400 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).uvalue = (yyvsp[-1]).var->flags;
			pp->hc_fill[pp->hc_active] = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
#line 4513 "zl_parser.cpp" /* yacc.c:1646  */
    break;


#line 4517 "zl_parser.cpp" /* yacc.c:1646  */
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
#line 2414 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1906  */










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
	cl_label_reference(func, pp.hc_fill[0]);
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

