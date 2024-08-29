
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
#line 1 "lab1.y"

    
    #include "sym_tab.c"
    #include <stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #define YYSTYPE char*         //changes the default type to char pointer	int type=-1;	//initial declaration of type for symbol table
    int type = -1;
    int vtype=-1;	//initial declaration for type checking for symbol table
    int scope=0;	//initial declaration for scope
    void yyerror(const char*);
    int yylex();
    extern int yylineno;


/* Line 189 of yacc.c  */
#line 89 "y.tab.c"

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
     LOG = 258,
     INT = 259,
     FLOAT = 260,
     ID = 261,
     IF = 262,
     WHILE = 263,
     RELOP = 264,
     FOR = 265,
     NUM = 266,
     RETURN = 267,
     CHAR = 268,
     FLOAT_LIT = 269,
     STRING = 270,
     DOUBLE = 271,
     ELSE = 272,
     DO = 273,
     SWITCH = 274,
     CASE = 275,
     BREAK = 276,
     DEFAULT = 277,
     HEADER = 278,
     INCLUDE = 279,
     MAIN = 280,
     INC = 281,
     DEC = 282
   };
#endif
/* Tokens.  */
#define LOG 258
#define INT 259
#define FLOAT 260
#define ID 261
#define IF 262
#define WHILE 263
#define RELOP 264
#define FOR 265
#define NUM 266
#define RETURN 267
#define CHAR 268
#define FLOAT_LIT 269
#define STRING 270
#define DOUBLE 271
#define ELSE 272
#define DO 273
#define SWITCH 274
#define CASE 275
#define BREAK 276
#define DEFAULT 277
#define HEADER 278
#define INCLUDE 279
#define MAIN 280
#define INC 281
#define DEC 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 185 "y.tab.c"

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,     2,     2,     2,
      29,    30,    37,    35,    39,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,    28,
       2,    40,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     9,    13,    17,    22,    29,    33,
      36,    42,    51,    54,    57,    58,    67,    70,    74,    78,
      79,    87,    93,    97,    98,   103,   112,   117,   119,   123,
     125,   129,   132,   136,   140,   142,   146,   150,   152,   156,
     158,   160,   162,   164,   167,   170,   173,   176,   180,   183,
     185,   187,   189,   191,   195,   197,   201,   203,   205,   206,
     211,   216
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    -1,    24,    23,    45,    -1,    59,
      28,    45,    -1,    64,    28,    45,    -1,    12,    53,    28,
      45,    -1,     7,    29,    58,    30,    49,    45,    -1,    17,
      49,    45,    -1,    51,    45,    -1,     8,    29,    58,    30,
      45,    -1,    18,    49,     8,    29,    58,    30,    28,    45,
      -1,    47,    45,    -1,    49,    45,    -1,    -1,    60,    25,
      29,    30,    31,    46,    45,    32,    -1,    52,    45,    -1,
      21,    28,    45,    -1,     1,    28,    45,    -1,    -1,    19,
      29,    56,    30,    31,    48,    32,    -1,    20,    56,    33,
      45,    48,    -1,    22,    33,    45,    -1,    -1,    31,    50,
      45,    32,    -1,    10,    29,    59,    28,    58,    28,    57,
      30,    -1,    60,    29,    45,    30,    -1,    54,    -1,    53,
       9,    54,    -1,    57,    -1,    53,     3,    54,    -1,    34,
      54,    -1,    54,    35,    55,    -1,    54,    36,    55,    -1,
      55,    -1,    55,    37,    56,    -1,    55,    38,    56,    -1,
      56,    -1,    29,    53,    30,    -1,     6,    -1,    11,    -1,
      14,    -1,    15,    -1,    26,     6,    -1,     6,    26,    -1,
      27,     6,    -1,     6,    27,    -1,    54,     9,    54,    -1,
      60,    61,    -1,     4,    -1,     5,    -1,    13,    -1,    16,
      -1,    61,    39,    62,    -1,    62,    -1,     6,    40,    53,
      -1,    63,    -1,     6,    -1,    -1,     6,    41,    11,    42,
      -1,    63,    41,    11,    42,    -1,     6,    40,    53,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    19,    19,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    33,    34,    35,    36,    37,
      41,    44,    45,    48,    48,    51,    54,    57,    58,    59,
      60,    61,    65,    77,    88,    91,   103,   115,   118,   119,
     130,   133,   134,   138,   139,   140,   141,   143,   146,   149,
     150,   151,   152,   155,   156,   159,   176,   177,   187,   187,
     194,   195
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LOG", "INT", "FLOAT", "ID", "IF",
  "WHILE", "RELOP", "FOR", "NUM", "RETURN", "CHAR", "FLOAT_LIT", "STRING",
  "DOUBLE", "ELSE", "DO", "SWITCH", "CASE", "BREAK", "DEFAULT", "HEADER",
  "INCLUDE", "MAIN", "INC", "DEC", "';'", "'('", "')'", "'{'", "'}'",
  "':'", "'!'", "'+'", "'-'", "'*'", "'/'", "','", "'='", "'['", "']'",
  "$accept", "Prog", "Stmt", "$@1", "SWITCHSTM", "INCASE", "INLOOP", "$@2",
  "FORLOOP", "FUNCTION", "EXPR", "E", "T", "F", "UNI", "Cond", "Declr",
  "Type", "ListVar", "X", "ARRAY", "ASSIGN", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    59,    40,
      41,   123,   125,    58,    33,    43,    45,    42,    47,    44,
      61,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    46,    45,    45,    45,    45,    45,
      47,    48,    48,    50,    49,    51,    52,    53,    53,    53,
      53,    53,    54,    54,    54,    55,    55,    55,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    58,    59,    60,
      60,    60,    60,    61,    61,    62,    62,    62,    63,    63,
      63,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     3,     4,     6,     3,     2,
       5,     8,     2,     2,     0,     8,     2,     3,     3,     0,
       7,     5,     3,     0,     4,     8,     4,     1,     3,     1,
       3,     2,     3,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     2,     1,
       1,     1,     1,     3,     1,     3,     1,     1,     0,     4,
       4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    49,    50,     0,     0,     0,     0,     0,    51,
      52,     0,     0,     0,     0,     0,    23,     0,     2,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,     0,     0,     0,     0,     0,
      27,    34,    37,    29,     0,     0,     0,     0,     0,     0,
       1,    12,    13,     9,    16,     0,    57,     0,     0,    48,
      54,    56,     0,    18,    61,    39,     0,     0,     0,     0,
      58,    44,    46,    43,    45,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,    17,     3,     0,
       4,     0,     0,     0,     0,    58,     0,     5,     0,     0,
       0,     0,    38,    30,    28,     6,    32,    33,    35,    36,
       0,     0,    24,    55,     0,     0,    26,    53,     0,    47,
       0,    10,     0,     0,     0,    59,    14,    60,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,    25,    11,     0,    22,    15,     0,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,   134,    19,   133,    20,    49,    21,    22,
      39,    40,    41,    42,    43,    67,    23,    24,    59,    60,
      61,    25
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int16 yypact[] =
{
     155,    -1,   -39,   -39,    18,     4,    13,    45,    20,   -39,
     -39,    46,    46,    47,    55,    61,   -39,    86,   -39,   122,
     122,   122,   122,    60,    26,    62,   122,    20,    42,    42,
      59,    -9,   -39,   -39,   -39,    83,    85,    20,    42,    12,
     -12,    28,   -39,   -39,   122,    87,    42,   122,   122,   177,
     -39,   -39,   -39,   -39,   -39,   122,    27,    67,   228,    58,
     -39,    57,   122,   -39,     7,   -39,     2,    69,    70,    74,
      97,   -39,   -39,   -39,   -39,    11,   -12,    42,    42,   122,
      42,    42,    42,    42,   -39,    75,    76,   -39,   -39,    73,
     -39,    20,    96,    78,    79,    97,    99,   -39,    42,    46,
     122,    42,   -39,   -12,   -12,   -39,    28,    28,   -39,   -39,
      42,    80,   -39,     7,    71,    81,   -39,   -39,    72,   -12,
     122,   -39,    88,    89,    30,   -39,   -39,   -39,   -39,    53,
      93,    42,    84,    92,   177,    -9,   101,   122,   100,   177,
     -39,   104,   -39,   -39,   206,   -39,   -39,    30,   -39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -19,   -39,   -39,   -10,    -7,   -39,   -39,   -39,
     -18,   -16,   -11,   -38,    16,   -23,   117,   118,   -39,    54,
     -39,   -39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -20
static const yytype_int16 yytable[] =
{
      51,    52,    53,    54,    44,    45,    68,    63,    86,    64,
      77,    98,    66,    66,    77,    77,    78,    71,    72,    75,
      78,    78,    76,    80,    81,    84,    31,    26,    87,    88,
      89,    32,    56,    28,    33,    34,    90,    80,    81,    94,
      79,   102,    29,    97,   108,   109,    35,    36,    65,    37,
     131,    57,   132,    32,    38,    58,    33,    34,    27,   135,
     105,   103,   104,     2,     3,    82,    83,    91,    92,   106,
     107,    37,     9,   113,    30,    10,    46,    16,   122,    35,
      36,   121,   119,    47,    48,    66,    50,   123,    55,    73,
      62,    74,   120,   138,    66,    85,    93,    95,    96,    99,
     100,   128,   101,    56,   110,   112,   111,   114,   115,   116,
     118,   124,   126,   125,   127,   141,   129,   139,   143,   130,
     145,   137,   -19,     1,   140,   147,     2,     3,     4,     5,
       6,   142,     7,   144,     8,     9,   146,   148,    10,    11,
      12,    13,   -19,    14,   -19,   136,    15,    69,    70,   117,
       0,     0,   -19,    16,   -19,   -19,     1,     0,     0,     2,
       3,     4,     5,     6,     0,     7,     0,     8,     9,     0,
       0,    10,    11,    12,    13,     0,    14,     0,     1,    15,
       0,     2,     3,     4,     5,     6,    16,     7,     0,     8,
       9,     0,     0,    10,    11,    12,    13,     0,    14,     0,
       0,    15,     0,     0,     0,     0,     0,     1,    16,   -19,
       2,     3,     4,     5,     6,     0,     7,     0,     8,     9,
       0,     0,    10,    11,    12,    13,   -19,    14,   -19,     1,
      15,     0,     2,     3,     4,     5,     6,    16,     7,     0,
       8,     9,     0,     0,    10,    11,    12,    13,     0,    14,
       0,     0,    15,     0,     0,     0,     0,     0,   -19,    16
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,    22,    11,    12,    29,    26,    46,    27,
       3,     9,    28,    29,     3,     3,     9,    26,    27,    37,
       9,     9,    38,    35,    36,    44,     6,    28,    47,    48,
      49,    11,     6,    29,    14,    15,    55,    35,    36,    58,
      28,    30,    29,    62,    82,    83,    26,    27,     6,    29,
      20,    25,    22,    11,    34,    29,    14,    15,    40,     6,
      79,    77,    78,     4,     5,    37,    38,    40,    41,    80,
      81,    29,    13,    91,    29,    16,    29,    31,   101,    26,
      27,   100,    98,    28,    23,   101,     0,   110,    28,     6,
      28,     6,    99,   131,   110,     8,    29,    39,    41,    30,
      30,   120,    28,     6,    29,    32,    30,    11,    30,    30,
      11,    31,    31,    42,    42,   134,    28,    33,   137,    30,
     139,    28,     0,     1,    32,   144,     4,     5,     6,     7,
       8,    30,    10,    33,    12,    13,    32,   147,    16,    17,
      18,    19,    20,    21,    22,   129,    24,    30,    30,    95,
      -1,    -1,    30,    31,    32,     0,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    -1,    21,    -1,     1,    24,
      -1,     4,     5,     6,     7,     8,    31,    10,    -1,    12,
      13,    -1,    -1,    16,    17,    18,    19,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,     1,    31,    32,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,     1,
      24,    -1,     4,     5,     6,     7,     8,    31,    10,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    -1,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,     5,     6,     7,     8,    10,    12,    13,
      16,    17,    18,    19,    21,    24,    31,    44,    45,    47,
      49,    51,    52,    59,    60,    64,    28,    40,    29,    29,
      29,     6,    11,    14,    15,    26,    27,    29,    34,    53,
      54,    55,    56,    57,    49,    49,    29,    28,    23,    50,
       0,    45,    45,    45,    45,    28,     6,    25,    29,    61,
      62,    63,    28,    45,    53,     6,    54,    58,    58,    59,
      60,    26,    27,     6,     6,    53,    54,     3,     9,    28,
      35,    36,    37,    38,    45,     8,    56,    45,    45,    45,
      45,    40,    41,    29,    45,    39,    41,    45,     9,    30,
      30,    28,    30,    54,    54,    45,    55,    55,    56,    56,
      29,    30,    32,    53,    11,    30,    30,    62,    11,    54,
      49,    45,    58,    58,    31,    42,    31,    42,    45,    28,
      30,    20,    22,    48,    46,     6,    57,    28,    56,    33,
      32,    45,    30,    45,    33,    45,    32,    45,    48
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
        case 14:

/* Line 1455 of yacc.c  */
#line 33 "lab1.y"
    {scope++;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 33 "lab1.y"
    {scope--;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 48 "lab1.y"
    {scope++;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 48 "lab1.y"
    {scope--;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 66 "lab1.y"
    {
	if(vtype==2)
		sprintf((yyval),"%d",atoi((yyvsp[(1) - (3)]))+atoi((yyvsp[(3) - (3)])));
	if(vtype==3)
		sprintf((yyval),"%f",atof((yyvsp[(1) - (3)]))+atof((yyvsp[(3) - (3)])));
	if(vtype==1){
		printf("character used in arithmetic operator\n");
		yyerror((yyval));
		(yyval)="~";
		}
	}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 77 "lab1.y"
    {
	if(vtype==2)
		sprintf((yyval),"%d",atoi((yyvsp[(1) - (3)]))-atoi((yyvsp[(3) - (3)])));
	if(vtype==3)
		sprintf((yyval),"%f",atof((yyvsp[(1) - (3)]))-atof((yyvsp[(3) - (3)])));
	if(vtype==1){
		printf("character used in arithmetic operator\n");
		yyerror((yyval));
		(yyval)="~";
		}
	}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 92 "lab1.y"
    {
	if(vtype==2)
		sprintf((yyval),"%d",atoi((yyvsp[(1) - (3)]))*atoi((yyvsp[(3) - (3)])));
	if(vtype==3)
		sprintf((yyval),"%f",atof((yyvsp[(1) - (3)]))*atof((yyvsp[(3) - (3)])));
	if(vtype==1){
		printf("character used in arithmetic operator\n");
		yyerror((yyval));
		(yyval)="~";
		}
	}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 104 "lab1.y"
    {
	if(vtype==2)
		sprintf((yyval),"%d",atoi((yyvsp[(1) - (3)]))/atoi((yyvsp[(3) - (3)])));
	if(vtype==3)
		sprintf((yyval),"%f",atof((yyvsp[(1) - (3)]))/atof((yyvsp[(3) - (3)])));
	if(vtype==1){
		printf("character used in arithmetic operator\n");
		yyerror((yyval));
		(yyval)="~";
		}
	}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 119 "lab1.y"
    {if(check_sym_tab((yyvsp[(1) - (1)]))){
	char* value=retrieve_val((yyvsp[(1) - (1)]));
	if (value=="~"){
	printf("variable %s not initialised\n",(yyvsp[(1) - (1)]));
	}
	else{
	(yyval)=strdup(value);
	vtype=type_check(value);
	}
	}
	}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 130 "lab1.y"
    {	(yyval)=strdup((yyvsp[(1) - (1)]));
		vtype=type_check((yyvsp[(1) - (1)]));
					}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 134 "lab1.y"
    {(yyval)=strdup((yyvsp[(1) - (1)]));
		vtype=-1;
		}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 149 "lab1.y"
    {type = T_INT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 150 "lab1.y"
    {type = T_FLOAT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 151 "lab1.y"
    {type = T_CHAR;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 152 "lab1.y"
    {type = T_DOUBLE;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 160 "lab1.y"
    {
        vtype = type_check((yyvsp[(3) - (3)]));
        if (type != vtype) {
               printf("Wrong type specified\n");
		yyerror((yyval));
        }
        else{
                if(check_sym_tab((yyvsp[(1) - (3)]))){
                printf("variable %s already declared \n",(yyvsp[(1) - (3)]));
                }
                else{
	        insert_symbol((yyvsp[(1) - (3)]),size(type),type,yylineno,scope);
	        insert_val((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),yylineno);
	        }
        }      	
}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 178 "lab1.y"
    {if(check_sym_tab((yyvsp[(1) - (1)]))){
		printf("variable %s already declared \n",(yyvsp[(1) - (1)]));
	        }
		else{
		insert_symbol((yyvsp[(1) - (1)]),size(type),type,yylineno,scope);
		}
		}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 187 "lab1.y"
    {if(check_sym_tab((yyvsp[(1) - (4)]))){
		printf("variable %s already declared \n",(yyvsp[(1) - (4)]));
	        }
		else{
		insert_symbol((yyvsp[(1) - (4)]),size(type)*atoi((yyvsp[(3) - (4)])),type,yylineno,scope);
		}
		}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 196 "lab1.y"
    {   //vtype = type_check($3);
        if (type_check((yyvsp[(3) - (3)])) != type_check((yyvsp[(1) - (3)]))) {
               printf("Wrong type specified\n");
		yyerror((yyval));
        }
        else{
        
        if(!check_sym_tab((yyvsp[(1) - (3)]))){
	printf("variable %s not declared \n",(yyvsp[(1) - (3)]));
	yyerror((yyvsp[(1) - (3)]));
	 }
	else{
	insert_val((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),yylineno);
	}
}
}
    break;



/* Line 1455 of yacc.c  */
#line 1745 "y.tab.c"
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
#line 215 "lab1.y"


void yyerror(const char *s)
{
	printf("Error :%s at %d \n",s,yylineno);}

int main(int argc, char* argv[])
{
        t=init_table();
	//printf("here \n");
	yyparse();
	display_sym_tab();
	return 0;
   
}
