/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "vas.y" /* yacc.c:339  */

/******************************************************************************
*******************************************************************************


                         VV    VV    AAAA     SSSSSS 
                         VV    VV   AAAAAA   SSSSSSSS
                         VV    VV  AA    AA  SS      
                         VV    VV  AAAAAAAA  SSSSSSS 
                         VV    VV  AA    AA        SS
                          VV  VV   AA    AA        SS
                           VVVV    AA    AA  SSSSSSSS
                            VV     AA    AA   SSSSSS 


*******************************************************************************
*******************************************************************************

				 VAM Assember
				 ============

   A simple assembler for VAM

   Modifications:
   ==============

   10 Mar 89 JPB:  First version
    9 May 91 JPB:  '"' changed to '\"' for ANSI consistency.

*******************************************************************************
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  MAXLAB  0x1000			 /* Number of labels */

/* The instruction set */

#define  I_HALT	 0 			 /* End of program */
#define  I_NOP   1 			 /* Do nothing */
#define  I_TRAP  2 			 /* Output a character */
#define  I_ADD   3 			 /* ADD Rx,Ry */
#define  I_SUB   4 
#define  I_MUL   5 
#define  I_DIV   6 
#define  I_STI   7			 /* STI Rx,offset(Ry) */
#define  I_LDI   8 			 /* LDI offset(Rx),Ry */
#define  I_LDA   9 			 /* LDA offset(Rx),Ry */
#define  I_LDR   10 			 /* LDR Rx,Ry */
#define  I_BZE   11 			 /* BZE offset */
#define  I_BNZ   12 
#define  I_BRA   13
#define  I_BAL   14 			 /* BAL Rx,Ry */
#define  I_MAX   15

/* Global variables */

int  pass ;				 /* Which pass */
int  pc ;				 /* Program counter */
int  labtab[MAXLAB] ;			 /* Offsets for labels */


/* Subsequent routines */

char  *decode_args( int   argc,
		    char *argv[] ) ;

void  setup_files( char *ifile,
		   char *ofile ) ;

void  pbyte( int  n ) ;

void  pword( int  n ) ;


#line 144 "vas.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "vas.tab.h".  */
#ifndef YY_YY_VAS_TAB_H_INCLUDED
# define YY_YY_VAS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif


/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_VAS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "vas.tab.c" /* yacc.c:358  */

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   257

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,    16,
      99,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    15,    72,    73,    74,    75,    76,    77,    78,
      18,    19,    91,    89,    17,    80,    96,    98,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     3,    90,
      94,    79,    95,    97,    84,    21,    30,    63,    27,    35,
      64,    65,    20,    32,    66,    67,     4,    31,    23,    24,
      25,    68,    26,    28,    22,    29,    33,    69,    70,    71,
      34,    86,    36,    93,    82,    88,    87,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    85,    83,    92,    81,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    82,    85,    86,    90,    94,    97,   100,
     104,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   118,   119,   122,   123,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   144,   147,   150,   153,   160,   167,   174,   181,   187,
     195,   201,   209,   215,   223,   230,   235,   242,   247,   254,
     259,   266,   273,   279,   282,   285,   288,   291,   294,   297,
     300,   303,   306,   309,   312,   315,   318,   321,   324,   327,
     330,   333,   334,   335,   338,   339,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   439
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "':'", "'L'", "'0'", "'1'", "'2'", "'3'",
  "'4'", "'5'", "'6'", "'7'", "'8'", "'9'", "' '", "'\\t'", "','", "'('",
  "')'", "'H'", "'A'", "'T'", "'N'", "'O'", "'P'", "'R'", "'D'", "'S'",
  "'U'", "'B'", "'M'", "'I'", "'V'", "'Z'", "'E'", "'\\\\'", "'a'", "'b'",
  "'c'", "'d'", "'e'", "'f'", "'g'", "'h'", "'i'", "'j'", "'k'", "'l'",
  "'m'", "'n'", "'o'", "'p'", "'q'", "'r'", "'s'", "'t'", "'u'", "'v'",
  "'w'", "'x'", "'y'", "'z'", "'C'", "'F'", "'G'", "'J'", "'K'", "'Q'",
  "'W'", "'X'", "'Y'", "'!'", "'\"'", "'#'", "'$'", "'%'", "'&'", "'\\''",
  "'='", "'-'", "'~'", "'^'", "'|'", "'@'", "'{'", "'['", "'`'", "'_'",
  "'+'", "';'", "'*'", "'}'", "']'", "'<'", "'>'", "'.'", "'?'", "'/'",
  "'\\n'", "$accept", "program", "statement", "label", "number", "digit",
  "ws", "separator", "instruction", "halt_instr", "nop_instr",
  "trap_instr", "add_instr", "sub_instr", "mul_instr", "div_instr",
  "sti_instr", "ldi_instr", "lda_instr", "ldr_instr", "bze_instr",
  "bnz_instr", "bra_instr", "bal_instr", "db_instr", "halt_op", "nop_op",
  "trap_op", "add_op", "sub_op", "mul_op", "div_op", "sti_op", "ldi_op",
  "lda_op", "ldr_op", "bze_op", "bnz_op", "bra_op", "bal_op", "db_op",
  "reg", "offset", "comment", "text_comment", "char", "return", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    58,    76,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    32,     9,    44,    40,    41,
      72,    65,    84,    78,    79,    80,    82,    68,    83,    85,
      66,    77,    73,    86,    90,    69,    92,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    67,    70,    71,    74,    75,    81,    87,
      88,    89,    33,    34,    35,    36,    37,    38,    39,    61,
      45,   126,    94,   124,    64,   123,    91,    96,    95,    43,
      59,    42,   125,    93,    60,    62,    46,    63,    47,    10
};
# endif

#define YYPACT_NINF -188

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-188)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,   161,  -188,  -188,  -188,    14,  -188,    17,    90,  -188,
     -95,   218,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,   161,  -188,  -188,  -188,     1,    11,    31,    27,
      29,    32,    21,   -14,    -2,    34,  -188,     1,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
     218,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
      90,   -95,    15,    57,    35,    62,    65,  -188,    59,    63,
      66,    93,    64,    78,    67,    96,     1,   -95,    33,    33,
      33,    33,    33,   123,   123,    33,   123,   123,   123,    33,
     135,     1,  -188,  -188,  -188,  -188,    79,  -188,    84,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,   161,
      87,    97,    98,    99,   102,   105,   161,   106,   108,   145,
     159,  -188,  -188,  -188,  -188,  -188,  -188,   160,   161,   -95,
    -188,  -188,   161,   152,   152,   152,   152,   148,   152,   152,
     152,   152,   152,   152,  -188,  -188,  -188,  -188,  -188,  -188,
     177,  -188,   104,  -188,   179,  -188,  -188,   152,   162,   182,
     183,   152,   152,  -188,  -188,  -188
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      83,     0,    23,    24,    85,    83,     2,     0,     0,    21,
       0,    81,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     8,    10,     1,     3,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    83,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      82,   181,     4,   171,   124,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   176,   156,   157,   120,   113,
     132,   126,   127,   128,   130,   116,   131,   133,   114,   125,
     121,   134,   138,   117,   162,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   115,   118,   119,   122,   123,   129,   135,   136,   137,
     149,   150,   151,   152,   153,   154,   155,   158,   159,   160,
     161,   163,   164,   165,   166,   167,   168,   169,   170,   172,
     173,   174,   175,   177,   178,   179,   180,    86,    84,     9,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     5,    72,    73,    71,     0,    66,     0,    64,
      69,    70,    67,    77,    75,    76,    74,    68,     7,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,    56,    55,    58,    57,    60,    59,     0,    62,     0,
      63,    65,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    44,    45,    46,    47,    49,
       0,    51,     0,    53,     0,    54,    61,     0,     0,     0,
       0,     0,     0,    48,    50,    52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,   191,  -187,     0,   -22,     8,    -6,    36,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -164,  -154,    -4,    -5,  -188,  -148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,   226,    23,     8,     9,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,   220,   227,    10,    11,   168,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     169,    22,    36,    70,    71,   167,   225,   228,   179,   231,
     233,   235,     2,     3,    24,   180,     2,     3,     1,   181,
      26,   182,   171,   202,   183,   221,   222,   223,   224,     2,
       3,   230,   184,   187,   170,   237,   203,     4,   172,   218,
     229,   204,   232,   234,   236,   186,     1,   205,     2,     3,
       4,   177,   173,   178,   174,   175,   176,     2,     3,   219,
     259,   206,   207,   185,   167,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,     4,   255,
     256,   257,   258,   208,   261,   262,   263,   264,   265,   266,
     209,   254,   210,   260,    27,   211,   212,   213,   214,   215,
     217,   240,   216,   270,   243,     2,     3,   274,   275,   241,
      28,    29,    30,    31,   244,   245,   246,    32,    33,   247,
      34,    35,   248,   268,   249,   250,     4,     1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     2,     3,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       2,     3,     1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   251,    36,    70,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   252,   253,   219,   271,
      36,    70,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,   267,    25,   239,   269,   272,
     238,     0,   273,     0,   169,     0,   201,     0,     0,   186,
       0,     0,     0,     0,     0,     0,   169,     0,     0,   242,
     169,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     2,     3,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166
};

static const yytype_int16 yycheck[] =
{
      22,     1,     8,     8,    99,    11,   193,   194,    22,   196,
     197,   198,    15,    16,     0,    29,    15,    16,     4,    21,
       3,    23,    26,   171,    26,   189,   190,   191,   192,    15,
      16,   195,    34,    37,    26,   199,    21,    36,    27,   187,
     194,    26,   196,   197,   198,    37,     4,    32,    15,    16,
      36,    30,    21,    32,    27,    26,    24,    15,    16,    26,
     247,     4,    27,    29,    70,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    36,   243,
     244,   245,   246,    21,   248,   249,   250,   251,   252,   253,
      25,   239,    33,   247,     4,    32,    30,     4,    34,    21,
       4,    22,    35,   267,    17,    15,    16,   271,   272,    25,
      20,    21,    22,    23,    17,    17,    17,    27,    28,    17,
      30,    31,    17,    19,    18,    17,    36,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    18,   170,   170,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    17,    17,    26,    17,
     186,   186,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    18,     5,   201,    19,    17,
     200,    -1,    19,    -1,   226,    -1,   170,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   219,
     242,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    15,    16,    36,   101,   102,   103,   106,   107,
     143,   144,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,   104,   105,     0,   102,     3,     4,    20,    21,
      22,    23,    27,    28,    30,    31,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     144,    99,   146,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   107,   145,   105,
     106,   143,    27,    21,    27,    26,    24,    30,    32,    22,
      29,    21,    23,    26,    34,    29,   106,   143,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   108,   146,    21,    26,    32,     4,    27,    21,    25,
      33,    32,    30,     4,    34,    21,    35,     4,   146,    26,
     141,   141,   141,   141,   141,   103,   104,   142,   103,   142,
     141,   103,   142,   103,   142,   103,   142,   141,   104,   143,
      22,    25,   104,    17,    17,    17,    17,    17,    17,    18,
      17,    18,    17,    17,   146,   141,   141,   141,   141,   103,
     142,   141,   141,   141,   141,   141,   141,    18,    19,    19,
     141,    17,    17,    19,   141,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   102,   102,   102,   102,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   121,   121,   122,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   143,   143,   144,   144,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     4,     6,     4,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     5,     5,     8,     5,
       8,     5,     8,     5,     5,     3,     3,     3,     3,     3,
       3,     5,     3,     4,     3,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
        case 5:
#line 87 "vas.y" /* yacc.c:1646  */
    {
			labtab[(yyvsp[-3])] = pc ;
		}
#line 1488 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 91 "vas.y" /* yacc.c:1646  */
    {
			labtab[(yyvsp[-5])] = pc ;
		}
#line 1496 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "vas.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) ; }
#line 1502 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "vas.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]) * 10 + (yyvsp[0]) ;
		}
#line 1510 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 107 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x0 ; }
#line 1516 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 108 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x1 ; }
#line 1522 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 109 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x2 ; }
#line 1528 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x3 ; }
#line 1534 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 111 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x4 ; }
#line 1540 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x5 ; }
#line 1546 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 113 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x6 ; }
#line 1552 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 114 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x7 ; }
#line 1558 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x8 ; }
#line 1564 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 116 "vas.y" /* yacc.c:1646  */
    { (yyval) = 0x9 ; }
#line 1570 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 144 "vas.y" /* yacc.c:1646  */
    { pbyte( I_HALT ) ; }
#line 1576 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "vas.y" /* yacc.c:1646  */
    { pbyte( I_NOP ) ; }
#line 1582 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 150 "vas.y" /* yacc.c:1646  */
    { pbyte( I_TRAP ) ; }
#line 1588 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 154 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_ADD ) ;
			pbyte( ((yyvsp[-2]) << 4) | (yyvsp[0]) ) ;
		}
#line 1597 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 161 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_SUB ) ;
			pbyte( ((yyvsp[-2]) << 4) | (yyvsp[0]) ) ;
		}
#line 1606 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 168 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_MUL ) ;
			pbyte( ((yyvsp[-2]) << 4) | (yyvsp[0]) ) ;
		}
#line 1615 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 175 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_DIV ) ;
			pbyte( ((yyvsp[-2]) << 4) | (yyvsp[0]) ) ;
		}
#line 1624 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 182 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_STI ) ;
			pbyte( ((yyvsp[-5]) << 4) | (yyvsp[-1]) ) ;
			pword( (yyvsp[-3]) ) ;
		}
#line 1634 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 188 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_STI ) ;
			pbyte( (yyvsp[-2]) << 4 ) ;
			pword( labtab[(yyvsp[0])] ) ;
		}
#line 1644 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 196 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_LDI ) ;
			pbyte( ((yyvsp[-3]) << 4) | (yyvsp[0]) ) ;
			pword( (yyvsp[-5]) ) ;
		}
#line 1654 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 202 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_LDI ) ;
			pbyte( (yyvsp[0]) ) ;
			pword( labtab[(yyvsp[-2])] ) ;
		}
#line 1664 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 210 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_LDA ) ;
			pbyte( ((yyvsp[-3]) << 4) | (yyvsp[0]) ) ;
			pword( (yyvsp[-5]) ) ;
		}
#line 1674 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 216 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_LDA ) ;
			pbyte( (yyvsp[0]) ) ;
			pword( labtab[(yyvsp[-2])] ) ;
		}
#line 1684 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 224 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_LDR ) ;
			pbyte( ((yyvsp[-2]) << 4) | (yyvsp[0]) ) ;
		}
#line 1693 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 231 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_BZE ) ;
			pword( (yyvsp[0]) ) ;
		}
#line 1702 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 236 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_BZE ) ;
			pword( labtab[(yyvsp[0])] - pc + 1 ) ;
		}
#line 1711 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 243 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_BNZ ) ;
			pword( (yyvsp[0]) ) ;
		}
#line 1720 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 248 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_BNZ ) ;
			pword( labtab[(yyvsp[0])] - pc + 1 ) ;
		}
#line 1729 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 255 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_BRA ) ;
			pword( (yyvsp[0]) ) ;
		}
#line 1738 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 260 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_BRA ) ;
			pword( labtab[(yyvsp[0])] - pc + 1 ) ;
		}
#line 1747 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 267 "vas.y" /* yacc.c:1646  */
    {
			pbyte( I_BAL ) ;
			pbyte( ((yyvsp[-2]) << 4) | (yyvsp[0]) ) ;
		}
#line 1756 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 274 "vas.y" /* yacc.c:1646  */
    {
			pbyte( (yyvsp[0]) ) ;
		}
#line 1764 "vas.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 327 "vas.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) ; }
#line 1770 "vas.tab.c" /* yacc.c:1646  */
    break;


#line 1774 "vas.tab.c" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 442 "vas.y" /* yacc.c:1906  */


int   main( int   argc,
	    char *argv[] )

/* Takes a single argument, the file to assemble, which must end in ".vas".
   Send the output to the corresponding file, but ending in ".vam". */

{
	char *ifile ;
	char *ofile ;

	/* Decode the arguments, and setup stdin and stdout accordingly */

	ofile = decode_args( argc, argv ) ;
	ifile = argv[1] ;			/* Do after decode has checked
						   number of file is OK */
	setup_files( ifile, ofile ) ;

	/* First pass sets up labels */

	pass = 1 ;
	yyparse() ;

	/* Second pass generates code */

	rewind( stdin ) ;
	pc   = 0 ;
	pass = 2 ;
	yyparse() ;

	return 0;
}	/* int   main( int argc, char *argv[]) */


char  *decode_args( int   argc,
		    char *argv[] )

/* There should be a single argument, ending in ".vas". Construct a result
   ending in ".vam". */

{
  	char *ofile ;			/* Constructed output file */
	int   len ;			/* Length of input file */

	/* Should be a single argument */

	if( argc != 2 )
	{
	  	fprintf( stderr, "vas: single argument expected\n" ) ;
		exit( 0 ) ;
	}

	/* Find suffix, which must be ".vas" */

	len = strlen( argv[1] ) - strlen( ".vas" ) ;

	if( (len < 1) || (strcmp( argv[1] + len, ".vas" ) != 0) )
	{
	  	fprintf( stderr, "vas: source file must end in \".vas\".\n" ) ;
		exit( 0 ) ;
	}

	/* Allocate for ofile */

	ofile = (char *)malloc( len + strlen( ".vas" ) + 1 ) ;

	if( ofile == NULL )
	{
	  	fprintf( stderr, "vas: decode_args: malloc failed\n" ) ;
		exit( 0 ) ;
	}

	/* Construct the new output file */

	strncpy( ofile, argv[1], len + 1 ) ;	/* Root + '.' */
	strcat( ofile, "vam" ) ;

	return  ofile ;

}	/* decode_args() */


void  setup_files( char *ifile,
		   char *ofile )

/* Substitute the given files for stdin and stdout, remembering that stdout
   should be a binary file */

{
  	/* Input is text. This is the default for DJGPP anyway */

  	if( freopen( ifile, "r", stdin ) == NULL )
	{
	  	perror( "vas: setup_files: freopen( ifile )" ) ;
		exit( 0 ) ;
	}

	/* Output is binary. Force this for DOS using DJGPP with the b flag to
	   freopen. */

#ifdef DJGPP
  	if( freopen( ofile, "wb", stdout ) == NULL )
#else
  	if( freopen( ofile, "w", stdout ) == NULL )
#endif
	{
	  	perror( "vas: setup_files: freopen( ofile )" ) ;
		exit( 0 ) ;
	}

}	/* setup_files() */


int  yylex( void )
{
	return getchar() ;

}	/* int  yylex( void ) */


int   yyerror( char *s )

{
	fprintf( stderr, "yyerror: %s\n", s ) ;
	return  0 ;

}	/* void  yyerror( char *s ) */


void  pbyte( int  n )

/* Put out the single byte n (on pass 2), advancing pc */

{
	if( pass == 2 )
		putchar( n ) ;

	pc++ ;

}	/* void  pbyte( int  n ) */


void  pword( int  n )

/* Put out the word n (on pass 2), advancing pc */

{
	if( pass == 2 )
	{
		putchar( n >> 24 ) ;
		putchar( n >> 16 ) ;
		putchar( n >>  8 ) ;
		putchar( n       ) ;
	}

	pc += 4 ;

}	/* void  pword( int  n ) */
