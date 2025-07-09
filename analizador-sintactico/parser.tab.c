
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>

    extern int yylex(void);
    extern char *yytext;
    extern FILE *yyin;
    extern int yylineno;
    void yyerror(char *s);


/* Line 189 of yacc.c  */
#line 85 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PR_INT = 258,
     PR_SHORT = 259,
     PR_LONG = 260,
     PR_FLOAT = 261,
     PR_DOUB = 262,
     PR_BOOL_C99 = 263,
     PR_CHAR = 264,
     PR_SIGN = 265,
     PR_UNSIGN = 266,
     PR_VOID = 267,
     PR_ENUM = 268,
     PR_GOTO = 269,
     PR_INLINE = 270,
     PR_REGIS = 271,
     PR_RESTRICT = 272,
     PR_BREAK = 273,
     PR_SWITCH = 274,
     PR_RETURN = 275,
     PR_SIZEOF = 276,
     PR_WHILE = 277,
     PR_FOR = 278,
     PR_STATIC = 279,
     PR_DEFAULT = 280,
     PR_CONST = 281,
     PR_CASE = 282,
     PR_CONTIN = 283,
     PR_IF = 284,
     PR_ELSE = 285,
     PR_DO = 286,
     PR_AUTO = 287,
     PR_EXTERN = 288,
     PR_STRUCT = 289,
     PR_TYPEDEF = 290,
     PR_TYPEOF = 291,
     PR_UNION = 292,
     PR_TYPEUNQ = 293,
     PR_VOLATILE = 294,
     PR_ALIGNAS = 295,
     PR_ALIGNOF = 296,
     PR_ATOMIC = 297,
     PR_BOOL_CPP = 298,
     PR_COMPLEX = 299,
     PR_GENERIC = 300,
     PR_IMAGINARY = 301,
     PR_NORETURN = 302,
     PR_STATIC_ASSERT = 303,
     PR_THREAD_LOCAL = 304,
     COMILLA_SIMPLE = 305,
     OP_ASIGNACION = 306,
     OP_COMPARATIVO = 307,
     OP_MENOR = 308,
     OP_MAYOR = 309,
     OP_MENOR_IGUAL = 310,
     OP_MAYOR_IGUAL = 311,
     OP_NOES_IGUAL = 312,
     OP_SUMA = 313,
     OP_RESTA = 314,
     OP_MULTIPLICACION = 315,
     OP_DIVISION = 316,
     OP_TERNARIO_IF = 317,
     OP_TERNARIO_ELSE = 318,
     OP_ASIGNACION_SUMA = 319,
     OP_ASIGNACION_RESTA = 320,
     OP_ASIGNACION_MULTIP = 321,
     OP_ASIGNACION_DIV = 322,
     OP_AND = 323,
     OP_OR = 324,
     OP_NEGACION = 325,
     OP_ASIGNACION_XOR = 326,
     OP_ASIGNACION_AND = 327,
     OP_ASIGNACION_OR = 328,
     OP_ASIGNACION_INCREMENTAR = 329,
     OP_ASIGNACION_DISMINUIR = 330,
     OP_MODULO = 331,
     OP_ASIGNACION_MOD = 332,
     OP_XOR = 333,
     OP_DIRECCION = 334,
     OP_MIEMBRO_PTR = 335,
     SE_PUNTO = 336,
     SE_PUNTO_COMA = 337,
     SE_COMA = 338,
     LLAVE_AP = 339,
     LLAVE_CE = 340,
     CORCHETE_AP = 341,
     CORCHETE_CE = 342,
     PARENTESIS_AP = 343,
     PARENTESIS_CE = 344,
     SALTO_LINEA = 345,
     TAB = 346,
     ESPACIO = 347,
     SE_HASH = 348,
     PR_INCLUDE = 349,
     PR_DEFINE = 350,
     HEADER = 351,
     IDENTIFICADOR = 352,
     LIT_INT = 353,
     LIT_FLOAT = 354,
     LIT_CHAR = 355,
     LIT_STRING = 356,
     INVALID_STRING = 357,
     DESCONOCIDO = 358
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 230 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    13,    17,    19,    22,
      24,    26,    28,    32,    36,    44,    53,    55,    59,    61,
      66,    70,    73,    80,    81,    83,    86,    91,    92,    94,
      96,    98,   102,   104,   106,   108,   110,   112,   114,   116,
     119,   123,   124,   127,   129,   132,   134,   136,   138,   140,
     142,   144,   147,   151,   154,   157,   162,   166,   170,   174,
     178,   182,   186,   190,   194,   200,   206,   208,   210,   212,
     214,   216,   220,   224,   228,   232,   236,   240,   244,   248,
     254,   256,   260,   264,   268,   272,   276,   280,   284,   288,
     292,   295,   301,   309,   315,   323,   327,   337,   348,   354,
     360,   367,   371,   373,   376,   380,   384,   386
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     105,     0,    -1,   106,   108,    -1,    -1,   106,   107,    -1,
      94,    96,    -1,    95,    97,    98,    -1,   109,    -1,   109,
     108,    -1,   110,    -1,   113,    -1,   131,    -1,   118,   111,
      82,    -1,   118,   122,    82,    -1,   118,    97,    86,    87,
      51,   134,    82,    -1,   118,    97,    86,   123,    87,    51,
     134,    82,    -1,   112,    -1,   112,    83,   111,    -1,    97,
      -1,    97,    86,   123,    87,    -1,    97,    86,    87,    -1,
      60,   112,    -1,   118,   112,    88,   114,    89,   119,    -1,
      -1,   115,    -1,   118,   112,    -1,   118,   112,    83,   115,
      -1,    -1,   117,    -1,   112,    -1,   123,    -1,   112,    83,
     117,    -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,    34,    97,    -1,    84,
     120,    85,    -1,    -1,   121,   120,    -1,   110,    -1,   122,
      82,    -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,
     129,    -1,   130,    -1,    18,    82,    -1,   112,    51,   123,
      -1,   112,    74,    -1,   112,    75,    -1,   112,    60,    51,
     123,    -1,   112,    64,   123,    -1,   112,    65,   123,    -1,
     112,    67,   123,    -1,   112,    66,   123,    -1,   112,    77,
     123,    -1,   112,    72,   123,    -1,   112,    73,   123,    -1,
     112,    71,   123,    -1,   112,    81,    97,    51,   123,    -1,
     112,    80,    97,    51,   123,    -1,   112,    -1,    98,    -1,
      99,    -1,   100,    -1,   101,    -1,   123,    58,   123,    -1,
     123,    59,   123,    -1,   123,    60,   123,    -1,   123,    61,
     123,    -1,   123,    76,   123,    -1,    88,   123,    89,    -1,
      97,    81,    97,    -1,    97,    80,    97,    -1,   124,    62,
     123,    63,   123,    -1,   134,    -1,   123,    52,   123,    -1,
     123,    54,   123,    -1,   123,    53,   123,    -1,   123,    56,
     123,    -1,   123,    55,   123,    -1,   123,    57,   123,    -1,
     123,    68,   123,    -1,   123,    69,   123,    -1,   123,    78,
     123,    -1,    70,   123,    -1,    29,    88,   124,    89,   119,
      -1,    29,    88,   124,    89,   119,    30,   119,    -1,    22,
      88,   124,    89,   119,    -1,    31,   119,    22,    88,   124,
      89,    82,    -1,    20,   123,    82,    -1,    23,    88,   122,
      82,   124,    82,   122,    89,   119,    -1,    23,    88,   118,
     122,    82,   124,    82,   122,    89,   119,    -1,    19,    88,
     123,    89,   119,    -1,    97,    88,   116,    89,    82,    -1,
      34,    97,    84,   132,    85,    82,    -1,    34,    97,    82,
      -1,   133,    -1,   133,   132,    -1,   118,   111,    82,    -1,
      84,   135,    85,    -1,   123,    -1,   123,    83,   135,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    54,    56,    60,    61,    65,    66,    70,
      71,    72,    76,    77,    78,    79,    83,    84,    88,    89,
      90,    91,    95,    98,   100,   104,   105,   108,   110,   114,
     115,   116,   121,   122,   123,   124,   125,   126,   127,   128,
     132,   135,   137,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   201,   202,   206,   207,   211,   215,   216,   220,   224,
     228,   229,   233,   234,   238,   242,   246,   247
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PR_INT", "PR_SHORT", "PR_LONG",
  "PR_FLOAT", "PR_DOUB", "PR_BOOL_C99", "PR_CHAR", "PR_SIGN", "PR_UNSIGN",
  "PR_VOID", "PR_ENUM", "PR_GOTO", "PR_INLINE", "PR_REGIS", "PR_RESTRICT",
  "PR_BREAK", "PR_SWITCH", "PR_RETURN", "PR_SIZEOF", "PR_WHILE", "PR_FOR",
  "PR_STATIC", "PR_DEFAULT", "PR_CONST", "PR_CASE", "PR_CONTIN", "PR_IF",
  "PR_ELSE", "PR_DO", "PR_AUTO", "PR_EXTERN", "PR_STRUCT", "PR_TYPEDEF",
  "PR_TYPEOF", "PR_UNION", "PR_TYPEUNQ", "PR_VOLATILE", "PR_ALIGNAS",
  "PR_ALIGNOF", "PR_ATOMIC", "PR_BOOL_CPP", "PR_COMPLEX", "PR_GENERIC",
  "PR_IMAGINARY", "PR_NORETURN", "PR_STATIC_ASSERT", "PR_THREAD_LOCAL",
  "COMILLA_SIMPLE", "OP_ASIGNACION", "OP_COMPARATIVO", "OP_MENOR",
  "OP_MAYOR", "OP_MENOR_IGUAL", "OP_MAYOR_IGUAL", "OP_NOES_IGUAL",
  "OP_SUMA", "OP_RESTA", "OP_MULTIPLICACION", "OP_DIVISION",
  "OP_TERNARIO_IF", "OP_TERNARIO_ELSE", "OP_ASIGNACION_SUMA",
  "OP_ASIGNACION_RESTA", "OP_ASIGNACION_MULTIP", "OP_ASIGNACION_DIV",
  "OP_AND", "OP_OR", "OP_NEGACION", "OP_ASIGNACION_XOR",
  "OP_ASIGNACION_AND", "OP_ASIGNACION_OR", "OP_ASIGNACION_INCREMENTAR",
  "OP_ASIGNACION_DISMINUIR", "OP_MODULO", "OP_ASIGNACION_MOD", "OP_XOR",
  "OP_DIRECCION", "OP_MIEMBRO_PTR", "SE_PUNTO", "SE_PUNTO_COMA", "SE_COMA",
  "LLAVE_AP", "LLAVE_CE", "CORCHETE_AP", "CORCHETE_CE", "PARENTESIS_AP",
  "PARENTESIS_CE", "SALTO_LINEA", "TAB", "ESPACIO", "SE_HASH",
  "PR_INCLUDE", "PR_DEFINE", "HEADER", "IDENTIFICADOR", "LIT_INT",
  "LIT_FLOAT", "LIT_CHAR", "LIT_STRING", "INVALID_STRING", "DESCONOCIDO",
  "$accept", "inicio", "directivas_preprocesador_op",
  "directiva_preprocesador", "lista_declaraciones", "declaracion",
  "declaracion_variable", "lista_identificadores", "identificador_op",
  "declaracion_funcion", "lista_parametros", "parametro",
  "lista_parametros_op", "parametro_op", "tipo", "bloque",
  "lista_sentencias", "sentencia", "asignacion", "expresion", "condicion",
  "sentencia_if", "sentencia_while", "sentencia_return", "sentencia_for",
  "sentencia_switch", "sentencia_funcion", "declaracion_struct",
  "lista_miembros_struct", "miembro_struct", "lista_inicializacion",
  "elementos_inicializacion", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   110,   110,   110,   110,   111,   111,   112,   112,
     112,   112,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   120,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   126,   126,   127,   128,   128,   129,   130,
     131,   131,   132,   132,   133,   134,   135,   135
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     3,     1,     2,     1,
       1,     1,     3,     3,     7,     8,     1,     3,     1,     4,
       3,     2,     6,     0,     1,     2,     4,     0,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     0,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     2,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     5,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     5,     7,     5,     7,     3,     9,    10,     5,     5,
       6,     3,     1,     2,     3,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     4,     2,     7,     9,    10,     0,
      11,    39,     5,     0,     8,     0,    18,     0,    16,     0,
     101,     0,     6,    18,    21,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,     0,     0,
       0,     0,    23,    13,     0,     0,     0,   102,     0,     0,
       0,    20,     0,    18,    67,    68,    69,    70,    66,     0,
       0,    80,    52,     0,    56,    57,    59,    58,    63,    61,
      62,    60,     0,     0,    17,    16,     0,    24,     0,    39,
       0,     0,   103,    20,     0,    90,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,    55,     0,
       0,     0,    25,   104,   100,    19,     0,   105,     0,    76,
      78,    77,    81,    83,    82,    85,    84,    86,    71,    72,
      73,    74,    87,    88,    75,    89,     0,     0,    65,    64,
      41,    22,     0,   107,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    43,     0,     0,     0,    41,
       0,    45,    46,    47,    48,    49,    50,    26,    15,    79,
      51,     0,     0,     0,     0,     0,     0,    27,    16,    40,
      42,    44,     0,    95,     0,     0,     0,     0,     0,     0,
      66,     0,    28,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    93,     0,     0,    91,     0,    31,    99,
       0,     0,     0,     0,     0,     0,    92,    94,     0,     0,
       0,    96,    97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    14,    15,    16,    17,    27,    68,    18,
      86,    87,   201,   202,    19,   151,   168,   169,    29,   194,
      70,   171,   172,   173,   174,   175,   176,    20,    56,    57,
      71,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -132
static const yytype_int16 yypact[] =
{
    -132,    22,    94,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,   -63,   -49,   -46,  -132,  -132,   216,  -132,  -132,   -40,
    -132,   -34,  -132,   -31,  -132,   -39,     3,   -14,   166,     9,
    -132,   333,  -132,     6,  -132,   -45,  -132,   115,    42,   115,
     115,   115,   115,   115,   115,   115,  -132,  -132,   115,    -1,
       7,   -39,   333,  -132,     8,   -39,    28,   333,   110,   115,
     115,    66,   115,    58,  -132,  -132,  -132,  -132,  -132,   257,
      57,  -132,   452,   115,   452,   452,   452,   452,   452,   452,
     452,   452,    67,    69,  -132,    47,    51,  -132,   -39,  -132,
      54,    60,  -132,  -132,   293,   452,   344,    61,    63,   203,
      46,    48,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   100,   115,   452,   115,
     115,    70,    75,  -132,  -132,  -132,   115,  -132,    77,  -132,
    -132,  -132,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,    63,   425,   452,   452,
     103,  -132,   333,  -132,  -132,    79,   115,    80,    76,   115,
      83,    84,    85,    70,    -2,  -132,   395,   -40,    91,   103,
      97,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,   452,
    -132,   115,   376,   115,    56,   115,   161,   115,   312,  -132,
    -132,  -132,   230,  -132,   452,   -60,   -39,   102,   -58,    98,
     -66,   101,  -132,   452,    70,    70,   105,   115,    70,   115,
     115,   111,  -132,  -132,   115,   -38,   162,   -44,  -132,  -132,
     -16,   -39,    70,   113,   -39,   107,  -132,  -132,   112,    70,
      70,  -132,  -132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,   188,  -132,  -131,   -18,   -19,  -132,
    -132,    82,  -132,    -4,   -17,   -48,    49,  -132,   -55,   -32,
      59,  -132,  -132,  -132,  -132,  -132,  -132,  -132,   170,  -132,
     -97,   109
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -30
static const yytype_int16 yytable[] =
{
      28,   128,   117,    69,   117,    72,    34,    74,    75,    76,
      77,    78,    79,    80,    55,    25,    81,   210,   117,   165,
      25,    25,     3,   -29,   117,    59,    94,    95,    96,   205,
      99,   208,    85,    84,    21,    88,    85,    90,   165,    60,
      55,   118,    61,    62,   221,   223,   117,    22,    30,   155,
      31,    23,    63,    64,    65,    66,    67,    26,    33,     4,
       5,     6,     7,     8,     9,    10,   224,    32,    36,   122,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,    58,   147,   187,   148,   149,    35,
      54,    53,    58,    73,    96,   170,    82,     4,     5,     6,
       7,     8,     9,    10,    83,    89,     4,     5,     6,     7,
       8,     9,    10,    91,   170,   186,    25,    98,   119,   117,
     120,   157,   158,   159,   179,   160,   161,   182,    11,   197,
      51,   166,   162,   167,   163,    88,   123,    54,   100,   101,
     121,   206,   124,   130,    58,   131,   127,    60,   188,   192,
     166,   146,   167,    33,   150,   203,   212,   213,   152,   154,
     216,   178,   180,    25,   181,   166,   225,   196,   200,   228,
      25,   183,   184,   185,   226,    25,   189,   166,   203,   191,
      59,   231,   232,   199,   207,    59,   209,   214,    12,    13,
     211,   200,   222,   219,    60,   227,   229,    93,    62,    60,
     164,   230,   166,    62,    24,   166,   218,    63,    64,    65,
      66,    67,    63,    64,    65,    66,    67,    37,   190,     4,
       5,     6,     7,     8,     9,    10,    38,    92,     0,     0,
      39,    40,    41,    42,   177,   153,     0,    43,    44,    45,
      46,    47,   195,    48,   198,     0,    49,    50,     0,    51,
      11,     0,     0,     0,    52,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,   215,     0,   217,     0,
       0,   112,   113,   220,     0,     0,     0,     0,     0,   114,
       0,   115,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   129,     0,     0,     0,     0,     0,   112,   113,
       0,     0,     0,     0,     0,     0,   114,     0,   115,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   204,
       0,     0,     0,     0,     0,   112,   113,     0,     0,     0,
       0,     0,     0,   114,     0,   115,     4,     5,     6,     7,
       8,     9,    10,     0,   116,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     0,
       0,   112,   113,    37,     0,     0,     0,    54,     0,   114,
       0,   115,    38,     0,     0,     0,    39,    40,    41,    42,
     125,     0,     0,    43,    44,    45,    46,    47,     0,    48,
       0,     0,    49,    50,     0,    51,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,     0,
       0,     0,   112,   113,     0,     0,     0,     0,     0,     0,
     114,     0,   115,     0,     0,     0,     0,   126,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
       0,     0,     0,     0,   112,   113,    37,     0,     0,     0,
       0,     0,   114,     0,   115,    38,     0,     0,   193,    39,
      40,    41,    42,     0,     0,     0,    43,    44,    45,    46,
      47,     0,    48,     0,     0,    49,    50,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     0,   156,     0,
       0,     0,     0,   112,   113,     0,     0,     0,     0,     0,
       0,   114,     0,   115,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
     112,   113,     0,     0,     0,     0,     0,     0,   114,     0,
     115
};

static const yytype_int16 yycheck[] =
{
      19,    98,    62,    35,    62,    37,    25,    39,    40,    41,
      42,    43,    44,    45,    31,    60,    48,    83,    62,   150,
      60,    60,     0,    89,    62,    70,    58,    59,    60,    89,
      62,    89,    51,    51,    97,    52,    55,    55,   169,    84,
      57,    73,    87,    88,    82,    89,    62,    96,    82,   146,
      84,    97,    97,    98,    99,   100,   101,    97,    97,     3,
       4,     5,     6,     7,     8,     9,    82,    98,    82,    88,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    86,   117,    88,   119,   120,    86,
      34,    82,    86,    51,   126,   150,    97,     3,     4,     5,
       6,     7,     8,     9,    97,    97,     3,     4,     5,     6,
       7,     8,     9,    85,   169,   163,    60,    51,    51,    62,
      51,    18,    19,    20,   156,    22,    23,   159,    34,   184,
      83,   150,    29,   150,    31,   152,    82,    34,    80,    81,
      89,   196,    82,    97,    86,    97,    85,    84,   167,   181,
     169,    51,   169,    97,    84,   187,   204,   205,    83,    82,
     208,    82,    82,    60,    88,   184,   221,   184,   187,   224,
      60,    88,    88,    88,   222,    60,    85,   196,   210,    82,
      70,   229,   230,    22,    82,    70,    88,    82,    94,    95,
      89,   210,    30,    82,    84,    82,    89,    87,    88,    84,
      97,    89,   221,    88,    16,   224,   210,    97,    98,    99,
     100,   101,    97,    98,    99,   100,   101,    51,   169,     3,
       4,     5,     6,     7,     8,     9,    60,    57,    -1,    -1,
      64,    65,    66,    67,   152,   126,    -1,    71,    72,    73,
      74,    75,   183,    77,   185,    -1,    80,    81,    -1,    83,
      34,    -1,    -1,    -1,    88,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,   207,    -1,   209,    -1,
      -1,    68,    69,   214,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    78,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    89,    -1,    -1,    -1,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    89,
      -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,     3,     4,     5,     6,
       7,     8,     9,    -1,    87,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    51,    -1,    -1,    -1,    34,    -1,    76,
      -1,    78,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      87,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    80,    81,    -1,    83,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    -1,    -1,    -1,    83,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    51,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    60,    -1,    -1,    82,    64,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    77,    -1,    -1,    80,    81,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    -1,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   105,   106,     0,     3,     4,     5,     6,     7,     8,
       9,    34,    94,    95,   107,   108,   109,   110,   113,   118,
     131,    97,    96,    97,   108,    60,    97,   111,   112,   122,
      82,    84,    98,    97,   112,    86,    82,    51,    60,    64,
      65,    66,    67,    71,    72,    73,    74,    75,    77,    80,
      81,    83,    88,    82,    34,   118,   132,   133,    86,    70,
      84,    87,    88,    97,    98,    99,   100,   101,   112,   123,
     124,   134,   123,    51,   123,   123,   123,   123,   123,   123,
     123,   123,    97,    97,   111,   112,   114,   115,   118,    97,
     111,    85,   132,    87,   123,   123,   123,   135,    51,   123,
      80,    81,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    68,    69,    76,    78,    87,    62,   123,    51,
      51,    89,   112,    82,    82,    87,    83,    85,   134,    89,
      97,    97,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,    51,   123,   123,   123,
      84,   119,    83,   135,    82,   134,    63,    18,    19,    20,
      22,    23,    29,    31,    97,   110,   112,   118,   120,   121,
     122,   125,   126,   127,   128,   129,   130,   115,    82,   123,
      82,    88,   123,    88,    88,    88,   119,    88,   112,    85,
     120,    82,   123,    82,   123,   124,   118,   122,   124,    22,
     112,   116,   117,   123,    89,    89,   122,    82,    89,    88,
      83,    89,   119,   119,    82,   124,   119,   124,   117,    82,
     124,    82,    30,    89,    82,   122,   119,    82,   122,    89,
      89,   119,   119
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1716 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
		      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 249 "parser.y"


void yyerror(char *msg) {
    fprintf(stderr, "Error de sintaxis en la línea %d: %s\n", yylineno, msg);
}

int main(int argc, char **argv){
    if(argc > 1) {
        yyin = fopen(argv[1], "rt");
    }
    else {
        yyin = stdin;
    }
    int resultado = yyparse();
    if (resultado == 0) {
        printf("Análisis sintáctico correcto.\n");
    } else {
        printf("Se encontraron errores de sintaxis.\n");
    }    
    return 0;
}


