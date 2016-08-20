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


/* Substitute the variable and function names.  */
#define yyparse         sqlstatement_parse
#define yylex           sqlstatement_lex
#define yyerror         sqlstatement_error
#define yydebug         sqlstatement_debug
#define yynerrs         sqlstatement_nerrs


/* Copy the first part of user declarations.  */
#line 18 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:339  */

#include <qglobal.h>
#include <QList>
#include <cstdlib>
#include "qgssqlstatement.h"

#ifdef _MSC_VER
#  pragma warning( disable: 4065 )  // switch statement contains 'default' but no 'case' labels
#  pragma warning( disable: 4702 )  // unreachable code
#endif

// don't redeclare malloc/free
#define YYINCLUDED_STDLIB_H 1

struct sqlstatement_parser_context;
#include "qgssqlstatementparser.hpp"

//! from lexer
typedef void* yyscan_t;
typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern int sqlstatement_lex_init(yyscan_t* scanner);
extern int sqlstatement_lex_destroy(yyscan_t scanner);
extern int sqlstatement_lex(YYSTYPE* yylval_param, yyscan_t yyscanner);
extern YY_BUFFER_STATE sqlstatement__scan_string(const char* buffer, yyscan_t scanner);

/** returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
    (interface function to be called from QgsSQLStatement)
  */
QgsSQLStatement::Node* parse(const QString& str, QString& parserErrorMsg);

/** error handler for bison */
void sqlstatement_error(sqlstatement_parser_context* parser_ctx, const QString& errorMsg);

struct sqlstatement_parser_context
{
  // lexer context
  yyscan_t flex_scanner;

  // varible where the parser error will be stored
  QString errorMsg;
  // root node of the sqlstatement
  QgsSQLStatement::NodeSelect* rootNode;

  QgsSQLStatement::Node* whereExp;

  QList<QgsSQLStatement::NodeJoin*> joinList;

  QList<QgsSQLStatement::NodeColumnSorted*> orderByList;

  sqlstatement_parser_context() : rootNode( nullptr ), whereExp( nullptr ) {}

  void setWhere( QgsSQLStatement::Node* whereExp ) { this->whereExp = whereExp; }

  void setJoins( QList<QgsSQLStatement::NodeJoin*> joinList ) { this->joinList = joinList; }

  void setOrderBy( QList<QgsSQLStatement::NodeColumnSorted*> orderByList ) { this->orderByList = orderByList; }
};

#define scanner parser_ctx->flex_scanner

// we want verbose error messages
#define YYERROR_VERBOSE 1

#define BINOP(x, y, z)  new QgsSQLStatement::NodeBinaryOperator(x, y, z)


#line 139 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:339  */

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
   by #include "qgssqlstatementparser.hpp".  */
#ifndef YY_SQLSTATEMENT_C_QGIS_QGISBUILD_2_16_1_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED
# define YY_SQLSTATEMENT_C_QGIS_QGISBUILD_2_16_1_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int sqlstatement_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OR = 258,
    AND = 259,
    EQ = 260,
    NE = 261,
    LE = 262,
    GE = 263,
    LT = 264,
    GT = 265,
    LIKE = 266,
    IS = 267,
    PLUS = 268,
    MINUS = 269,
    MUL_OR_STAR = 270,
    DIV = 271,
    INTDIV = 272,
    MOD = 273,
    CONCAT = 274,
    POW = 275,
    NOT = 276,
    IN = 277,
    BETWEEN = 278,
    SELECT = 279,
    ALL = 280,
    DISTINCT = 281,
    CAST = 282,
    AS = 283,
    JOIN = 284,
    FROM = 285,
    ON = 286,
    USING = 287,
    WHERE = 288,
    ORDER = 289,
    BY = 290,
    ASC = 291,
    DESC = 292,
    LEFT = 293,
    RIGHT = 294,
    INNER = 295,
    OUTER = 296,
    CROSS = 297,
    FULL = 298,
    NATURAL = 299,
    UNION = 300,
    NUMBER_FLOAT = 301,
    NUMBER_INT = 302,
    NUMBER_INT64 = 303,
    BOOLEAN = 304,
    NULLVALUE = 305,
    STRING = 306,
    IDENTIFIER = 307,
    COMMA = 308,
    Unknown_CHARACTER = 309,
    UMINUS = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 93 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:355  */

  QgsSQLStatement::Node* node;
  QgsSQLStatement::NodeColumnRef* nodecolumnref;
  QgsSQLStatement::NodeSelectedColumn* nodeselectedcolumn;
  QgsSQLStatement::NodeSelect* nodeselect;
  QgsSQLStatement::NodeList* nodelist;
  QgsSQLStatement::NodeJoin* nodejoin;
  QgsSQLStatement::NodeTableDef* nodetabledef;
  QgsSQLStatement::NodeColumnSorted* nodecolumnsorted;
  QList<QgsSQLStatement::NodeColumnSorted*>* columnsortedlist;
  QList<QgsSQLStatement::NodeJoin*>* joinlist;
  QList<QgsSQLStatement::NodeTableDef*>* tablelist;
  QList<QgsSQLStatement::NodeSelectedColumn*>* selectedcolumnlist;
  double numberFloat;
  int    numberInt;
  qlonglong numberInt64;
  bool   boolVal;
  QString* text;
  QgsSQLStatement::BinaryOperator b_op;
  QgsSQLStatement::UnaryOperator u_op;
  QgsSQLStatement::JoinType jointype;
  QList<QString>* usinglist;

#line 259 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sqlstatement_parse (sqlstatement_parser_context* parser_ctx);

#endif /* !YY_SQLSTATEMENT_C_QGIS_QGISBUILD_2_16_1_SRC_CORE_QGSSQLSTATEMENTPARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 275 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,    57,     2,     2,     2,     2,    58,     2,     2,     2,
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
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   207,   207,   214,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   231,   232,   234,   235,   240,
     246,   255,   259,   265,   266,   267,   268,   269,   270,   272,
     277,   279,   285,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   302,   311,   315,   319,   326,   335,   339,
     344,   349,   356,   361,   367,   383,   402,   421,   445,   450,
     453,   454,   461,   465,   469,   473,   477,   481,   485,   489,
     496,   500,   508,   513,   521,   525,   531,   532,   539,   540,
     548,   552,   557,   561,   565,   572,   578,   587,   591
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "EQ", "NE", "LE", "GE",
  "LT", "GT", "LIKE", "IS", "PLUS", "MINUS", "MUL_OR_STAR", "DIV",
  "INTDIV", "MOD", "CONCAT", "POW", "NOT", "IN", "BETWEEN", "SELECT",
  "ALL", "DISTINCT", "CAST", "AS", "JOIN", "FROM", "ON", "USING", "WHERE",
  "ORDER", "BY", "ASC", "DESC", "LEFT", "RIGHT", "INNER", "OUTER", "CROSS",
  "FULL", "NATURAL", "UNION", "NUMBER_FLOAT", "NUMBER_INT", "NUMBER_INT64",
  "BOOLEAN", "NULLVALUE", "STRING", "IDENTIFIER", "COMMA",
  "Unknown_CHARACTER", "UMINUS", "'('", "')'", "'.'", "$accept", "root",
  "expr", "column_name", "expr_list", "expr_non_logical", "select_type",
  "select_statement", "selected_column_list", "selected_column",
  "as_clause", "opt_where", "join_qualifier", "join", "using_list",
  "join_list", "opt_joins", "opt_order_by", "sort_spec_list", "sort_spec",
  "table_def", "table_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    40,    41,    46
};
# endif

#define YYPACT_NINF -93

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    29,    15,   166,   -93,   -93,   -93,   -93,    45,    45,
     -93,   177,    20,   -93,   -93,   -93,   -93,   -93,   -93,   -46,
     177,   100,   -93,   305,   -24,   -93,    59,   -93,   -93,   285,
     177,   111,   -10,    57,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,    96,    25,    45,    46,   -93,   -93,
      45,    45,    45,    45,    45,    45,    45,    45,    61,   166,
     126,    64,   231,    70,    79,   -93,   257,   -44,   -93,   -93,
     -93,   277,   285,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,    80,    45,   177,    69,   -93,   229,   229,   110,   110,
     110,   110,   -93,   110,    -9,   -93,   157,   -93,    92,    -9,
      90,    93,   177,   -93,   177,   297,     0,    45,   -93,   -93,
     -15,   -13,   120,   122,   125,    61,    61,   -93,   -18,   123,
      98,   -93,    -9,   257,    17,    45,   -93,   305,   -93,   135,
     -93,   136,   -93,   -93,   -93,   -93,   102,   -93,   177,   132,
     -93,   -93,   -93,   305,   -93,   -93,   177,   113,   257,   149,
     -93,   257,   118,    79,   -93,    18,   105,   139,   -93,   119,
     -93,   -93,   -93,    79,   -93,   -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    44,     0,     0,     2,    45,    46,     1,     0,     0,
      52,     0,     0,    23,    24,    25,    26,    28,    27,    19,
       0,    50,    29,     3,     0,    49,    19,    41,    42,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    22,     0,    53,    20,
      30,     5,     4,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,    58,    33,    34,    35,    37,
      36,    38,    40,    39,    85,    88,    76,    48,     0,    54,
      19,     0,     0,    31,     0,     0,     0,     0,    86,    62,
       0,     0,     0,     0,     0,     0,     0,    74,    77,    60,
       0,    55,    56,    21,     0,     0,    15,    17,    63,     0,
      65,     0,    69,    68,    67,    87,     0,    75,     0,    78,
      43,    57,    16,    18,    64,    66,     0,     0,    61,     0,
      47,    70,     0,     0,    72,     0,    82,    79,    81,     0,
      71,    83,    84,     0,    73,    80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -93,    -3,   -63,   -60,    -5,   -93,   -93,   -93,   129,
     -92,   -93,   -93,    67,   -93,   -93,   -93,   -93,   -93,    26,
      30,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    66,    22,    67,    23,     3,     4,    24,    25,
      49,   139,   116,   117,   155,   118,   119,   150,   157,   158,
      95,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      21,   101,   108,    27,    28,    68,    58,   121,    29,   102,
      31,   109,    32,   103,   128,     7,   130,    33,     1,    47,
     110,   111,   112,   106,   113,   114,   129,    62,   131,    59,
     141,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    84,    69,    48,   124,    86,    87,    88,    89,    90,
      91,    92,    93,   102,     5,     6,    21,   126,     8,     9,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     102,   159,    12,   107,   142,   160,    30,   105,    44,    45,
      46,    83,    50,    51,    52,    53,    54,    55,    56,    57,
     156,    13,    14,    15,    16,    17,    18,    26,    85,   123,
     156,    20,   127,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    94,    70,    60,    69,    61,    81,    82,
     143,    44,    45,    46,     8,     9,    63,    99,    47,    56,
      57,   100,    11,   146,   147,   148,   104,    64,    12,     8,
       9,   161,   162,   151,   120,   135,   136,    11,    61,   132,
     122,   133,    48,    12,   134,   140,   138,    13,    14,    15,
      16,    17,    18,    26,   144,   145,   149,    20,    65,   152,
     154,   164,    13,    14,    15,    16,    17,    18,    26,     8,
       9,    10,    20,    65,   153,   137,   109,    11,    97,   165,
       8,     9,   163,    12,     0,   110,   111,   112,    11,   113,
     114,     0,     0,     0,    12,     0,     0,     0,     0,     0,
     115,     0,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,    20,    13,    14,    15,    16,    17,    18,    26,
       0,     0,     0,    20,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    52,    53,    54,    55,    56,    57,
       0,     0,    44,    45,    46,     0,     0,     0,     0,    98,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
      46,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   125,     0,     0,     0,     0,    44,    45,    46,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    50,    51,
      52,    53,    54,    55,    56,    57
};

static const yytype_int16 yycheck[] =
{
       3,    64,    94,     8,     9,    15,    30,    99,    11,    53,
      56,    29,    58,    57,    29,     0,    29,    20,    24,    28,
      38,    39,    40,    83,    42,    43,    41,    30,    41,    53,
     122,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    46,    52,    52,   104,    50,    51,    52,    53,    54,
      55,    56,    57,    53,    25,    26,    59,    57,    13,    14,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      53,    53,    27,     4,    57,    57,    56,    82,    21,    22,
      23,    56,    13,    14,    15,    16,    17,    18,    19,    20,
     153,    46,    47,    48,    49,    50,    51,    52,    52,   102,
     163,    56,   107,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    52,    57,    56,    52,    58,    22,    23,
     125,    21,    22,    23,    13,    14,    15,    57,    28,    19,
      20,    52,    21,    31,    32,   138,    56,    26,    27,    13,
      14,    36,    37,   146,    52,   115,   116,    21,    58,    29,
      57,    29,    52,    27,    29,    57,    33,    46,    47,    48,
      49,    50,    51,    52,    29,    29,    34,    56,    57,    56,
      52,    52,    46,    47,    48,    49,    50,    51,    52,    13,
      14,    15,    56,    57,    35,   118,    29,    21,    59,   163,
      13,    14,    53,    27,    -1,    38,    39,    40,    21,    42,
      43,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    56,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    15,    16,    17,    18,    19,    20,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       5,     6,     7,     8,     9,    10,    11,    12,    21,    22,
      23,     4,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    13,    14,
      15,    16,    17,    18,    19,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    60,    65,    66,    25,    26,     0,    13,    14,
      15,    21,    27,    46,    47,    48,    49,    50,    51,    52,
      56,    61,    62,    64,    67,    68,    52,    64,    64,    61,
      56,    56,    58,    61,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    21,    22,    23,    28,    52,    69,
      13,    14,    15,    16,    17,    18,    19,    20,    30,    53,
      56,    58,    61,    15,    26,    57,    61,    63,    15,    52,
      57,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    22,    23,    56,    64,    52,    64,    64,    64,    64,
      64,    64,    64,    64,    52,    79,    80,    68,    28,    57,
      52,    62,    53,    57,    56,    64,    63,     4,    69,    29,
      38,    39,    40,    42,    43,    53,    71,    72,    74,    75,
      52,    69,    57,    61,    63,     4,    57,    64,    29,    41,
      29,    41,    29,    29,    29,    79,    79,    72,    33,    70,
      57,    69,    57,    64,    29,    29,    31,    32,    61,    34,
      76,    61,    56,    35,    52,    73,    62,    77,    78,    53,
      57,    36,    37,    53,    52,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    78,    79,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     5,     6,     5,     6,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     6,     1,     2,     2,     7,     3,     1,
       1,     2,     1,     3,     4,     5,     5,     6,     2,     1,
       0,     2,     1,     2,     3,     2,     3,     2,     2,     2,
       4,     6,     1,     3,     1,     2,     0,     1,     0,     3,
       3,     1,     1,     2,     2,     1,     2,     3,     1
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
      yyerror (parser_ctx, YY_("syntax error: cannot back up")); \
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
                  Type, Value, parser_ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (parser_ctx);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser_ctx);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, sqlstatement_parser_context* parser_ctx)
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
                                              , parser_ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser_ctx); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, sqlstatement_parser_context* parser_ctx)
{
  YYUSE (yyvaluep);
  YYUSE (parser_ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 51: /* STRING  */
#line 193 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1251 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 52: /* IDENTIFIER  */
#line 193 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1257 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 61: /* expr  */
#line 190 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).node); }
#line 1263 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 62: /* column_name  */
#line 192 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).nodecolumnref); }
#line 1269 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 63: /* expr_list  */
#line 191 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).nodelist); }
#line 1275 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 64: /* expr_non_logical  */
#line 190 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).node); }
#line 1281 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 66: /* select_statement  */
#line 195 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).nodeselect); }
#line 1287 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 67: /* selected_column_list  */
#line 200 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { qDeleteAll(*((*yyvaluep).selectedcolumnlist)); delete ((*yyvaluep).selectedcolumnlist); }
#line 1293 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 68: /* selected_column  */
#line 196 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).nodeselectedcolumn); }
#line 1299 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 69: /* as_clause  */
#line 193 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).text); }
#line 1305 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 72: /* join  */
#line 198 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).nodejoin); }
#line 1311 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 73: /* using_list  */
#line 199 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).usinglist); }
#line 1317 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 74: /* join_list  */
#line 202 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { qDeleteAll(*((*yyvaluep).joinlist)); delete ((*yyvaluep).joinlist); }
#line 1323 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 77: /* sort_spec_list  */
#line 201 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { qDeleteAll(*((*yyvaluep).columnsortedlist)); delete ((*yyvaluep).columnsortedlist); }
#line 1329 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 78: /* sort_spec  */
#line 197 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).nodecolumnsorted); }
#line 1335 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 79: /* table_def  */
#line 194 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { delete ((*yyvaluep).nodetabledef); }
#line 1341 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;

    case 80: /* table_list  */
#line 203 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1257  */
      { qDeleteAll(*((*yyvaluep).tablelist)); delete ((*yyvaluep).tablelist); }
#line 1347 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (sqlstatement_parser_context* parser_ctx)
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
#line 207 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { parser_ctx->rootNode = (yyvsp[0].nodeselect); }
#line 1615 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 215 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.node) = (yyvsp[0].node);
        }
#line 1623 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 219 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1629 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 220 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1635 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 221 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1641 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 222 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1647 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 223 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1653 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 224 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1659 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 225 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1665 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 226 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1671 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 227 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1677 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 228 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1683 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 229 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeUnaryOperator((yyvsp[-1].u_op), (yyvsp[0].node)); }
#line 1689 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 231 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeInOperator((yyvsp[-4].node), (yyvsp[-1].nodelist), false);  }
#line 1695 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 232 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeInOperator((yyvsp[-5].node), (yyvsp[-1].nodelist), true); }
#line 1701 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 234 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeBetweenOperator((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), false);  }
#line 1707 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 235 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeBetweenOperator((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), true);  }
#line 1713 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 241 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodecolumnref) = new QgsSQLStatement::NodeColumnRef( *(yyvsp[0].text), false );
            delete (yyvsp[0].text);
        }
#line 1722 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 247 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodecolumnref) = new QgsSQLStatement::NodeColumnRef( *(yyvsp[-2].text), *(yyvsp[0].text), false );
            delete (yyvsp[-2].text);
            delete (yyvsp[0].text);
        }
#line 1732 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 256 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.nodelist) = (yyvsp[-2].nodelist); (yyvsp[-2].nodelist)->append((yyvsp[0].node));
       }
#line 1740 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 259 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.nodelist) = new QgsSQLStatement::NodeList(); (yyval.nodelist)->append((yyvsp[0].node)); }
#line 1746 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 265 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberFloat)) ); }
#line 1752 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 266 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberInt)) ); }
#line 1758 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 267 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].numberInt64)) ); }
#line 1764 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 268 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant((yyvsp[0].boolVal)) ); }
#line 1770 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 269 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant(*(yyvsp[0].text)) ); delete (yyvsp[0].text); }
#line 1776 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 270 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeLiteral( QVariant() ); }
#line 1782 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 273 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.node) = (yyvsp[0].nodecolumnref);
        }
#line 1790 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 277 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1796 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 280 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.node) = new QgsSQLStatement::NodeFunction(*(yyvsp[-3].text), (yyvsp[-1].nodelist));
          delete (yyvsp[-3].text);
        }
#line 1805 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 286 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.node) = new QgsSQLStatement::NodeFunction(*(yyvsp[-2].text), new QgsSQLStatement::NodeList());
          delete (yyvsp[-2].text);
        }
#line 1814 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 291 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1820 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 292 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1826 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 293 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1832 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 294 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1838 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 295 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1844 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 296 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1850 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 297 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1856 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 298 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = BINOP((yyvsp[-1].b_op), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1862 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 299 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1868 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 300 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.node) = new QgsSQLStatement::NodeUnaryOperator( QgsSQLStatement::uoMinus, (yyvsp[0].node)); }
#line 1874 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 303 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.node) = new QgsSQLStatement::NodeCast((yyvsp[-3].node), *(yyvsp[-1].text));
            delete (yyvsp[-1].text);
        }
#line 1883 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 312 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.boolVal) = false;
        }
#line 1891 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 316 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.boolVal) = false;
        }
#line 1899 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 320 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.boolVal) = true;
        }
#line 1907 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 327 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodeselect) = new QgsSQLStatement::NodeSelect(*(yyvsp[-3].tablelist), *(yyvsp[-5].selectedcolumnlist), (yyvsp[-6].boolVal));
            delete (yyvsp[-5].selectedcolumnlist);
            delete (yyvsp[-3].tablelist);
        }
#line 1917 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 336 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.selectedcolumnlist) = (yyvsp[-2].selectedcolumnlist); (yyvsp[-2].selectedcolumnlist)->append((yyvsp[0].nodeselectedcolumn));
       }
#line 1925 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 340 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.selectedcolumnlist) = new QList<QgsSQLStatement::NodeSelectedColumn*>(); (yyval.selectedcolumnlist)->append((yyvsp[0].nodeselectedcolumn)); }
#line 1931 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 345 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn((yyvsp[0].node));
        }
#line 1939 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 350 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn((yyvsp[-1].node));
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[0].text));
            delete (yyvsp[0].text);
        }
#line 1949 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 357 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( new QgsSQLStatement::NodeColumnRef("*", true) );
        }
#line 1957 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 362 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( new QgsSQLStatement::NodeColumnRef(*(yyvsp[-2].text), "*", true) );
            delete (yyvsp[-2].text);
        }
#line 1966 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 368 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            // special case for COUNT(*), confirm it.
            if( (yyvsp[-3].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QString( QObject::tr("Syntax Error with %1(*).") ).arg(*(yyvsp[-3].text)));
                delete (yyvsp[-3].text);
                YYERROR;
            }
            delete (yyvsp[-3].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            nodeList->append( new QgsSQLStatement::NodeColumnRef("*", true) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( 
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
        }
#line 1985 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 384 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            // special case for COUNT(*), confirm it.
            if( (yyvsp[-4].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QString( QObject::tr("Syntax Error with %1(*).") ).arg(*(yyvsp[-4].text)));
                delete (yyvsp[-4].text);
                delete (yyvsp[0].text);
                YYERROR;
            }
            delete (yyvsp[-4].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            nodeList->append( new QgsSQLStatement::NodeColumnRef("*", true) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( 
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[0].text));
            delete (yyvsp[0].text);
        }
#line 2007 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 403 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            // special case for COUNT(DISTINCT x), confirm it.
            if( (yyvsp[-4].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QObject::tr(
                        "DISTINCT keyword can only be used in COUNT() operator.") );
                delete (yyvsp[-4].text);
                delete (yyvsp[-1].nodecolumnref);
                YYERROR;
            }
            delete (yyvsp[-4].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            (yyvsp[-1].nodecolumnref)->setDistinct();
            nodeList->append( (yyvsp[-1].nodecolumnref) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( 
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
        }
#line 2029 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 422 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            // special case for COUNT(DISTINCT x), confirm it.
            if( (yyvsp[-5].text)->compare("COUNT", Qt::CaseInsensitive) != 0 )
            {
                sqlstatement_error(parser_ctx, QObject::tr(
                        "DISTINCT keyword can only be used in COUNT() operator.") );
                delete (yyvsp[-5].text);
                delete (yyvsp[-2].nodecolumnref);
                delete (yyvsp[0].text);
                YYERROR;
            }
            delete (yyvsp[-5].text);
            QgsSQLStatement::NodeList* nodeList = new QgsSQLStatement::NodeList();
            (yyvsp[-2].nodecolumnref)->setDistinct();
            nodeList->append( (yyvsp[-2].nodecolumnref) );
            (yyval.nodeselectedcolumn) = new QgsSQLStatement::NodeSelectedColumn( 
                    new QgsSQLStatement::NodeFunction( "COUNT", nodeList) );
            (yyval.nodeselectedcolumn)->setAlias(*(yyvsp[0].text));
            delete (yyvsp[0].text);
        }
#line 2054 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 446 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.text) = (yyvsp[0].text);
        }
#line 2062 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 455 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            parser_ctx->setWhere((yyvsp[0].node));
        }
#line 2070 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 462 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.jointype) = QgsSQLStatement::jtDefault;
        }
#line 2078 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 466 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.jointype) = QgsSQLStatement::jtLeft;
        }
#line 2086 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 470 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.jointype) = QgsSQLStatement::jtLeftOuter;
        }
#line 2094 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 474 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.jointype) = QgsSQLStatement::jtRight;
        }
#line 2102 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 478 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.jointype) = QgsSQLStatement::jtRightOuter;
        }
#line 2110 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 482 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.jointype) = QgsSQLStatement::jtFull;
        }
#line 2118 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 486 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.jointype) = QgsSQLStatement::jtCross;
        }
#line 2126 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 490 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.jointype) = QgsSQLStatement::jtInner;
        }
#line 2134 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 497 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodejoin) = new QgsSQLStatement::NodeJoin((yyvsp[-2].nodetabledef), (yyvsp[0].node), (yyvsp[-3].jointype));
        }
#line 2142 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 501 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodejoin) = new QgsSQLStatement::NodeJoin((yyvsp[-4].nodetabledef), *(yyvsp[-1].usinglist), (yyvsp[-5].jointype));
            delete (yyvsp[-1].usinglist);
        }
#line 2151 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 509 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.usinglist) = new QList<QString>(); (yyval.usinglist)->push_back(*(yyvsp[0].text));
          delete (yyvsp[0].text);
        }
#line 2160 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 514 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.usinglist) = (yyvsp[-2].usinglist); (yyvsp[-2].usinglist)->push_back(*(yyvsp[0].text));
          delete (yyvsp[0].text);
        }
#line 2169 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 522 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.joinlist) = new QList<QgsSQLStatement::NodeJoin*>(); (yyval.joinlist)->push_back((yyvsp[0].nodejoin));
        }
#line 2177 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 526 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.joinlist) = (yyvsp[-1].joinlist); (yyvsp[-1].joinlist)->push_back((yyvsp[0].nodejoin));
        }
#line 2185 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 533 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            parser_ctx->setJoins( *(yyvsp[0].joinlist) );
            delete (yyvsp[0].joinlist);
        }
#line 2194 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 541 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          parser_ctx->setOrderBy(*(yyvsp[0].columnsortedlist));
          delete (yyvsp[0].columnsortedlist);
      }
#line 2203 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 549 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.columnsortedlist) = (yyvsp[-2].columnsortedlist); (yyvsp[-2].columnsortedlist)->push_back((yyvsp[0].nodecolumnsorted));
       }
#line 2211 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 553 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.columnsortedlist) = new QList<QgsSQLStatement::NodeColumnSorted*>(); (yyval.columnsortedlist)->push_back((yyvsp[0].nodecolumnsorted)); }
#line 2217 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 558 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[0].nodecolumnref), true );
        }
#line 2225 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 562 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[-1].nodecolumnref), true );
        }
#line 2233 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 566 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
            (yyval.nodecolumnsorted) = new QgsSQLStatement::NodeColumnSorted( (yyvsp[-1].nodecolumnref), false );
        }
#line 2241 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 573 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[0].text));
        delete (yyvsp[0].text);
    }
#line 2250 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 579 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
        (yyval.nodetabledef) = new QgsSQLStatement::NodeTableDef(*(yyvsp[-1].text), *(yyvsp[0].text));
        delete (yyvsp[-1].text);
        delete (yyvsp[0].text);
    }
#line 2260 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 588 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    {
          (yyval.tablelist) = (yyvsp[-2].tablelist); (yyvsp[-2].tablelist)->push_back((yyvsp[0].nodetabledef));
       }
#line 2268 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 592 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1646  */
    { (yyval.tablelist) = new QList<QgsSQLStatement::NodeTableDef*>(); (yyval.tablelist)->push_back((yyvsp[0].nodetabledef)); }
#line 2274 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
    break;


#line 2278 "C:/QGIS/QGISBuild_2_16_1/src/core/qgssqlstatementparser.cpp" /* yacc.c:1646  */
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
      yyerror (parser_ctx, YY_("syntax error"));
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
        yyerror (parser_ctx, yymsgp);
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
                      yytoken, &yylval, parser_ctx);
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
                  yystos[yystate], yyvsp, parser_ctx);
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
  yyerror (parser_ctx, YY_("memory exhausted"));
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
                  yytoken, &yylval, parser_ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, parser_ctx);
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
#line 595 "C:/QGIS/QGIS_2_16_1/src/core/qgssqlstatementparser.yy" /* yacc.c:1906  */



// returns parsed tree, otherwise returns nullptr and sets parserErrorMsg
QgsSQLStatement::Node* parse(const QString& str, QString& parserErrorMsg)
{
  sqlstatement_parser_context ctx;
  ctx.rootNode = 0;

  sqlstatement_lex_init(&ctx.flex_scanner);
  sqlstatement__scan_string(str.toUtf8().constData(), ctx.flex_scanner);
  int res = sqlstatement_parse(&ctx);
  sqlstatement_lex_destroy(ctx.flex_scanner);

  // list should be empty when parsing was OK
  if (res == 0) // success?
  {
    ctx.rootNode->setWhere(ctx.whereExp);
    ctx.rootNode->setJoins(ctx.joinList);
    ctx.rootNode->setOrderBy(ctx.orderByList);
    return ctx.rootNode;
  }
  else // error?
  {
    parserErrorMsg = ctx.errorMsg;
    delete ctx.rootNode;
    delete ctx.whereExp;
    qDeleteAll(ctx.joinList);
    qDeleteAll(ctx.orderByList);
    return nullptr;
  }
}


void sqlstatement_error(sqlstatement_parser_context* parser_ctx, const QString& errorMsg)
{
  parser_ctx->errorMsg = errorMsg;
}

