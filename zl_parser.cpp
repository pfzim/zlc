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

#define ZL_ERROR(message) { yyerror(scanner, pp, message); YYABORT; }

void yyerror(void *scanner, cl_parser_params *pp, const char *err);
int yylex(zlval *yylval, void *yyscanner);
     
int yylex_init(void  **ptr_yy_globals);
int yylex_destroy(void *yyscanner);
void yyset_extra(cl_parser_params *user_defined, void *yyscanner);


#line 93 "zl_parser.cpp" /* yacc.c:339  */

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


#line 129 "zl_parser.cpp" /* yacc.c:355  */

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
    T_ELSE = 282,
    T_PTR_OP = 283,
    T_WHILE = 284,
    T_DO = 285,
    T_BREAK = 286,
    T_CONTINUE = 287,
    T_FOR = 288,
    T_LABEL = 289,
    T_CONSTANT_DOUBLE = 290,
    T_CONSTANT_LONG = 291,
    T_CONSTANT_STRING = 292,
    T_VOID = 293,
    T_CHAR = 294,
    T_SHORT = 295,
    T_INT = 296,
    T_LONG = 297,
    T_FLOAT = 298,
    T_DOUBLE = 299,
    T_SIGNED = 300,
    T_UNSIGNED = 301,
    T_STRUCT = 302,
    T_STRUCT_DEFINED = 303,
    T_ELLIPSIS = 304,
    T_STRING = 305,
    T_EXTERN = 306,
    T_VAR = 307,
    T_IMPORT = 308,
    T_FROM = 309,
    T_GOTO = 310,
    T_SIZEOF = 311,
    T_RETURN = 312,
    T_REGISTER = 313,
    T_OPERATOR = 314,
    T_ASM = 315,
    T_PARAM_SEPARATOR = 316,
    T_NOP = 317,
    T_DBG_PRINT_REGS = 318,
    T_FUNCTION = 319
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

#line 216 "zl_parser.cpp" /* yacc.c:358  */

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
#define YYLAST   827

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      86,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,     2,     2,    34,    21,     2,
      87,    88,    32,    30,     3,    31,    46,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,    90,
      24,     4,    26,    15,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    89,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    19,    85,    36,     2,     2,     2,
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
      42,    44,    45,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   106,   110,   111,   115,   116,   119,   120,
     121,   122,   123,   124,   125,   126,   131,   130,   143,   147,
     148,   149,   153,   169,   170,   171,   172,   194,   215,   216,
     217,   221,   222,   223,   248,   249,   253,   254,   255,   263,
     271,   286,   301,   311,   326,   325,   344,   354,   343,   374,
     388,   395,   373,   407,   424,   445,   406,   475,   478,   477,
     494,   512,   531,   551,   589,   593,   588,   660,   666,   672,
     677,   676,   751,   753,   752,   773,   774,   810,   811,   815,
     875,   874,   991,   992,   996,  1004,  1016,  1047,  1066,  1080,
    1087,  1119,  1126,  1134,  1133,  1192,  1193,  1194,  1195,  1196,
    1197,  1198,  1199,  1200,  1201,  1202,  1208,  1209,  1213,  1214,
    1215,  1219,  1220,  1247,  1276,  1305,  1334,  1363,  1392,  1421,
    1450,  1479,  1508,  1540,  1594,  1607,  1698,  1700,  1707,  1708,
    1709,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,
    1719,  1720,  1721,  1722,  1723,  1725,  1724,  1745,  1744,  1765,
    1775,  1764,  1794,  1795,  1796,  1797,  1804,  1820,  1864,  1908,
    1952,  1996,  2035,  2067,  2094,  2093,  2110,  2113,  2114,  2115,
    2116,  2117,  2118,  2119,  2120,  2121,  2122,  2123,  2124,  2125,
    2126,  2127,  2128,  2129,  2130,  2131,  2132,  2133,  2134,  2135,
    2136,  2137,  2163,  2162
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
  "T_PLUS", "T_MINUS", "T_POINTER", "'['", "T_IF", "T_ELSE", "'.'",
  "T_PTR_OP", "T_WHILE", "T_DO", "T_BREAK", "T_CONTINUE", "T_FOR",
  "T_LABEL", "T_CONSTANT_DOUBLE", "T_CONSTANT_LONG", "T_CONSTANT_STRING",
  "T_VOID", "T_CHAR", "T_SHORT", "T_INT", "T_LONG", "T_FLOAT", "T_DOUBLE",
  "T_SIGNED", "T_UNSIGNED", "T_STRUCT", "T_STRUCT_DEFINED", "T_ELLIPSIS",
  "T_STRING", "T_EXTERN", "T_VAR", "T_IMPORT", "T_FROM", "T_GOTO",
  "T_SIZEOF", "T_RETURN", "T_REGISTER", "T_OPERATOR", "T_ASM",
  "T_PARAM_SEPARATOR", "T_NOP", "T_DBG_PRINT_REGS", "T_FUNCTION", "'{'",
  "'}'", "'\\n'", "'('", "')'", "']'", "';'", "$accept", "program_list",
  "program", "statement_list", "statement", "compound_statement", "$@1",
  "assembler_statement", "assembler_command_list", "assembler_command",
  "assembler_argument_list", "operator_parameter", "expression_statement",
  "buildin_statement", "selection_statement", "$@2", "$@3", "$@4", "$@5",
  "$@6", "$@7", "$@8", "$@9", "$@10", "else_statement", "$@11",
  "labeled_statement", "jump_statement", "declaration_function", "$@12",
  "$@13", "function_args", "function_arg", "$@14", "declaration_statement",
  "$@15", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "$@16", "pointer", "declarator", "direct_declarator",
  "initializer", "initializer_list", "$@17", "type_specifier",
  "expression", "argument_expression_list", "assignment_expression",
  "unary_expression", "expr", "$@18", "$@19", "$@20", "$@21", "$@22",
  "const_expr", "$@23", YY_NULLPTR
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
     278,   279,   280,    91,   281,   282,    46,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   123,   125,    10,    40,    41,    93,
      59
};
# endif

#define YYPACT_NINF -274

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-274)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     446,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,   -17,   -31,    40,   446,  -274,  -274,   -49,   665,
      -8,   -39,  -274,  -274,  -274,   -25,  -274,   -36,  -274,    20,
    -274,   -25,    -1,  -274,   -28,    60,    22,    12,   665,  -274,
     -19,   -25,  -274,    22,  -274,   102,   -11,    38,    73,  -274,
    -274,  -274,   366,   426,   426,   426,   426,  -274,    43,   426,
    -274,   203,   -41,  -274,   665,   -25,     4,   399,   399,     4,
     399,   399,     4,     4,    44,  -274,  -274,    48,   366,   399,
    -274,  -274,   459,   555,  -274,  -274,  -274,  -274,   665,   242,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,  -274,
      71,  -274,    55,  -274,  -274,  -274,    97,    91,  -274,  -274,
      97,  -274,  -274,    97,    97,   399,   665,   148,    70,   276,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,  -274,  -274,   399,  -274,  -274,  -274,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,    68,     4,  -274,   515,   608,   641,   672,
     716,   743,   756,   756,   222,   222,   222,   222,   112,   112,
     115,   115,  -274,  -274,  -274,    76,  -274,  -274,    72,   155,
      81,     4,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,    87,   399,   399,   399,
     687,   730,   769,   782,   782,   793,   793,   793,   793,   154,
     154,   141,   141,  -274,  -274,  -274,  -274,   -35,   426,  -274,
     291,  -274,   399,  -274,   -33,   366,  -274,   535,   625,   657,
    -274,   573,    74,  -274,  -274,   -46,   -32,    92,   -13,   125,
     353,    -6,   100,   103,  -274,    96,   291,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,   104,   179,  -274,  -274,  -274,
    -274,   399,   105,   291,   106,  -274,   107,  -274,   399,  -274,
     149,  -274,   151,   -12,   142,   -16,   153,   156,    -6,  -274,
    -274,  -274,  -274,  -274,   399,   399,   189,   399,   195,  -274,
    -274,   188,  -274,  -274,   -16,  -274,   167,  -274,  -274,   277,
    -274,    -6,  -274,  -274,   591,  -274,   191,  -274,  -274,   193,
     280,   196,   -16,  -274,   291,  -274,   197,   399,  -274,   -16,
    -274,  -274,   241,   291,   399,   198,  -274,  -274,  -274,  -274,
     199,  -274,   291,  -274,   399,  -274,   200,   201,  -274,  -274,
     291,  -274
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     3,     5,     4,    73,    75,
       0,     0,     1,     2,    72,     0,    76,     0,    64,    82,
      86,     0,     0,    77,     0,    79,    85,     0,    69,    83,
       0,     0,    74,    84,    80,     0,     0,     0,    67,    70,
      89,    78,     0,     0,     0,     0,     0,   166,     0,     0,
      88,     0,     0,    65,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,   126,   127,     0,     0,     0,
      81,    90,   162,   111,   189,   190,   188,   187,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    62,     0,    68,    71,   123,   156,   162,   154,   155,
     124,   153,   152,   159,   160,   108,   164,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,   158,     0,   149,   145,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,     0,   184,   185,   172,
     175,   173,   182,   183,   179,   181,   178,   180,   176,   177,
     168,   169,   170,   171,   174,     0,    16,    66,     0,   109,
       0,     0,    93,    91,   128,   112,   122,   121,   118,   119,
     113,   117,   116,   115,   114,   120,     0,     0,     0,     0,
     133,   136,   134,   143,   144,   140,   142,   139,   141,   137,
     138,   129,   130,   131,   132,   135,   191,     0,     0,    63,
       7,   161,   108,   163,     0,     0,   125,     0,   146,   148,
     193,   186,     0,    46,    49,     0,     0,     0,   123,     0,
       0,    27,     0,     0,    34,     0,     7,     8,    15,     9,
      10,    11,    12,    13,    14,     0,   106,   110,   165,    94,
     150,     0,     0,     0,     0,    38,     0,    39,     0,    60,
       0,    42,     0,     0,     0,    25,     0,    21,    27,    36,
      37,    17,     6,    35,     0,     0,     0,     0,     0,    40,
      41,     0,    61,    43,    30,    22,     0,    33,    31,    24,
      18,    27,    20,   107,   151,    44,     0,    50,    53,     0,
      29,     0,     0,    19,     0,    47,     0,     0,    26,    30,
      32,    23,    57,     0,     0,     0,    28,    58,    45,    48,
       0,    54,     0,    51,     0,    59,     0,     0,    52,    55,
       0,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -274,   296,  -274,    57,  -183,   202,  -274,  -274,  -251,  -274,
     -14,  -266,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,  -245,  -274,  -274,  -274,
    -274,   252,  -274,  -274,    35,  -274,   -18,  -274,   278,  -274,
     288,    -2,   284,   268,    89,  -274,  -274,  -273,    93,   -52,
     -55,   -37,  -274,  -274,  -274,  -274,  -274,   109,  -274
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,   255,   256,   257,   230,   258,   286,   287,
     319,   320,   259,   260,   261,   324,   272,   333,   273,   326,
     346,   327,   344,   350,   338,   342,   262,   263,    16,    38,
     112,    47,    48,    65,   264,    25,    18,    32,    33,    52,
      34,    35,    36,   127,   128,   235,    19,   265,   188,   266,
      82,    83,   208,   209,   207,   295,   191,    61,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    26,    41,   279,   279,   301,   288,    29,   143,   274,
     143,   116,   117,   117,   120,   117,   117,   123,   124,   309,
      49,   313,    21,   276,   117,    30,    81,   306,    30,    40,
     118,   119,   110,   121,   122,    17,    69,   312,    20,   307,
      22,    24,   129,   288,   275,    27,    49,   283,    28,   111,
      17,    37,    29,   240,   335,   268,   331,   115,   277,    31,
     323,   308,    31,   114,    44,    45,   288,    46,   284,    50,
     163,   347,   285,   189,   125,   304,    64,    62,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,    42,
     298,   206,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   190,   227,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,    63,   185,   141,   142,
      88,   125,    53,    54,   143,   126,   234,    55,    56,   186,
     143,   332,   104,   105,   106,   107,   108,   106,   107,   108,
     339,   192,   117,   117,   117,   193,   226,    57,   232,   345,
     231,   271,    84,    85,    86,    87,   229,   351,    89,   233,
     237,   238,   239,   160,   161,   162,   236,    58,   280,   278,
     189,   291,   294,    81,   158,   159,   160,   161,   162,    59,
     289,    60,   297,   290,   293,   305,   299,   300,   282,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,    90,   296,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   310,   302,
     117,   303,   311,   317,   321,   316,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,    90,   314,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   315,   318,   325,
     322,   328,   340,   329,   334,   330,   337,   343,   341,   349,
     348,   144,   109,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    23,    66,   292,   187,   336,   113,    39,    43,    51,
      80,    67,    68,    69,   269,   267,    70,    71,    72,    73,
     165,     0,     0,     0,     0,   242,     0,   241,     0,   243,
     244,   245,   246,   247,   248,     0,    75,    76,     1,     2,
       3,     4,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    11,     0,   194,   249,    77,   250,     0,     0,
     251,     0,   252,   253,    66,   186,     0,     0,    79,     0,
       0,   254,     0,    67,    68,    69,     0,    66,    70,    71,
      72,    73,     0,     0,     0,     0,    67,    68,    69,     0,
       0,    70,    71,    72,    73,     0,    74,     0,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      66,    75,    76,     0,     0,     0,     0,     0,    77,    67,
      68,    69,     0,     0,    70,    71,    72,    73,     0,     0,
      79,    77,     0,   281,     0,     0,     0,     0,     0,     0,
      78,     0,    74,    79,    75,    76,    53,    54,     0,     0,
       0,    55,    56,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    77,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,     0,
       0,    58,   143,     1,     2,     3,     4,     5,     6,     7,
       8,     9,     0,    59,     0,     0,    10,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      90,   228,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     144,   270,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     144,     0,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     1,     2,     3,     4,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,    11,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,    -1,
      -1,   156,   157,   158,   159,   160,   161,   162
};

static const yytype_int16 yycheck[] =
{
      52,    19,     3,    16,    16,   278,   251,    32,    43,    55,
      43,    66,    67,    68,    69,    70,    71,    72,    73,   285,
      38,   294,    53,    55,    79,    53,    78,    43,    53,    31,
      67,    68,    73,    70,    71,     0,    32,   288,    55,    55,
       0,    90,    79,   288,    90,    53,    64,    53,    87,    90,
      15,    87,    32,    88,   327,    88,   322,    53,    90,    87,
     311,    77,    87,    65,     4,    43,   311,    55,    74,    88,
      88,   344,    78,   125,    87,    87,     3,    88,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,    90,
     273,   143,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   126,   164,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    88,    56,    37,    38,
      87,    87,    30,    31,    43,    87,   191,    35,    36,    84,
      43,   324,    30,    31,    32,    33,    34,    32,    33,    34,
     333,     3,   207,   208,   209,    85,    88,    55,     3,   342,
      88,    87,    53,    54,    55,    56,    90,   350,    59,    88,
     207,   208,   209,    32,    33,    34,    89,    75,    53,    87,
     232,    85,     3,   235,    30,    31,    32,    33,    34,    87,
      90,    89,    87,    90,    90,    53,    90,    90,   250,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    15,   271,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    85,    90,
     295,    90,    86,    48,    77,   297,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   295,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    88,    90,    88,
       3,    88,   334,     3,    87,    89,    45,    88,    90,    88,
      90,    15,    89,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    15,    21,   256,   112,   329,    64,    29,    34,    41,
      52,    30,    31,    32,   235,   232,    35,    36,    37,    38,
      88,    -1,    -1,    -1,    -1,    44,    -1,   228,    -1,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    -1,    88,    74,    75,    76,    -1,    -1,
      79,    -1,    81,    82,    21,    84,    -1,    -1,    87,    -1,
      -1,    90,    -1,    30,    31,    32,    -1,    21,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    -1,    53,    -1,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      21,    55,    56,    -1,    -1,    -1,    -1,    -1,    75,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      87,    75,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    53,    87,    55,    56,    30,    31,    -1,    -1,
      -1,    35,    36,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    75,    43,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    87,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      70,    71,    72,    83,    92,    93,   119,   125,   127,   137,
      55,    53,     0,    92,    90,   126,   127,    53,    87,    32,
      53,    87,   128,   129,   131,   132,   133,    87,   120,   131,
     132,     3,    90,   133,     4,    43,    55,   122,   123,   127,
      88,   129,   130,    30,    31,    35,    36,    55,    75,    87,
      89,   148,    88,    88,     3,   124,    21,    30,    31,    32,
      35,    36,    37,    38,    53,    55,    56,    75,    84,    87,
     134,   140,   141,   142,   148,   148,   148,   148,    87,   148,
      15,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    89,
      73,    90,   121,   122,   132,    53,   141,   141,   142,   142,
     141,   142,   142,   141,   141,    87,    87,   134,   135,   142,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    37,    38,    43,    15,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   127,   149,    88,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,    56,    84,    96,   139,   140,
     127,   147,     3,    85,    88,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   145,   143,   144,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,    88,   141,    16,    90,
      97,    88,     3,    88,   141,   136,    89,   142,   142,   142,
      88,   148,    44,    48,    49,    50,    51,    52,    53,    74,
      76,    79,    81,    82,    90,    94,    95,    96,    98,   103,
     104,   105,   117,   118,   125,   138,   140,   139,    88,   135,
      16,    87,   107,   109,    55,    90,    55,    90,    87,    16,
      53,    90,   140,    53,    74,    78,    99,   100,   117,    90,
      90,    85,    94,    90,     3,   146,   140,    87,    95,    90,
      90,   138,    90,    90,    87,    53,    43,    55,    77,   102,
      85,    86,    99,   138,   142,    88,   140,    48,    90,   101,
     102,    77,     3,    99,   106,    88,   110,   112,    88,     3,
      89,   102,    95,   108,    87,   138,   101,    45,   115,    95,
     140,    90,   116,    88,   113,    95,   111,   138,    90,    88,
     114,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    97,    96,    98,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   106,   105,   107,   108,   105,   109,
     110,   111,   105,   112,   113,   114,   105,   115,   116,   115,
     117,   118,   119,   119,   120,   121,   119,   122,   122,   122,
     124,   123,   125,   126,   125,   127,   127,   128,   128,   129,
     130,   129,   131,   131,   132,   132,   133,   133,   133,   133,
     134,   134,   135,   136,   135,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   138,   138,   139,   139,
     139,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   141,   141,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   143,   142,   144,   142,   145,
     146,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   147,   142,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   148
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
       2,     3,     7,     9,     0,     0,     8,     1,     3,     0,
       0,     3,     2,     0,     4,     1,     2,     1,     3,     1,
       0,     4,     1,     2,     2,     1,     1,     4,     3,     3,
       1,     3,     1,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     4,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     0,     4,     0,     4,     0,
       0,     7,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     1,     4,     0,     5,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     2,     2,     2,
       2,     4,     0,     5
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
#line 131 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->current_level++;
		}
#line 1668 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 135 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_var_free_level(&pp->vars_table, pp->current_level);
			pp->current_level--;
		}
#line 1677 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 154 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, (yyvsp[0]).string);
			free_str((yyvsp[0]).string);

			if(!label)
			{
				ZL_ERROR("internal error");
			}

			cl_push(pp, (unsigned char) (yyvsp[-1]).value);
			cl_label_reference(label, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1697 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 169 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[-3]).value, &(yyvsp[-2]), &(yyvsp[0])); }
#line 1703 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 170 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[-1]).value, &(yyvsp[0]), NULL); }
#line 1709 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push_op(pp, (unsigned char) (yyvsp[0]).value, NULL, NULL); }
#line 1715 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 173 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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

			cl_label_reference(func, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1741 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 215 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).value); }
#line 1747 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 216 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).value); }
#line 1753 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 221 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval).flags = ARG_REG; }
#line 1759 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 222 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); (yyval).flags = ARG_PREG; }
#line 1765 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 223 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); (yyval).flags = ARG_IMM; }
#line 1771 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 249 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX); }
#line 1777 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 253 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_NOP); }
#line 1783 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 254 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_DBG_PRINT); }
#line 1789 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 256 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack) ZL_ERROR("break not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->next_node->data, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1801 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 264 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_JMP);
			if(!pp->cl_loop_stack || !pp->cl_loop_stack->next_node) ZL_ERROR("continue not in loop");

			cl_label_reference((cl_label_node *) pp->cl_loop_stack->data, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1813 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 272 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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

			cl_label_reference((cl_label_node *) lsb->data, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1832 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 287 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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

			cl_label_reference((cl_label_node *) lsb->data, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1851 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 302 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_label;

			lb_label = cl_label_find(pp->labels_table, "@exit_func");

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_label, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1865 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 312 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_label;

			lb_label = cl_label_find(pp->labels_table, "@exit_func");

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_JMP);
			cl_label_reference(lb_label, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1880 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 326 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			cl_stack_push(&pp->cl_stack, lb_skip);

			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_skip, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1894 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 337 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill;
			lb_skip->flags = ZLF_DEFINED;
		}
#line 1905 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 344 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_condition->offset = pp->hc_fill;
			lb_condition->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit loop
			cl_stack_push(&pp->cl_loop_stack, lb_condition);	// condition
		}
#line 1919 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 354 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit;
			lb_exit= (cl_label_node *) pp->cl_loop_stack->next_node->data;
			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_exit, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 1931 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 362 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_condition, pp->hc_fill);
			cl_push_dw(pp, 0);
			lb_exit->offset = pp->hc_fill;
			lb_exit->flags = ZLF_DEFINED;
		}
#line 1947 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 374 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition, *lb_start;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_start = cl_label_define(&pp->labels_table, NULL);
			lb_start->offset = pp->hc_fill;
			lb_start->flags = ZLF_DEFINED;

			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit loop
			cl_stack_push(&pp->cl_loop_stack, lb_condition);	// condition
			cl_stack_push(&pp->cl_stack, lb_start);				// start loop
		}
#line 1964 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 388 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_condition;
			lb_condition = (cl_label_node *) pp->cl_loop_stack->data;
			lb_condition->offset = pp->hc_fill;
			lb_condition->flags = ZLF_DEFINED;
		}
#line 1975 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 395 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_condition;
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JNZ_POP_STK);
			cl_label_reference((cl_label_node *) cl_stack_pop(&pp->cl_stack), pp->hc_fill);
			cl_push_dw(pp, 0);
			lb_exit->offset = pp->hc_fill;
			lb_exit->flags = ZLF_DEFINED;
		}
#line 1991 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 407 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_loop, *lb_condition;
			lb_exit = cl_label_define(&pp->labels_table, NULL);
			lb_loop = cl_label_define(&pp->labels_table, NULL);

			cl_stack_push(&pp->cl_loop_stack, lb_exit);			// exit
			cl_stack_push(&pp->cl_loop_stack, lb_loop);			// loop

			cl_push(pp, OP_POP_REG);
			cl_push(pp, REG_EAX);

			lb_condition = cl_label_define(&pp->labels_table, NULL);
			lb_condition->offset = pp->hc_fill;
			lb_condition->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_condition);
		}
#line 2012 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 424 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_loop, *lb_exit, *lb_statement;

			lb_statement = cl_label_define(&pp->labels_table, NULL);
			lb_loop = (cl_label_node *) pp->cl_loop_stack->data;
			lb_exit = (cl_label_node *) pp->cl_loop_stack->next_node->data;

			cl_stack_push(&pp->cl_stack, lb_statement);

			cl_push(pp, OP_JNZ_POP_STK);
			cl_label_reference(lb_statement, pp->hc_fill);
			cl_push_dw(pp, 0);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_exit, pp->hc_fill);
			cl_push_dw(pp, 0);

			lb_loop->offset = pp->hc_fill;
			lb_loop->flags = ZLF_DEFINED;
		}
#line 2037 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 445 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_condition, *lb_statement;
			lb_statement = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_condition = (cl_label_node *) cl_stack_pop(&pp->cl_stack);

			cl_push(pp, OP_POP_REG);
			cl_push(pp, REG_EAX);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_condition, pp->hc_fill);
			cl_push_dw(pp, 0);

			lb_statement->offset = pp->hc_fill;
			lb_statement->flags = ZLF_DEFINED;
		}
#line 2057 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 461 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_exit, *lb_loop;
			lb_loop = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);
			lb_exit = (cl_label_node *) cl_stack_pop(&pp->cl_loop_stack);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_loop, pp->hc_fill);
			cl_push_dw(pp, 0);

			lb_exit->offset = pp->hc_fill;
			lb_exit->flags = ZLF_DEFINED;
		}
#line 2074 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 478 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip, *lb_else;
			lb_else = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip = cl_label_define(&pp->labels_table, NULL);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_skip, pp->hc_fill);
			cl_push_dw(pp, 0);
			lb_else->offset = pp->hc_fill;
			lb_else->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);
		}
#line 2091 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 495 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, (yyvsp[-1]).string);
			free_str((yyvsp[-1]).string);

			if(label->flags & ZLF_DEFINED)
			{
				ZL_ERROR("label redefined");
			}

			label->offset = pp->hc_fill;
			label->flags = ZLF_DEFINED;
		}
#line 2110 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 513 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;

			label = cl_label_define(&pp->labels_table, (yyvsp[-1]).string);
			free_str((yyvsp[-1]).string);

			if(!label)
			{
				ZL_ERROR("internal error");
			}

			cl_push(pp, (unsigned char) (yyvsp[-2]).value);
			cl_label_reference(label, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 2130 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 532 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2154 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 552 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2178 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 589 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->current_level++;
		}
#line 2186 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 593 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			cl_label_define(&pp->labels_table, "@exit_func");

			func = cl_label_define(&pp->funcs_table, (yyvsp[-4]).string);
			free_str((yyvsp[-4]).string);

			if(func->flags & ZLF_DEFINED)
			{
				ZL_ERROR("function redefined");
			}

			func->flags = ZLF_FUNC_INTERNAL | ZLF_DEFINED;
			func->offset = pp->hc_fill;
			//func->params_size = $4.size;

			pp->current_level--;
			pp->stack_size = 4;

			//cl_push(pp, OP_DBG_PRINT);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EBP);
			cl_push(pp, OP_MOV_REG_REG); cl_push(pp, REG_EBP); cl_push(pp, REG_ESP);
			cl_push(pp, OP_ADD_REG_IMM); cl_push(pp, REG_ESP);
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill);
			cl_push_dw(pp, 0);
			//cl_push(pp, OP_NOP);
		}
#line 2219 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 622 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *label;
			unsigned long fix_point;

			label = cl_label_find(pp->labels_table, "@exit_func");

			label->offset = pp->hc_fill;
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

			pp->hard_code[fix_point] = (char)((unsigned long) (pp->stack_size & 0xFF));
			pp->hard_code[fix_point+1] = (char)((unsigned long) ((pp->stack_size >> 8) & 0xFF));
			pp->hard_code[fix_point+2] = (char)((unsigned long) ((pp->stack_size >> 16) & 0xFF));
			pp->hard_code[fix_point+3] = (char)((unsigned long) (pp->stack_size >> 24));

			if(cl_label_fix(pp->labels_table, pp->hard_code))
			{
				ZL_ERROR("error, jump to undefined label");
			}

			cl_label_free(&pp->labels_table);
		}
#line 2259 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 661 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = 8;
			(yyvsp[0]).var->offset = (yyval).value;
			(yyvsp[0]).var->flags |= ZLF_PARAM;
		}
#line 2269 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 667 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = (yyvsp[0]).value + 4;
			(yyvsp[-2]).var->offset = (yyval).value;
			(yyvsp[-2]).var->flags |= ZLF_PARAM;
		}
#line 2279 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 677 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2297 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 691 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2359 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 751 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2365 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 753 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2383 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 767 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_pop(&pp->cl_stack);
		}
#line 2391 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 773 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = (yyvsp[0]).flags; }
#line 2397 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 775 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2434 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 810 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2440 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 811 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 2446 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 816 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2509 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 875 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_var_node *var;

			if((yyvsp[-1]).var->flags & ZLF_ARRAY)
			{
				unsigned long level;

				level = (yyvsp[-1]).var->rows;

				(yyvsp[-1]).var->size[level] *= (yyvsp[-1]).var->size[0];
				level--;

				while(level)
				{
					(yyvsp[-1]).var->size[level] *= (yyvsp[-1]).var->size[level+1];
					level--;
				}

				//$1.var->size[0] = $1.var->size[1];
			}

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
				cl_var_reference(var, pp->hc_fill);
				cl_push_dw(pp, 0);
			}
			else if((yyvsp[-1]).var->level == 0) // global var
			{
				cl_push(pp, OP_PUSH_MEM);
				cl_var_reference(var, pp->hc_fill);
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
#line 2584 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 946 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2631 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 991 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = 0x01000000; }
#line 2637 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 992 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = 0x01000000 + (yyvsp[0]).flags; }
#line 2643 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 997 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			//memcpy(&$$, &$2, sizeof($$));

			(yyval).var->flags += (yyvsp[-1]).flags;
			(yyval).var->size[0] = 4;
		}
#line 2655 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1005 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);

			if((yyval).var->flags & ZLF_VOID)
			{
				ZL_ERROR("illegal use of type 'void'");
			}
		}
#line 2668 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1017 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2703 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1048 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2726 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1067 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 2744 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1081 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 2752 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1088 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_ECX);

			(yyval).size = 4;

			if(!(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_POINTER))
			{
				switch(((cl_var_node *) pp->cl_stack->data)->flags & ZLF_TYPE)
				{
					case ZLF_CHAR:
						(yyval).size = 1;
						cl_push(pp, OP_SIZE_OVERRIDE_1);
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
#line 2788 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1120 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 2796 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1127 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			//if(((zl_names_map *) pp->cl_stack->data)->flags & ZLF_AUTOARRAY)
			//{
				//((zl_names_map *) pp->cl_stack->data)->elements->size += var_size;
			//}
		}
#line 2807 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1134 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			if(~((cl_var_node *) pp->cl_stack->data)->flags & ZLF_ARRAY)
			{
				ZL_ERROR("too many initializers");
			}

			// check array for overflow here or error!

			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);

			if((yyvsp[-1]).size > 1)
			{
				cl_push(pp, OP_ADD_REG_IMM); cl_push(pp, REG_EAX); cl_push_dw(pp, (yyvsp[-1]).size);
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
#line 2838 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1161 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).size = (yyvsp[-3]).size + (yyvsp[0]).size;
		}
#line 2846 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1192 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_VOID; }
#line 2852 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1193 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_CHAR; }
#line 2858 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1194 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_SHORT; }
#line 2864 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1195 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_INT; }
#line 2870 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1196 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_LONG; }
#line 2876 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1197 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_FLOAT; }
#line 2882 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1198 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_DOUBLE; }
#line 2888 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1199 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_SIGNED; }
#line 2894 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1200 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_UNSIGNED; }
#line 2900 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1201 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_EXTERNAL; }
#line 2906 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1202 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).flags = ZLF_INTERNAL; }
#line 2912 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1209 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX); }
#line 2918 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1213 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).size = 0; }
#line 2924 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1214 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).size = 4; }
#line 2930 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1215 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).size = 4 + (yyvsp[0]).size; }
#line 2936 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1221 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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

			cl_push(pp, OP_MOV_PREG_REG); cl_push(pp, REG_ECX); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
#line 2967 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1248 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3000 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1277 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3033 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1306 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3066 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1335 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3099 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1364 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3132 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1393 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3165 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1422 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3198 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1451 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3231 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1480 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3264 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1509 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3297 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1541 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
				cl_var_reference(var, pp->hc_fill);
				cl_push_dw(pp, 0);
			}
			else if((yyval).var->level == 0) // global var
			{
				cl_push(pp, OP_PUSH_MEM);
				cl_var_reference(var, pp->hc_fill);
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
#line 3355 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1595 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3372 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1608 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3454 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1698 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[0]).value); }
#line 3460 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1701 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_push(pp, OP_PUSH_OFFSET);
			cl_const_define(&pp->data_table, (yyvsp[0]).string, (yyvsp[0]).size, pp->hc_fill); // добавляем ссылку на эти данные
			free_str((yyvsp[0]).string);
			cl_push_dw(pp, 0);						// ставим заглушку
		}
#line 3471 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1707 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 3477 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1708 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_ADD_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3483 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1709 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SUB_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3489 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1710 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_MUL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3495 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1711 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_DIV_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3501 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1712 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_OR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3507 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1713 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_AND_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3513 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1714 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_MOD_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3519 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1715 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_XOR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3525 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1716 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SHL_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3531 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1717 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_SHR_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3537 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1718 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_G_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3543 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1719 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_L_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3549 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1720 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_GE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3555 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1721 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_LE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3561 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1722 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_E_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3567 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1723 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { cl_do_op(pp, OP_NE_STK_STK, &(yyval), &(yyvsp[-2]), &(yyvsp[0])); }
#line 3573 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1725 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			//lb_skip->offset = pp->hc_fill;
			//lb_skip->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);

			cl_push(pp, OP_JNZ_STK);
			cl_label_reference(lb_skip, pp->hc_fill);
			cl_push_dw(pp, 0);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
#line 3590 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1738 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill;
			lb_skip->flags = ZLF_DEFINED;
		}
#line 3601 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1745 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			//lb_skip->offset = pp->hc_fill;
			//lb_skip->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);

			cl_push(pp, OP_JZ_STK);
			cl_label_reference(lb_skip, pp->hc_fill);
			cl_push_dw(pp, 0);
			cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
		}
#line 3618 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1758 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill;
			lb_skip->flags = ZLF_DEFINED;
		}
#line 3629 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1765 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = cl_label_define(&pp->labels_table, NULL);
			cl_stack_push(&pp->cl_stack, lb_skip);

			cl_push(pp, OP_JZ_POP_STK);
			cl_label_reference(lb_skip, pp->hc_fill);
			cl_push_dw(pp, 0);
		}
#line 3643 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1775 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip, *lb_else;
			lb_else = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip = cl_label_define(&pp->labels_table, NULL);

			cl_push(pp, OP_JMP);
			cl_label_reference(lb_skip, pp->hc_fill);
			cl_push_dw(pp, 0);
			lb_else->offset = pp->hc_fill;
			lb_else->flags = ZLF_DEFINED;
			cl_stack_push(&pp->cl_stack, lb_skip);
		}
#line 3660 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1788 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *lb_skip;
			lb_skip = (cl_label_node *) cl_stack_pop(&pp->cl_stack);
			lb_skip->offset = pp->hc_fill;
			lb_skip->flags = ZLF_DEFINED;
		}
#line 3671 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1794 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); cl_push(pp, OP_BNOT_STK); }
#line 3677 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1795 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); cl_push(pp, OP_LNOT_STK); }
#line 3683 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1796 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3689 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1798 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			(yyval).flags &= ~ZLF_UNSIGNED;
			(yyval).flags |= ZLF_SIGNED;
			cl_push(pp, OP_MINUS_STK);
		}
#line 3700 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1804 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 3706 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1821 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3754 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1865 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3802 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1909 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3850 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1953 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3898 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1997 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_label_node *func;

			func = cl_label_define(&pp->funcs_table, (yyvsp[-3]).string);
			free_str((yyvsp[-3]).string);

			if(~func->flags & ZLF_DEFINED)
			{
				func->flags = ZLF_FUNC_INTERNAL;
				func->library = NULL;
			}

			// - OR - then function must be predefined before call
			/*
			func = cl_label_find(pp->funcs_table, $1.string);
			free_str($1.string);
			if(!func)
			{
				ZL_ERROR("undeclared identifier");
			}
			*/

			if(func->flags & ZLF_FUNC_INTERNAL)
			{
				cl_push(pp, OP_CALL); // call near
			}
			else
			{
				cl_push(pp, OP_RCALL_FAR); // rcall far
			}
			cl_label_reference(func, pp->hc_fill);
			cl_push_dw(pp, 0);
			if((yyvsp[-1]).size)
			{
				cl_push(pp, OP_SUB_REG_IMM); cl_push(pp, REG_ESP); cl_push_dw(pp, (yyvsp[-1]).size);
			}
			cl_push(pp, OP_PUSH_REG); cl_push(pp, REG_EAX);
		}
#line 3941 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 2036 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 3977 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 2068 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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
#line 4007 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 2094 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill);
		}
#line 4015 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 2098 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			pp->hc_fill = (unsigned long) cl_stack_pop(&pp->cl_stack);
			(yyval).flags = ZLF_UNSIGNED | ZLF_LONG | ZLF_INT;
			//cl_push(pp, OP_POP_REG); cl_push(pp, REG_EAX);
			cl_push(pp, OP_PUSH_IMM); cl_push_dw(pp, (yyvsp[-1]).var->size[(yyvsp[-1]).rows]);
		}
#line 4026 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 2110 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nop */ }
#line 4032 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 2113 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nop */ }
#line 4038 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 2114 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value + (yyvsp[0]).value; }
#line 4044 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 2115 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value - (yyvsp[0]).value; }
#line 4050 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 2116 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value * (yyvsp[0]).value; }
#line 4056 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 2117 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value / (yyvsp[0]).value; }
#line 4062 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 2118 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value | (yyvsp[0]).value; }
#line 4068 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 2119 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value & (yyvsp[0]).value; }
#line 4074 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 2120 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value % (yyvsp[0]).value; }
#line 4080 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 2121 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value ^ (yyvsp[0]).value; }
#line 4086 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 2122 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value << (yyvsp[0]).value; }
#line 4092 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 2123 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value >> (yyvsp[0]).value; }
#line 4098 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 2124 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value < (yyvsp[0]).value; }
#line 4104 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 2125 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value > (yyvsp[0]).value; }
#line 4110 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 2126 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value >= (yyvsp[0]).value; }
#line 4116 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 2127 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value <= (yyvsp[0]).value; }
#line 4122 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 2128 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value == (yyvsp[0]).value; }
#line 4128 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 2129 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value != (yyvsp[0]).value; }
#line 4134 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 2130 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value || (yyvsp[0]).value; }
#line 4140 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 2131 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-2]).value && (yyvsp[0]).value; }
#line 4146 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 2132 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = (yyvsp[-4]).value ? (yyvsp[-2]).value : (yyvsp[0]).value; }
#line 4152 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 2133 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = ~(yyvsp[0]).value; }
#line 4158 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 2134 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = !(yyvsp[0]).value; }
#line 4164 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 2135 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { /* nothing to do */ }
#line 4170 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 2136 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    { (yyval).value = -(yyvsp[0]).value; }
#line 4176 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 2138 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
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

			(yyval).value = var_size;
		}
#line 4205 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 2163 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			cl_stack_push(&pp->cl_stack, (void *) pp->hc_fill);
		}
#line 4213 "zl_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 2167 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1646  */
    {
			(yyval).value = (yyvsp[-1]).var->size[(yyvsp[-1]).rows];
			pp->hc_fill = (unsigned long) cl_stack_pop(&pp->cl_stack);
		}
#line 4222 "zl_parser.cpp" /* yacc.c:1646  */
    break;


#line 4226 "zl_parser.cpp" /* yacc.c:1646  */
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
#line 2179 "C:\\_garbage\\_git\\zlc\\zl_parser.y" /* yacc.c:1906  */










void yyerror(void *scanner, cl_parser_params *pp, const char *err)
{
	pp->error_msg = cl_sprintf("zlc: error at line %d: %s", pp->lineno, err);
}

int zl_compile(unsigned char **hardcode, unsigned long *hard_code_size, char *code, char **error_msg,
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


	func = cl_label_define(&pp.funcs_table, "main");

	func->flags = ZLF_FUNC_INTERNAL;
	func->library = NULL;
	
	cl_push(&pp, OP_CALL);
	cl_label_reference(func, pp.hc_fill);
	cl_push_dw(&pp, 0);
	cl_push(&pp, OP_EOF);

	yylex_init(&scanner);
	yyset_extra(&pp, scanner);
	ret = yyparse(scanner, &pp);
	yylex_destroy(scanner);

	cl_push(&pp, OP_EOF);

	if(error_msg)
	{
		*error_msg = pp.error_msg;
	}
	else if(ret)
	{
		free_str(pp.error_msg);
	}

	*hard_code_size = pp.hc_fill;

	if(!ret && cl_label_fix(pp.funcs_table, pp.hard_code))
	{
		ret = 1;
		if(error_msg)
		{
			*error_msg = alloc_string("zlc: error, jump to undefined label");
		}
	}


	cl_link_sections(0, pp.data_table, pp.vars_table, pp.funcs_table, pp.hard_code, pp.hc_fill,
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

	*hardcode = pp.hard_code;

	return ret;
}

