/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ap3Bison.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;
FILE* output_file;

void ILOC_Code(char *op, char * r1, char * r2);

char str[101];
char str2[100];
int count = 1;

void yyerror(const char* s); 


#line 91 "ap3Bison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ap3Bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROGRAM = 3,                    /* PROGRAM  */
  YYSYMBOL_L_BRACE = 4,                    /* L_BRACE  */
  YYSYMBOL_R_BRACE = 5,                    /* R_BRACE  */
  YYSYMBOL_L_PAREN = 6,                    /* L_PAREN  */
  YYSYMBOL_R_PAREN = 7,                    /* R_PAREN  */
  YYSYMBOL_SEMICOLON = 8,                  /* SEMICOLON  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_INT_TYPE = 10,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 11,                /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 12,               /* STRING_TYPE  */
  YYSYMBOL_ID = 13,                        /* ID  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_SUM = 18,                       /* SUM  */
  YYSYMBOL_SUB = 19,                       /* SUB  */
  YYSYMBOL_MUL = 20,                       /* MUL  */
  YYSYMBOL_DIV = 21,                       /* DIV  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_LT = 24,                        /* LT  */
  YYSYMBOL_GT = 25,                        /* GT  */
  YYSYMBOL_LTE = 26,                       /* LTE  */
  YYSYMBOL_GTE = 27,                       /* GTE  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_FOR = 30,                       /* FOR  */
  YYSYMBOL_IN = 31,                        /* IN  */
  YYSYMBOL_OUT = 32,                       /* OUT  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_type = 35,                      /* type  */
  YYSYMBOL_cmds = 36,                      /* cmds  */
  YYSYMBOL_cmd = 37,                       /* cmd  */
  YYSYMBOL_declarations = 38,              /* declarations  */
  YYSYMBOL_declaration = 39,               /* declaration  */
  YYSYMBOL_att = 40,                       /* att  */
  YYSYMBOL_value = 41,                     /* value  */
  YYSYMBOL_term = 42,                      /* term  */
  YYSYMBOL_term_for = 43,                  /* term_for  */
  YYSYMBOL_exp = 44,                       /* exp  */
  YYSYMBOL_mat_op = 45,                    /* mat_op  */
  YYSYMBOL_relation = 46,                  /* relation  */
  YYSYMBOL_rel_op = 47,                    /* rel_op  */
  YYSYMBOL_condition = 48,                 /* condition  */
  YYSYMBOL_else = 49,                      /* else  */
  YYSYMBOL_loop = 50,                      /* loop  */
  YYSYMBOL_in = 51,                        /* in  */
  YYSYMBOL_input = 52,                     /* input  */
  YYSYMBOL_out = 53,                       /* out  */
  YYSYMBOL_outputs = 54                    /* outputs  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   105

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  100

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    59,    60,    61,    64,    65,    68,    69,
      70,    71,    72,    73,    76,    77,    80,    83,    91,    92,
      93,    96,    97,    98,    99,   103,   104,   106,   107,   108,
     111,   120,   129,   138,   149,   150,   153,   154,   155,   156,
     157,   158,   161,   164,   165,   168,   171,   174,   175,   176,
     179,   182,   183
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PROGRAM", "L_BRACE",
  "R_BRACE", "L_PAREN", "R_PAREN", "SEMICOLON", "COMMA", "INT_TYPE",
  "FLOAT_TYPE", "STRING_TYPE", "ID", "ASSIGN", "STRING", "INT", "FLOAT",
  "SUM", "SUB", "MUL", "DIV", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "IF",
  "ELSE", "FOR", "IN", "OUT", "$accept", "program", "type", "cmds", "cmd",
  "declarations", "declaration", "att", "value", "term", "term_for", "exp",
  "mat_op", "relation", "rel_op", "condition", "else", "loop", "in",
  "input", "out", "outputs", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-22)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      18,    21,    39,     6,   -22,   -22,   -22,   -22,    23,    35,
      36,    45,    31,    40,     6,   -22,    17,   -22,   -22,   -22,
     -22,   -22,    -5,    37,    42,     7,    44,   -22,   -22,   -22,
      37,   -22,   -22,   -22,   -22,    54,    53,    66,   -22,   -22,
     -22,    66,    58,    52,    59,    60,   -22,    28,    63,   -10,
     -22,    37,    37,    37,    37,   -22,   -22,   -22,   -22,   -22,
     -22,    37,    67,    -9,     7,    64,   -22,   -22,   -22,   -22,
      68,    -6,    -6,   -22,   -22,    38,     6,   -22,   -22,    65,
     -22,   -22,    70,    69,    37,   -22,    47,    71,    76,   -22,
      37,     6,    38,    74,    77,    90,   -22,     6,    91,   -22
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     6,     1,     3,     4,     5,     0,     0,
       0,     0,     0,     0,     6,     9,    14,     8,    10,    11,
      12,    13,    34,    34,     0,    34,     0,     2,     7,    15,
       0,    23,    20,    22,    21,     0,     0,    18,    24,    28,
      19,     0,     0,     0,    51,     0,    16,     0,    28,    47,
      17,     0,     0,     0,     0,    36,    37,    38,    39,    40,
      41,     0,     0,     0,    34,     0,    27,    29,    48,    49,
       0,    30,    31,    32,    33,    35,     6,    26,    25,     0,
      52,    50,     0,     0,    34,    46,    43,     0,     0,    42,
       0,     6,     0,    24,     0,     0,    44,     6,     0,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -22,   -22,   -22,   -14,   -22,    79,   -22,   -22,    75,   -21,
     -22,     8,    72,   -20,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    12,    13,    14,    15,    16,    17,    44,    37,
      79,    38,    39,    40,    61,    18,    89,    19,    20,    70,
      21,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      28,    30,    41,    42,    77,    68,    69,    78,    31,    47,
      32,    33,    34,    30,    53,    54,     5,     6,     7,     8,
      31,     1,    32,    33,    34,     3,    35,     5,     6,     7,
      71,    72,    73,    74,     9,    66,    10,    22,    11,     4,
      75,    23,    24,    30,    26,    27,    51,    52,    53,    54,
      31,    25,    46,    33,    34,    43,    51,    52,    53,    54,
      49,    50,    83,    41,    87,    62,    63,    65,    64,    92,
      67,    76,    81,    84,    86,    82,    88,    94,    85,    90,
      91,    95,    96,    98,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    97,    29,    99,    36,    93,     0,
       0,     0,    48,     0,     0,    80
};

static const yytype_int8 yycheck[] =
{
      14,     6,    23,    23,    13,    15,    16,    16,    13,    30,
      15,    16,    17,     6,    20,    21,    10,    11,    12,    13,
      13,     3,    15,    16,    17,     4,    31,    10,    11,    12,
      51,    52,    53,    54,    28,     7,    30,    14,    32,     0,
      61,     6,     6,     6,    13,     5,    18,    19,    20,    21,
      13,     6,     8,    16,    17,    13,    18,    19,    20,    21,
       6,     8,    76,    84,    84,     7,    14,     7,     9,    90,
       7,     4,     8,     8,     5,     7,    29,    91,     8,     8,
       4,     7,     5,    97,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     4,    16,     5,    22,    90,    -1,
      -1,    -1,    30,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    34,     4,     0,    10,    11,    12,    13,    28,
      30,    32,    35,    36,    37,    38,    39,    40,    48,    50,
      51,    53,    14,     6,     6,     6,    13,     5,    36,    38,
       6,    13,    15,    16,    17,    31,    41,    42,    44,    45,
      46,    42,    46,    13,    41,    54,     8,    42,    45,     6,
       8,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    47,     7,    14,     9,     7,     7,     7,    15,    16,
      52,    42,    42,    42,    42,    42,     4,    13,    16,    43,
      54,     8,     7,    36,     8,     8,     5,    46,    29,    49,
       8,     4,    42,    44,    36,     7,     5,     4,    36,     5
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    35,    36,    36,    37,    37,
      37,    37,    37,    37,    38,    38,    39,    40,    41,    41,
      41,    42,    42,    42,    42,    43,    43,    44,    44,    44,
      45,    45,    45,    45,    46,    46,    47,    47,    47,    47,
      47,    47,    48,    49,    49,    50,    51,    52,    52,    52,
      53,    54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     0,     2,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     3,     3,     0,     3,     1,     1,     1,     1,
       1,     1,     8,     0,     4,    13,     7,     0,     1,     1,
       5,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: PROGRAM L_BRACE cmds R_BRACE  */
#line 53 "ap3Bison.y"
                                      {
                                        printf("\n*program\n ");
                                        fclose(output_file); 
                                      }
#line 1196 "ap3Bison.tab.c"
    break;

  case 3: /* type: INT_TYPE  */
#line 59 "ap3Bison.y"
                                       {printf("\n*type - INT_TYPE");}
#line 1202 "ap3Bison.tab.c"
    break;

  case 4: /* type: FLOAT_TYPE  */
#line 60 "ap3Bison.y"
                                       {printf("\n*type - FLOAT_TYPE");}
#line 1208 "ap3Bison.tab.c"
    break;

  case 5: /* type: STRING_TYPE  */
#line 61 "ap3Bison.y"
                                       {printf("\n*type - STRING_TYPE");}
#line 1214 "ap3Bison.tab.c"
    break;

  case 6: /* cmds: %empty  */
#line 64 "ap3Bison.y"
                                       {printf("\n*cmds - null");}
#line 1220 "ap3Bison.tab.c"
    break;

  case 7: /* cmds: cmd cmds  */
#line 65 "ap3Bison.y"
                                       {printf("\n*cmds ");}
#line 1226 "ap3Bison.tab.c"
    break;

  case 8: /* cmd: att  */
#line 68 "ap3Bison.y"
                                       {printf("\n*cmd - att");}
#line 1232 "ap3Bison.tab.c"
    break;

  case 10: /* cmd: condition  */
#line 70 "ap3Bison.y"
                                       {printf("\n*cmd - condition");}
#line 1238 "ap3Bison.tab.c"
    break;

  case 11: /* cmd: loop  */
#line 71 "ap3Bison.y"
                                       {printf("\n*cmd - loop");}
#line 1244 "ap3Bison.tab.c"
    break;

  case 12: /* cmd: in  */
#line 72 "ap3Bison.y"
                                       {printf("\n*cmd - in");}
#line 1250 "ap3Bison.tab.c"
    break;

  case 13: /* cmd: out  */
#line 73 "ap3Bison.y"
                                       {printf("\n*cmd - out");}
#line 1256 "ap3Bison.tab.c"
    break;

  case 14: /* declarations: %empty  */
#line 76 "ap3Bison.y"
                                       {printf("\n*declarations - null");}
#line 1262 "ap3Bison.tab.c"
    break;

  case 15: /* declarations: declaration declarations  */
#line 77 "ap3Bison.y"
                              {printf("\n*declarations ");}
#line 1268 "ap3Bison.tab.c"
    break;

  case 16: /* declaration: type ID SEMICOLON  */
#line 80 "ap3Bison.y"
                                       {printf("\n*declaration - type ID SEMICOLON");}
#line 1274 "ap3Bison.tab.c"
    break;

  case 17: /* att: ID ASSIGN value SEMICOLON  */
#line 83 "ap3Bison.y"
                                       {
                                        // printf("\n*att - ID ASSIGN value SEMICOLON ");
                                        // fprintf(output_file, "loadI %s => r%d\n", $3, temp_counter);
                                        // fprintf(output_file, "storeAI r%d => %s\n", temp_counter, $1);
                                        // temp_counter++;
                                       }
#line 1285 "ap3Bison.tab.c"
    break;

  case 18: /* value: term  */
#line 91 "ap3Bison.y"
                                       {printf("\n*value - term ");}
#line 1291 "ap3Bison.tab.c"
    break;

  case 19: /* value: relation  */
#line 92 "ap3Bison.y"
                                       {printf("\n*value - relation ");}
#line 1297 "ap3Bison.tab.c"
    break;

  case 20: /* value: STRING  */
#line 93 "ap3Bison.y"
                                       {printf("\n*value - STRING ");}
#line 1303 "ap3Bison.tab.c"
    break;

  case 21: /* term: FLOAT  */
#line 96 "ap3Bison.y"
                                       {printf("\n*term - FLOAT");}
#line 1309 "ap3Bison.tab.c"
    break;

  case 22: /* term: INT  */
#line 97 "ap3Bison.y"
                                       {printf("\n*term - INT");}
#line 1315 "ap3Bison.tab.c"
    break;

  case 23: /* term: ID  */
#line 98 "ap3Bison.y"
                                       {printf("\n*term - ID ");}
#line 1321 "ap3Bison.tab.c"
    break;

  case 24: /* term: exp  */
#line 99 "ap3Bison.y"
                                       {printf("\n*term - exp ");}
#line 1327 "ap3Bison.tab.c"
    break;

  case 27: /* exp: L_PAREN term R_PAREN  */
#line 106 "ap3Bison.y"
                                       {printf("\n*exp - ( term )" );}
#line 1333 "ap3Bison.tab.c"
    break;

  case 28: /* exp: mat_op  */
#line 107 "ap3Bison.y"
                                       {printf("\n*exp - term mat_op term" );}
#line 1339 "ap3Bison.tab.c"
    break;

  case 29: /* exp: L_PAREN mat_op R_PAREN  */
#line 108 "ap3Bison.y"
                                       {printf("\n*exp - ( term mat_op term )" );}
#line 1345 "ap3Bison.tab.c"
    break;

  case 30: /* mat_op: term SUM term  */
#line 111 "ap3Bison.y"
                                       {
                                          ILOC_Code("ADD", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str) = strdup(str);
                                        //  printf("\n*mat_op - SUM" );
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $1 , temp_counter); 
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $3 , temp_counter + 1); 
                                        //  fprintf(output_file, "ADD r%d, r%d => r%d\n", temp_counter, temp_counter + 1, temp_counter + 2); 
                                        //  fprintf(output_file, "STOREAI r%d => %s \n", temp_counter + 2, $1); 
                                        //  temp_counter += 3;
                                       }
#line 1359 "ap3Bison.tab.c"
    break;

  case 31: /* mat_op: term SUB term  */
#line 120 "ap3Bison.y"
                                       {
                                        ILOC_Code("SUB", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str) = strdup(str);
                                        //  printf("\n*mat_op - SUB" );
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $1 , temp_counter); 
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $3 , temp_counter + 1); 
                                        //  fprintf(output_file, "SUB r%d, r%d => r%d\n", temp_counter, temp_counter + 1, temp_counter + 2); 
                                        //  fprintf(output_file, "STOREAI r%d => %s \n", temp_counter + 2, $1); 
                                        //  temp_counter += 3;
                                       }
#line 1373 "ap3Bison.tab.c"
    break;

  case 32: /* mat_op: term MUL term  */
#line 129 "ap3Bison.y"
                                       {
                                         ILOC_Code("MUT", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str) = strdup(str);
                                        //  printf("\n*mat_op - MUL" );
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $1 , temp_counter); 
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $3 , temp_counter + 1); 
                                        //  fprintf(output_file, "MUL r%d, r%d => r%d\n", temp_counter, temp_counter + 1, temp_counter + 2); 
                                        //  fprintf(output_file, "STOREAI r%d => %s \n", temp_counter + 2, $1); 
                                        //  temp_counter += 3;
                                       }
#line 1387 "ap3Bison.tab.c"
    break;

  case 33: /* mat_op: term DIV term  */
#line 138 "ap3Bison.y"
                                       {
                                        ILOC_Code("DIV", (yyvsp[-2].str), (yyvsp[0].str)); (yyval.str) = strdup(str);
                                        //  printf("\n*mat_op - DIV" );
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $1 , temp_counter); 
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $3 , temp_counter + 1); 
                                        //  fprintf(output_file, "DIV r%d, r%d => r%d\n", temp_counter, temp_counter + 1, temp_counter + 2); 
                                        //  fprintf(output_file, "STOREAI r%d => %s \n", temp_counter + 2, $1); 
                                        //  temp_counter += 3; 
                                       }
#line 1401 "ap3Bison.tab.c"
    break;

  case 34: /* relation: %empty  */
#line 149 "ap3Bison.y"
                                       {printf("\n*relation - null");}
#line 1407 "ap3Bison.tab.c"
    break;

  case 35: /* relation: term rel_op term  */
#line 150 "ap3Bison.y"
                                       {printf("\n*relation - term rel_op term" );}
#line 1413 "ap3Bison.tab.c"
    break;

  case 36: /* rel_op: EQ  */
#line 153 "ap3Bison.y"
                                       {printf("\n*rel_op - EQ" );}
#line 1419 "ap3Bison.tab.c"
    break;

  case 37: /* rel_op: NEQ  */
#line 154 "ap3Bison.y"
                                       {printf("\n*rel_op - NEQ" );}
#line 1425 "ap3Bison.tab.c"
    break;

  case 38: /* rel_op: LT  */
#line 155 "ap3Bison.y"
                                       {printf("\n*rel_op - LT" );}
#line 1431 "ap3Bison.tab.c"
    break;

  case 39: /* rel_op: GT  */
#line 156 "ap3Bison.y"
                                       {printf("\n*rel_op - GT" );}
#line 1437 "ap3Bison.tab.c"
    break;

  case 40: /* rel_op: LTE  */
#line 157 "ap3Bison.y"
                                       {printf("\n*rel_op - LTE" );}
#line 1443 "ap3Bison.tab.c"
    break;

  case 41: /* rel_op: GTE  */
#line 158 "ap3Bison.y"
                                       {printf("\n*rel_op - GTE" );}
#line 1449 "ap3Bison.tab.c"
    break;

  case 42: /* condition: IF L_PAREN relation R_PAREN L_BRACE cmds R_BRACE else  */
#line 161 "ap3Bison.y"
                                                                 {printf("\n*condition - if");}
#line 1455 "ap3Bison.tab.c"
    break;

  case 43: /* else: %empty  */
#line 164 "ap3Bison.y"
                                       {printf("\n*condition - else null");}
#line 1461 "ap3Bison.tab.c"
    break;

  case 44: /* else: ELSE L_BRACE cmds R_BRACE  */
#line 165 "ap3Bison.y"
                                       {printf("\n*condition - else");}
#line 1467 "ap3Bison.tab.c"
    break;

  case 45: /* loop: FOR L_PAREN ID ASSIGN term_for SEMICOLON relation SEMICOLON exp R_PAREN L_BRACE cmds R_BRACE  */
#line 168 "ap3Bison.y"
                                                                                                   {printf("\n*loop");}
#line 1473 "ap3Bison.tab.c"
    break;

  case 46: /* in: ID ASSIGN IN L_PAREN input R_PAREN SEMICOLON  */
#line 171 "ap3Bison.y"
                                                          {printf("\n*in");}
#line 1479 "ap3Bison.tab.c"
    break;

  case 47: /* input: %empty  */
#line 174 "ap3Bison.y"
                                       {printf("\n*in - input - null");}
#line 1485 "ap3Bison.tab.c"
    break;

  case 48: /* input: STRING  */
#line 175 "ap3Bison.y"
                                       {printf("\n*in - input - string");}
#line 1491 "ap3Bison.tab.c"
    break;

  case 49: /* input: INT  */
#line 176 "ap3Bison.y"
                                       {printf("\n*in - input - int");}
#line 1497 "ap3Bison.tab.c"
    break;

  case 50: /* out: OUT L_PAREN outputs R_PAREN SEMICOLON  */
#line 179 "ap3Bison.y"
                                           {printf("\n*out");}
#line 1503 "ap3Bison.tab.c"
    break;

  case 51: /* outputs: value  */
#line 182 "ap3Bison.y"
                                       {printf("\n*out - output");}
#line 1509 "ap3Bison.tab.c"
    break;

  case 52: /* outputs: value COMMA outputs  */
#line 183 "ap3Bison.y"
                                       {printf("\n*out - outputs");}
#line 1515 "ap3Bison.tab.c"
    break;


#line 1519 "ap3Bison.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 186 "ap3Bison.y"


void ILOC_Code(char *op, char * r1, char * r2) {
    strcpy(str, "R"); 
    sprintf(str2, "%d", count);  
    strcat(str, str2); 
    fprintf(output_file, "%s, %s, %s, R%d\n", op, r1, r2, count++); 
    /* printf("%s, %s, %s, R%d\n", op, r1, r2, count++); */
}

int main(){
    yyin = stdin;
    output_file = fopen("output.il", "w");

    if (output_file == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        exit(EXIT_FAILURE);
    }

    do {
        yyparse();
    } while (!feof(yyin));

    return 0;
}

void yyerror(const char* s){
    fprintf(stderr, "%s\n", s);
    exit(1);
}
