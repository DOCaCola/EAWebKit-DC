
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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         cssyyparse
#define yylex           cssyylex
#define yyerror         cssyyerror
#define yylval          cssyylval
#define yychar          cssyychar
#define yydebug         cssyydebug
#define yynerrs         cssyynerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"


/*
 *  Copyright (C) 2002-2003 Lars Knoll (knoll@kde.org)
 *  Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
 *  Copyright (C) 2006 Alexey Proskuryakov (ap@nypop.com)
 *  Copyright (C) 2008 Eric Seidel <eric@webkit.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "config.h"

#include "CSSParser.h"
#include "CSSParserMode.h"
#include "CSSPrimitiveValue.h"
#include "CSSPropertyNames.h"
#include "CSSSelector.h"
#include "CSSSelectorList.h"
#include "Document.h"
#include "HTMLNames.h"
#include "MediaList.h"
#include "MediaQueryExp.h"
#include "StyleRule.h"
#include "StyleSheetContents.h"
#include "CSSKeyframeRule.h"
#include "CSSKeyframesRule.h"
#include <wtf/FastMalloc.h>
#include <stdlib.h>
#include <string.h>

using namespace WebCore;
using namespace HTMLNames;

#define YYMALLOC fastMalloc
#define YYFREE fastFree

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 10000
#define YYDEBUG 0

#if YYDEBUG > 0
#include <wtf/text/CString.h>
#define YYPRINT(File,Type,Value) if (isCSSTokenAString(Type)) YYFPRINTF(File, "%s", String((Value).string).utf8().data())
#endif



/* Line 189 of yacc.c  */
#line 144 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"

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
     TOKEN_EOF = 0,
     LOWEST_PREC = 258,
     UNIMPORTANT_TOK = 259,
     WHITESPACE = 260,
     SGML_CD = 261,
     INCLUDES = 262,
     DASHMATCH = 263,
     BEGINSWITH = 264,
     ENDSWITH = 265,
     CONTAINS = 266,
     STRING = 267,
     IDENT = 268,
     NTH = 269,
     NTHCHILDSELECTORSEPARATOR = 270,
     HEX = 271,
     IDSEL = 272,
     IMPORT_SYM = 273,
     PAGE_SYM = 274,
     MEDIA_SYM = 275,
     FONT_FACE_SYM = 276,
     CHARSET_SYM = 277,
     KEYFRAME_RULE_SYM = 278,
     KEYFRAMES_SYM = 279,
     NAMESPACE_SYM = 280,
     WEBKIT_RULE_SYM = 281,
     WEBKIT_DECLS_SYM = 282,
     WEBKIT_VALUE_SYM = 283,
     WEBKIT_MEDIAQUERY_SYM = 284,
     WEBKIT_SIZESATTR_SYM = 285,
     WEBKIT_SELECTOR_SYM = 286,
     WEBKIT_REGION_RULE_SYM = 287,
     WEBKIT_VIEWPORT_RULE_SYM = 288,
     TOPLEFTCORNER_SYM = 289,
     TOPLEFT_SYM = 290,
     TOPCENTER_SYM = 291,
     TOPRIGHT_SYM = 292,
     TOPRIGHTCORNER_SYM = 293,
     BOTTOMLEFTCORNER_SYM = 294,
     BOTTOMLEFT_SYM = 295,
     BOTTOMCENTER_SYM = 296,
     BOTTOMRIGHT_SYM = 297,
     BOTTOMRIGHTCORNER_SYM = 298,
     LEFTTOP_SYM = 299,
     LEFTMIDDLE_SYM = 300,
     LEFTBOTTOM_SYM = 301,
     RIGHTTOP_SYM = 302,
     RIGHTMIDDLE_SYM = 303,
     RIGHTBOTTOM_SYM = 304,
     ATKEYWORD = 305,
     IMPORTANT_SYM = 306,
     MEDIA_ONLY = 307,
     MEDIA_NOT = 308,
     MEDIA_AND = 309,
     REMS = 310,
     CHS = 311,
     QEMS = 312,
     EMS = 313,
     EXS = 314,
     PXS = 315,
     CMS = 316,
     MMS = 317,
     INS = 318,
     PTS = 319,
     PCS = 320,
     DEGS = 321,
     RADS = 322,
     GRADS = 323,
     TURNS = 324,
     MSECS = 325,
     SECS = 326,
     HERTZ = 327,
     KHERTZ = 328,
     DIMEN = 329,
     INVALIDDIMEN = 330,
     PERCENTAGE = 331,
     FLOATTOKEN = 332,
     INTEGER = 333,
     VW = 334,
     VH = 335,
     VMIN = 336,
     VMAX = 337,
     DPPX = 338,
     DPI = 339,
     DPCM = 340,
     FR = 341,
     URI = 342,
     FUNCTION = 343,
     ANYFUNCTION = 344,
     NOTFUNCTION = 345,
     CALCFUNCTION = 346,
     MATCHESFUNCTION = 347,
     MAXFUNCTION = 348,
     MINFUNCTION = 349,
     NTHCHILDFUNCTIONS = 350,
     LANGFUNCTION = 351,
     VARFUNCTION = 352,
     DIRFUNCTION = 353,
     ROLEFUNCTION = 354,
     CUSTOM_PROPERTY = 355,
     UNICODERANGE = 356,
     SUPPORTS_AND = 357,
     SUPPORTS_NOT = 358,
     SUPPORTS_OR = 359,
     SUPPORTS_SYM = 360,
     WEBKIT_SUPPORTS_CONDITION_SYM = 361,
     CUEFUNCTION = 362
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 91 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"

    double number;
    CSSParserString string;
    CSSSelector::MarginBoxType marginBox;
    CSSParserValue value;
    CSSParserSelectorCombinator relation;
    StyleRuleBase* rule;
    Vector<RefPtr<StyleRuleBase>>* ruleList;
    MediaQuerySet* mediaList;
    MediaQuery* mediaQuery;
    MediaQuery::Restrictor mediaQueryRestrictor;
    MediaQueryExp* mediaQueryExp;
    Vector<CSSParser::SourceSize>* sourceSizeList;
    Vector<std::unique_ptr<MediaQueryExp>>* mediaQueryExpList;
    StyleKeyframe* keyframe;
    Vector<RefPtr<StyleKeyframe>>* keyframeRuleList;
    CSSPropertyID id;
    CSSParserSelector* selector;
    Vector<std::unique_ptr<CSSParserSelector>>* selectorList;
    bool boolean;
    CSSSelector::Match match;
    int integer;
    char character;
    CSSParserValueList* valueList;
    Vector<CSSParserString>* stringList;
    CSSParser::Location location;



/* Line 214 of yacc.c  */
#line 318 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 119 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"


static inline int cssyyerror(void*, const char*)
{
    return 1;
}







































static inline CSSParserValue makeIdentValue(CSSParserString string)
{
    CSSParserValue v;
    v.id = cssValueKeywordID(string);
    v.unit = CSSPrimitiveValue::CSS_IDENT;
    v.string = string;
    return v;
}

static bool selectorListDoesNotMatchAnyPseudoElement(const Vector<std::unique_ptr<CSSParserSelector>>* selectorVector)
{
    if (!selectorVector)
        return true;

    for (unsigned i = 0; i < selectorVector->size(); ++i) {
        for (const CSSParserSelector* selector = selectorVector->at(i).get(); selector; selector = selector->tagHistory()) {
            if (selector->matchesPseudoElement())
                return false;
        }
    }
    return true;
}



/* Line 264 of yacc.c  */
#line 401 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2123

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  146
/* YYNRULES -- Number of rules.  */
#define YYNRULES  415
/* YYNRULES -- Number of states.  */
#define YYNSTATES  778

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   362

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   128,     2,   126,     2,   127,     2,     2,
     119,   115,    21,   120,   118,   123,    19,   125,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    18,   117,
       2,   124,   122,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,   116,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   113,    22,   114,   121,     2,     2,     2,
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
      15,    16,    17,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    14,    17,    20,    23,    26,
      29,    32,    39,    46,    52,    58,    64,    70,    76,    78,
      81,    82,    85,    86,    89,    92,    93,    95,    97,    99,
     101,   103,   105,   107,   113,   117,   121,   127,   131,   132,
     136,   138,   140,   142,   144,   146,   148,   150,   152,   154,
     156,   158,   160,   162,   163,   167,   168,   172,   174,   176,
     178,   180,   182,   184,   186,   188,   190,   192,   194,   196,
     198,   199,   207,   215,   223,   228,   233,   240,   247,   251,
     255,   256,   259,   261,   263,   264,   269,   275,   278,   285,
     286,   289,   291,   293,   300,   305,   307,   313,   314,   318,
     319,   321,   323,   325,   331,   332,   334,   336,   341,   344,
     345,   346,   348,   359,   368,   373,   384,   388,   391,   394,
     395,   396,   398,   400,   402,   404,   408,   413,   418,   423,
     428,   434,   436,   440,   450,   460,   461,   472,   474,   476,
     477,   481,   488,   490,   496,   499,   501,   503,   504,   515,
     520,   525,   527,   530,   532,   533,   535,   540,   541,   549,
     551,   553,   555,   557,   559,   561,   563,   565,   567,   569,
     571,   573,   575,   577,   579,   581,   582,   591,   596,   601,
     602,   613,   616,   619,   622,   626,   628,   629,   631,   633,
     635,   636,   637,   638,   648,   649,   651,   658,   661,   662,
     663,   667,   669,   671,   673,   679,   682,   685,   687,   689,
     692,   696,   699,   701,   704,   707,   709,   712,   714,   717,
     721,   724,   726,   732,   735,   737,   739,   741,   744,   747,
     749,   751,   753,   755,   757,   760,   766,   777,   784,   796,
     799,   800,   802,   804,   806,   808,   810,   812,   814,   816,
     819,   821,   824,   831,   834,   838,   846,   853,   860,   867,
     874,   881,   887,   894,   900,   907,   915,   922,   929,   930,
     932,   935,   937,   939,   942,   946,   950,   955,   960,   964,
     970,   976,   979,   986,   990,   995,   999,  1002,  1005,  1006,
    1009,  1013,  1017,  1022,  1027,  1030,  1033,  1034,  1036,  1038,
    1041,  1043,  1047,  1051,  1054,  1057,  1058,  1061,  1065,  1068,
    1071,  1074,  1078,  1081,  1084,  1087,  1090,  1093,  1096,  1099,
    1102,  1105,  1108,  1110,  1112,  1114,  1116,  1118,  1120,  1122,
    1124,  1126,  1128,  1130,  1132,  1134,  1136,  1138,  1140,  1142,
    1144,  1146,  1148,  1150,  1152,  1154,  1156,  1158,  1160,  1162,
    1164,  1166,  1168,  1173,  1177,  1182,  1188,  1197,  1205,  1212,
    1222,  1231,  1236,  1241,  1243,  1245,  1247,  1249,  1252,  1256,
    1260,  1264,  1268,  1269,  1271,  1277,  1279,  1282,  1284,  1288,
    1292,  1294,  1297,  1303,  1309,  1314,  1316,  1318,  1323,  1328,
    1330,  1333,  1337,  1341,  1344,  1348,  1352,  1356,  1358,  1360,
    1362,  1364,  1366,  1368,  1370,  1372,  1374,  1376,  1378,  1380,
    1382,  1383,  1384,  1387,  1390,  1393
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     130,     0,    -1,   139,   141,   140,   147,    -1,   131,   139,
      -1,   133,   139,    -1,   134,   139,    -1,   135,   139,    -1,
     161,   139,    -1,   136,   139,    -1,   132,   139,    -1,   137,
     139,    -1,    31,   113,   139,   148,   139,   114,    -1,    28,
     113,   139,   191,   139,   114,    -1,    32,   113,   208,   236,
     114,    -1,    33,   113,   139,   247,   114,    -1,    34,     5,
     139,   170,   114,    -1,    36,   113,   139,   214,   114,    -1,
     111,     5,   139,   181,   114,    -1,     5,    -1,   138,     5,
      -1,    -1,   139,     5,    -1,    -1,   140,     6,    -1,   140,
       5,    -1,    -1,   145,    -1,   114,    -1,     0,    -1,   115,
      -1,     0,    -1,   116,    -1,     0,    -1,    27,   139,    12,
     139,   117,    -1,    27,     1,   269,    -1,    27,     1,   117,
      -1,    27,   139,    12,   139,   117,    -1,    27,   139,   117,
      -1,    -1,   147,   149,   140,    -1,   212,    -1,   176,    -1,
     195,    -1,   202,    -1,   188,    -1,   157,    -1,   156,    -1,
     204,    -1,   177,    -1,   148,    -1,   146,    -1,   268,    -1,
     267,    -1,    -1,   150,   153,   140,    -1,    -1,   151,   152,
     140,    -1,   212,    -1,   195,    -1,   202,    -1,   176,    -1,
     188,    -1,   177,    -1,   152,    -1,   268,    -1,   267,    -1,
     157,    -1,   156,    -1,   204,    -1,   139,    -1,    -1,   155,
      23,   154,   159,   139,   171,   117,    -1,   155,    23,   154,
     159,   139,   171,     0,    -1,   155,    23,   154,   159,   139,
     171,   269,    -1,   155,    23,     1,   117,    -1,   155,    23,
       1,   269,    -1,    30,   139,   158,   159,   139,   117,    -1,
      30,   139,   158,   159,   139,   269,    -1,    30,     1,   269,
      -1,    30,     1,   117,    -1,    -1,    13,   139,    -1,    12,
      -1,    92,    -1,    -1,    18,   139,   247,   139,    -1,    35,
       5,   162,   139,   114,    -1,   163,   164,    -1,   162,   139,
     118,   139,   163,   164,    -1,    -1,   165,   139,    -1,   252,
      -1,   263,    -1,   119,   139,    13,   139,   160,   115,    -1,
     169,   139,   165,   139,    -1,   166,    -1,   167,   139,    59,
     139,   166,    -1,    -1,    59,   139,   167,    -1,    -1,    57,
      -1,    58,    -1,   167,    -1,   169,   139,    13,   139,   168,
      -1,    -1,   172,    -1,   170,    -1,   172,   118,   139,   170,
      -1,   172,     1,    -1,    -1,    -1,   139,    -1,   174,    25,
     139,   172,   210,   113,   173,   139,   150,   266,    -1,   174,
      25,   175,   113,   173,   139,   150,   266,    -1,   174,    25,
     175,   117,    -1,   179,   110,   139,   181,   180,   113,   173,
     139,   150,   266,    -1,   179,   110,   178,    -1,     1,   117,
      -1,     1,   269,    -1,    -1,    -1,   185,    -1,   182,    -1,
     183,    -1,   184,    -1,   108,   139,   185,    -1,   185,   107,
     139,   185,    -1,   183,   107,   139,   185,    -1,   185,   109,
     139,   185,    -1,   184,   109,   139,   185,    -1,   119,   139,
     181,   115,   139,    -1,   186,    -1,   119,     1,   115,    -1,
     119,   139,   241,    18,   139,   247,   242,   115,   139,    -1,
     119,   139,   105,   139,    18,   245,   242,   115,   139,    -1,
      -1,   187,    29,   139,   189,   175,   113,   173,   139,   190,
     142,    -1,    13,    -1,    12,    -1,    -1,   190,   191,   139,
      -1,   192,   139,   113,   139,   236,   142,    -1,   193,    -1,
     192,   139,   118,   139,   193,    -1,   206,    81,    -1,    13,
      -1,     1,    -1,    -1,   194,    24,   139,   196,   175,   113,
     173,   208,   197,   142,    -1,   194,    24,     1,   269,    -1,
     194,    24,     1,   117,    -1,    13,    -1,    13,   233,    -1,
     233,    -1,    -1,   236,    -1,   197,   198,   139,   236,    -1,
      -1,   200,   199,   139,   113,   139,   236,   142,    -1,    39,
      -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,
      -1,    -1,   201,    26,   175,   113,   173,   208,   236,   142,
      -1,   201,    26,     1,   269,    -1,   201,    26,     1,   117,
      -1,    -1,   203,    37,   139,   214,   210,   113,   173,   139,
     151,   266,    -1,   120,   139,    -1,   121,   139,    -1,   122,
     139,    -1,   122,   122,   139,    -1,   207,    -1,    -1,   123,
      -1,   120,    -1,   139,    -1,    -1,    -1,    -1,   209,   214,
     211,   210,   113,   173,   208,   236,   142,    -1,    -1,   221,
      -1,   214,   211,   118,   139,   213,   221,    -1,   214,     1,
      -1,    -1,    -1,   215,   214,   216,    -1,    13,    -1,    12,
      -1,   218,    -1,   219,   139,   118,   139,   218,    -1,   219,
       1,    -1,   221,     5,    -1,   223,    -1,   220,    -1,   220,
     223,    -1,   221,   205,   223,    -1,   221,     1,    -1,    22,
      -1,    21,    22,    -1,    13,    22,    -1,   225,    -1,   225,
     226,    -1,   226,    -1,   222,   225,    -1,   222,   225,   226,
      -1,   222,   226,    -1,   223,    -1,   224,   139,   118,   139,
     223,    -1,   224,     1,    -1,    13,    -1,    21,    -1,   227,
      -1,   226,   227,    -1,   226,     1,    -1,    17,    -1,    16,
      -1,   228,    -1,   229,    -1,   235,    -1,    19,    13,    -1,
      20,   139,    13,   139,   116,    -1,    20,   139,    13,   139,
     231,   139,   232,   139,   230,   116,    -1,    20,   139,   222,
      13,   139,   116,    -1,    20,   139,   222,    13,   139,   231,
     139,   232,   139,   230,   116,    -1,    13,   139,    -1,    -1,
     124,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
      11,    -1,    13,    -1,    12,    -1,    18,    13,    -1,   115,
      -1,   138,   115,    -1,   138,    15,   138,   217,   139,   115,
      -1,    18,    13,    -1,    18,    18,    13,    -1,    18,    18,
     112,   139,   224,   139,   115,    -1,    18,    94,   139,   224,
     139,   115,    -1,    18,    97,   139,   217,   139,   115,    -1,
      18,   101,   139,   219,   139,   115,    -1,    18,   103,   139,
      13,   139,   115,    -1,    18,   104,   139,    13,   139,   115,
      -1,    18,   100,   139,    14,   234,    -1,    18,   100,   139,
     206,    83,   234,    -1,    18,   100,   139,    13,   234,    -1,
      18,    93,   139,    14,   139,   115,    -1,    18,    93,   139,
     206,    83,   139,   115,    -1,    18,    93,   139,    13,   139,
     115,    -1,    18,    95,   139,   217,   139,   115,    -1,    -1,
     239,    -1,   237,   239,    -1,   237,    -1,   238,    -1,   237,
     238,    -1,   239,   117,   139,    -1,   238,   117,   139,    -1,
     237,   239,   117,   139,    -1,   237,   238,   117,   139,    -1,
       1,   273,   274,    -1,   105,   139,    18,   245,   242,    -1,
     241,    18,   139,   247,   242,    -1,   241,   240,    -1,   241,
      18,   139,   247,   242,   240,    -1,    56,   139,   240,    -1,
     241,    18,   139,   240,    -1,     1,   273,   274,    -1,    13,
     139,    -1,    56,   139,    -1,    -1,    13,   139,    -1,   243,
      13,   139,    -1,    20,   139,   144,    -1,    20,   139,   243,
     144,    -1,    20,   139,   249,   144,    -1,     5,   246,    -1,
     139,   247,    -1,    -1,   247,    -1,   248,    -1,   248,   249,
      -1,   251,    -1,   248,   250,   251,    -1,     1,   273,   274,
      -1,   125,   139,    -1,   118,   139,    -1,    -1,   252,   139,
      -1,   207,   252,   139,    -1,    12,   139,    -1,    13,   139,
      -1,    79,   139,    -1,   207,    79,   139,    -1,    92,   139,
      -1,   106,   139,    -1,    16,   139,    -1,   126,   139,    -1,
     253,   139,    -1,   263,   139,    -1,   254,   139,    -1,   265,
     139,    -1,   127,   139,    -1,   244,   139,    -1,    83,    -1,
      82,    -1,    81,    -1,    65,    -1,    66,    -1,    67,    -1,
      68,    -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,    63,    -1,    62,    -1,    64,    -1,    60,    -1,
      61,    -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,
      88,    -1,    89,    -1,    90,    -1,    91,    -1,    93,   139,
     247,   143,    -1,    93,   139,   143,    -1,    93,   139,   249,
     143,    -1,   102,   139,   105,   139,   143,    -1,   102,   139,
     105,   139,   118,   139,   247,   143,    -1,   102,   139,   105,
     139,   118,   139,   143,    -1,   102,   139,   105,   139,   118,
     143,    -1,   102,   139,   105,   139,   118,   139,   255,   139,
     143,    -1,   102,   139,   105,   139,   118,   139,   242,   143,
      -1,   102,   139,   247,   143,    -1,   102,   139,   249,   143,
      -1,   128,    -1,   117,    -1,   252,    -1,   254,    -1,   207,
     252,    -1,   138,   120,   138,    -1,   138,   123,   138,    -1,
     258,    21,   139,    -1,   258,   125,   139,    -1,    -1,     5,
      -1,   119,   139,   260,   258,   143,    -1,   261,    -1,   261,
     249,    -1,   256,    -1,   260,   257,   256,    -1,   260,   257,
     259,    -1,   259,    -1,   260,   258,    -1,   262,   118,   139,
     260,   258,    -1,    96,   139,   260,   258,   143,    -1,    96,
     139,   249,   143,    -1,    99,    -1,    98,    -1,   264,   139,
     262,   143,    -1,   264,   139,   249,   143,    -1,   142,    -1,
       1,   142,    -1,    55,     1,   269,    -1,    55,     1,   117,
      -1,     1,   269,    -1,   113,   274,   142,    -1,    20,   274,
     144,    -1,   272,   274,   143,    -1,   119,    -1,    93,    -1,
     102,    -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,
      94,    -1,    95,    -1,   101,    -1,   103,    -1,   104,    -1,
     112,    -1,    -1,    -1,   274,     1,    -1,   274,   269,    -1,
     274,   270,    -1,   274,   271,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   433,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   444,   446,   448,   451,   462,   465,   474,   477,   477,
     479,   479,   481,   481,   481,   483,   483,   485,   485,   487,
     487,   489,   489,   492,   498,   499,   503,   503,   505,   507,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   531,
     535,   536,   537,   541,   542,   553,   554,   565,   566,   567,
     568,   569,   570,   576,   576,   576,   576,   576,   576,   579,
     586,   592,   595,   598,   604,   608,   615,   616,   617,   618,
     621,   621,   623,   623,   625,   625,   628,   634,   638,   645,
     648,   650,   650,   652,   660,   672,   676,   683,   686,   692,
     695,   698,   704,   708,   714,   714,   717,   722,   730,   738,
     744,   750,   756,   759,   762,   769,   772,   780,   783,   789,
     796,   802,   802,   802,   802,   804,   807,   808,   812,   813,
     817,   818,   819,   823,   839,   857,   863,   868,   868,   871,
     872,   879,   882,   886,   895,   896,   908,   914,   920,   932,
     936,   943,   947,   954,   959,   965,   965,   968,   968,   976,
     979,   982,   985,   988,   991,   994,   997,  1000,  1003,  1006,
    1009,  1012,  1015,  1018,  1021,  1027,  1033,  1036,  1040,  1076,
    1082,  1094,  1095,  1096,  1098,  1102,  1102,  1104,  1104,  1106,
    1109,  1115,  1117,  1120,  1126,  1129,  1137,  1147,  1153,  1154,
    1157,  1162,  1162,  1165,  1169,  1174,  1181,  1184,  1185,  1186,
    1195,  1204,  1211,  1212,  1213,  1217,  1220,  1225,  1230,  1233,
    1238,  1246,  1253,  1262,  1269,  1272,  1279,  1280,  1287,  1294,
    1301,  1312,  1313,  1314,  1318,  1328,  1333,  1340,  1345,  1355,
    1361,  1366,  1369,  1372,  1375,  1378,  1381,  1386,  1386,  1389,
    1394,  1397,  1400,  1409,  1412,  1417,  1426,  1437,  1448,  1461,
    1471,  1483,  1498,  1513,  1530,  1540,  1550,  1568,  1585,  1586,
    1587,  1588,  1589,  1590,  1594,  1598,  1602,  1608,  1615,  1621,
    1638,  1654,  1655,  1661,  1665,  1672,  1674,  1676,  1676,  1681,
    1685,  1692,  1695,  1698,  1708,  1720,  1723,  1723,  1725,  1725,
    1728,  1732,  1749,  1751,  1751,  1751,  1754,  1755,  1756,  1757,
    1759,  1760,  1761,  1762,  1763,  1764,  1766,  1767,  1768,  1769,
    1770,  1774,  1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,
    1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,  1795,  1796,
    1797,  1798,  1799,  1806,  1807,  1808,  1809,  1810,  1811,  1812,
    1813,  1814,  1818,  1826,  1834,  1845,  1853,  1861,  1870,  1875,
    1880,  1885,  1890,  1898,  1898,  1901,  1902,  1903,  1912,  1915,
    1918,  1921,  1926,  1926,  1929,  1944,  1944,  1947,  1951,  1967,
    1981,  1985,  1986,  2003,  2011,  2019,  2019,  2022,  2030,  2039,
    2039,  2041,  2041,  2043,  2045,  2047,  2049,  2052,  2052,  2052,
    2052,  2052,  2052,  2052,  2052,  2052,  2052,  2054,  2054,  2057,
    2061,  2063,  2065,  2066,  2067,  2068
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TOKEN_EOF", "error", "$undefined", "LOWEST_PREC", "UNIMPORTANT_TOK",
  "WHITESPACE", "SGML_CD", "INCLUDES", "DASHMATCH", "BEGINSWITH",
  "ENDSWITH", "CONTAINS", "STRING", "IDENT", "NTH",
  "NTHCHILDSELECTORSEPARATOR", "HEX", "IDSEL", "':'", "'.'", "'['", "'*'",
  "'|'", "IMPORT_SYM", "PAGE_SYM", "MEDIA_SYM", "FONT_FACE_SYM",
  "CHARSET_SYM", "KEYFRAME_RULE_SYM", "KEYFRAMES_SYM", "NAMESPACE_SYM",
  "WEBKIT_RULE_SYM", "WEBKIT_DECLS_SYM", "WEBKIT_VALUE_SYM",
  "WEBKIT_MEDIAQUERY_SYM", "WEBKIT_SIZESATTR_SYM", "WEBKIT_SELECTOR_SYM",
  "WEBKIT_REGION_RULE_SYM", "WEBKIT_VIEWPORT_RULE_SYM",
  "TOPLEFTCORNER_SYM", "TOPLEFT_SYM", "TOPCENTER_SYM", "TOPRIGHT_SYM",
  "TOPRIGHTCORNER_SYM", "BOTTOMLEFTCORNER_SYM", "BOTTOMLEFT_SYM",
  "BOTTOMCENTER_SYM", "BOTTOMRIGHT_SYM", "BOTTOMRIGHTCORNER_SYM",
  "LEFTTOP_SYM", "LEFTMIDDLE_SYM", "LEFTBOTTOM_SYM", "RIGHTTOP_SYM",
  "RIGHTMIDDLE_SYM", "RIGHTBOTTOM_SYM", "ATKEYWORD", "IMPORTANT_SYM",
  "MEDIA_ONLY", "MEDIA_NOT", "MEDIA_AND", "REMS", "CHS", "QEMS", "EMS",
  "EXS", "PXS", "CMS", "MMS", "INS", "PTS", "PCS", "DEGS", "RADS", "GRADS",
  "TURNS", "MSECS", "SECS", "HERTZ", "KHERTZ", "DIMEN", "INVALIDDIMEN",
  "PERCENTAGE", "FLOATTOKEN", "INTEGER", "VW", "VH", "VMIN", "VMAX",
  "DPPX", "DPI", "DPCM", "FR", "URI", "FUNCTION", "ANYFUNCTION",
  "NOTFUNCTION", "CALCFUNCTION", "MATCHESFUNCTION", "MAXFUNCTION",
  "MINFUNCTION", "NTHCHILDFUNCTIONS", "LANGFUNCTION", "VARFUNCTION",
  "DIRFUNCTION", "ROLEFUNCTION", "CUSTOM_PROPERTY", "UNICODERANGE",
  "SUPPORTS_AND", "SUPPORTS_NOT", "SUPPORTS_OR", "SUPPORTS_SYM",
  "WEBKIT_SUPPORTS_CONDITION_SYM", "CUEFUNCTION", "'{'", "'}'", "')'",
  "']'", "';'", "','", "'('", "'+'", "'~'", "'>'", "'-'", "'='", "'/'",
  "'#'", "'%'", "'!'", "$accept", "stylesheet", "webkit_rule",
  "webkit_keyframe_rule", "webkit_decls", "webkit_value",
  "webkit_mediaquery", "webkit_selector", "webkit_supports_condition",
  "space", "maybe_space", "maybe_sgml", "maybe_charset", "closing_brace",
  "closing_parenthesis", "closing_bracket", "charset", "ignored_charset",
  "rule_list", "valid_rule", "rule", "block_rule_list",
  "block_valid_rule_list", "block_valid_rule", "block_rule",
  "at_import_header_end_maybe_space", "before_import_rule", "import",
  "namespace", "maybe_ns_prefix", "string_or_uri", "maybe_media_value",
  "webkit_source_size_list", "source_size_list",
  "maybe_source_media_query_exp", "source_size_length",
  "base_media_query_exp", "media_query_exp", "media_query_exp_list",
  "maybe_and_media_query_exp_list", "maybe_media_restrictor",
  "media_query", "maybe_media_list", "media_list", "at_rule_body_start",
  "before_media_rule", "at_rule_header_end_maybe_space", "media",
  "supports", "supports_error", "before_supports_rule",
  "at_supports_rule_header_end", "supports_condition", "supports_negation",
  "supports_conjunction", "supports_disjunction",
  "supports_condition_in_parens", "supports_declaration_condition",
  "before_keyframes_rule", "keyframes", "keyframe_name", "keyframes_rule",
  "keyframe_rule", "key_list", "key", "before_page_rule", "page",
  "page_selector", "declarations_and_margins", "margin_box", "$@1",
  "margin_sym", "before_font_face_rule", "font_face", "before_region_rule",
  "region", "combinator", "maybe_unary_operator", "unary_operator",
  "maybe_space_before_declaration", "before_selector_list",
  "at_rule_header_end", "at_selector_end", "ruleset",
  "before_selector_group_item", "selector_list",
  "before_nested_selector_list", "after_nested_selector_list",
  "nested_selector_list", "lang_range", "comma_separated_lang_ranges",
  "complex_selector_with_trailing_whitespace", "complex_selector",
  "namespace_selector", "compound_selector", "simple_selector_list",
  "element_name", "specifier_list", "specifier", "class", "attrib",
  "attrib_flags", "match", "ident_or_string", "pseudo_page",
  "nth_selector_ending", "pseudo", "declaration_list", "decl_list",
  "decl_list_recovery", "declaration", "declaration_recovery", "property",
  "priority", "ident_list", "track_names_list", "whitespace_or_expr",
  "maybe_expr", "expr", "valid_expr", "expr_recovery", "operator", "term",
  "unary_term", "function", "variable_function", "invalid_var_fallback",
  "calc_func_term", "calc_func_operator", "calc_maybe_space",
  "calc_func_paren_expr", "calc_func_expr", "valid_calc_func_expr",
  "calc_func_expr_list", "calc_function", "min_or_max",
  "min_or_max_function", "save_block", "invalid_at", "invalid_rule",
  "invalid_block", "invalid_square_brackets_block",
  "invalid_parentheses_block", "opening_parenthesis", "error_location",
  "error_recovery", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    58,    46,
      91,    42,   124,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   123,   125,    41,    93,    59,    44,    40,
      43,   126,    62,    45,    61,    47,    35,    37,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   138,
     139,   139,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   150,   150,   151,   151,   152,   152,   152,
     152,   152,   152,   153,   153,   153,   153,   153,   153,   154,
     155,   156,   156,   156,   156,   156,   157,   157,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   162,   162,   163,
     163,   164,   164,   165,   166,   167,   167,   168,   168,   169,
     169,   169,   170,   170,   171,   171,   172,   172,   172,   173,
     174,   175,   176,   176,   176,   177,   177,   178,   178,   179,
     180,   181,   181,   181,   181,   182,   183,   183,   184,   184,
     185,   185,   185,   186,   186,   187,   188,   189,   189,   190,
     190,   191,   192,   192,   193,   193,   193,   194,   195,   195,
     195,   196,   196,   196,   196,   197,   197,   199,   198,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   201,   202,   202,   202,   203,
     204,   205,   205,   205,   205,   206,   206,   207,   207,   208,
     209,   210,   211,   212,   213,   214,   214,   214,   215,   216,
     217,   218,   218,   219,   219,   219,   220,   221,   221,   221,
     221,   221,   222,   222,   222,   223,   223,   223,   223,   223,
     223,   224,   224,   224,   225,   225,   226,   226,   226,   227,
     227,   227,   227,   227,   228,   229,   229,   229,   229,   230,
     230,   231,   231,   231,   231,   231,   231,   232,   232,   233,
     234,   234,   234,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   236,   236,
     236,   236,   236,   236,   237,   237,   237,   237,   238,   239,
     239,   239,   239,   239,   239,   240,   241,   242,   242,   243,
     243,   244,   244,   244,   245,   245,   246,   246,   247,   247,
     248,   248,   249,   250,   250,   250,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   253,   253,   253,   254,   254,   254,   254,   254,
     254,   254,   254,   255,   255,   256,   256,   256,   257,   257,
     257,   257,   258,   258,   259,   260,   260,   261,   261,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   269,   270,   271,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     273,   274,   274,   274,   274,   274
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     2,     2,     2,     2,
       2,     6,     6,     5,     5,     5,     5,     5,     1,     2,
       0,     2,     0,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     3,     5,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     7,     7,     4,     4,     6,     6,     3,     3,
       0,     2,     1,     1,     0,     4,     5,     2,     6,     0,
       2,     1,     1,     6,     4,     1,     5,     0,     3,     0,
       1,     1,     1,     5,     0,     1,     1,     4,     2,     0,
       0,     1,    10,     8,     4,    10,     3,     2,     2,     0,
       0,     1,     1,     1,     1,     3,     4,     4,     4,     4,
       5,     1,     3,     9,     9,     0,    10,     1,     1,     0,
       3,     6,     1,     5,     2,     1,     1,     0,    10,     4,
       4,     1,     2,     1,     0,     1,     4,     0,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     8,     4,     4,     0,
      10,     2,     2,     2,     3,     1,     0,     1,     1,     1,
       0,     0,     0,     9,     0,     1,     6,     2,     0,     0,
       3,     1,     1,     1,     5,     2,     2,     1,     1,     2,
       3,     2,     1,     2,     2,     1,     2,     1,     2,     3,
       2,     1,     5,     2,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     5,    10,     6,    11,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     6,     2,     3,     7,     6,     6,     6,     6,
       6,     5,     6,     5,     6,     7,     6,     6,     0,     1,
       2,     1,     1,     2,     3,     3,     4,     4,     3,     5,
       5,     2,     6,     3,     4,     3,     2,     2,     0,     2,
       3,     3,     4,     4,     2,     2,     0,     1,     1,     2,
       1,     3,     3,     2,     2,     0,     2,     3,     2,     2,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     5,     8,     7,     6,     9,
       8,     4,     4,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     0,     1,     5,     1,     2,     1,     3,     3,
       1,     2,     5,     5,     4,     1,     1,     4,     4,     1,
       2,     3,     3,     2,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    20,    20,    20,    20,    20,    20,    25,    20,    20,
      20,    20,    20,    20,    89,    20,    20,     1,     3,     9,
       4,     5,     6,     8,    10,    21,     0,    22,    26,     7,
       0,   190,   189,     0,     0,    99,    20,    20,     0,    20,
       0,     0,     0,     0,    38,   146,   145,   188,   187,    20,
      20,   142,     0,   185,     0,    20,     0,    46,    45,     0,
      41,    48,     0,     0,    44,     0,    42,     0,    43,     0,
      47,     0,    40,   410,    20,    20,    20,     0,     0,   272,
     269,     0,    20,    20,    20,    20,   342,   343,   340,   339,
     341,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    20,   324,   323,   322,   344,
     345,   346,   347,   348,   349,   350,   351,    20,    20,    20,
     386,   385,    20,    20,    20,    20,     0,    20,     0,     0,
     300,    20,    20,    20,    20,    20,    20,   100,   101,    95,
     102,    20,     0,     0,     0,    87,    91,    92,    90,   224,
     230,   229,     0,     0,    20,   225,   212,     0,   208,     0,
       0,   207,   215,     0,   226,   231,   232,   233,    20,     0,
       0,   122,   123,   124,   121,   131,   411,    35,    34,    20,
      24,    23,     0,     0,     0,   144,     0,    80,     0,     0,
      20,     0,    20,     0,     0,    20,     0,   411,   286,     0,
       0,    13,   273,   270,    20,    20,   410,    20,   281,   308,
     309,   314,     0,   310,   312,     0,     0,     0,   313,   315,
     320,    20,    20,   321,    14,   410,    20,    20,   299,     0,
     306,   316,   318,   317,     0,   319,     0,     0,    15,    20,
      86,    20,   214,   253,     0,    20,    20,    20,    20,    20,
      20,    20,    20,   234,     0,   213,   197,    16,     0,   209,
     211,   206,    20,    20,    20,     0,   224,   225,   218,     0,
       0,   228,   227,     0,     0,     0,    17,    20,    20,    20,
      20,     0,     0,     0,    20,     0,    50,    49,    22,    52,
      51,    12,    20,    20,    79,    78,    20,     0,    11,     0,
      69,     0,    99,     0,     0,     0,   116,     0,     0,   154,
       0,   111,     0,     0,   191,     0,   283,    20,    20,    20,
     275,   274,   411,     0,    32,    20,    31,   291,     0,     0,
      30,    29,   353,     0,     0,    20,     0,     0,   365,   366,
     377,   380,   372,     0,    20,     0,     0,   311,   307,   411,
     304,   303,   301,     0,   372,     0,    20,    20,    20,    84,
      89,   254,    20,   186,     0,   198,   198,   186,     0,     0,
       0,    20,     0,     0,    20,   181,   182,    20,   183,   210,
       0,   125,   132,    20,     0,     0,     0,     0,     0,     0,
      28,   412,   411,   398,   404,   405,   400,   401,   402,   403,
     406,   399,   407,   408,   409,    27,   397,   394,   413,   414,
     415,   411,    33,   393,     0,     0,    39,     0,     0,    81,
      82,    83,    20,    74,    75,    20,   106,     0,   109,   114,
     117,   118,   120,   138,   137,    20,   150,   149,   151,     0,
      20,   153,   178,   177,   109,     0,     0,   296,     0,   288,
     277,   276,     0,   284,   288,   289,    20,   292,   293,   352,
     354,     0,   367,   384,   373,     0,     0,     0,   376,     0,
     361,   362,   302,   388,   381,    20,   387,    99,    97,    94,
      20,     0,     0,     0,    20,    20,     0,   221,     0,     0,
      20,    20,     0,     0,     0,   202,   201,   203,     0,    20,
      20,     0,    20,   194,   184,     0,    20,    20,   127,   129,
     126,   128,     0,     0,    20,    37,   392,   391,     0,   143,
       0,   104,   108,    20,     0,    20,     0,     0,   152,   249,
       0,    20,     0,   109,   294,   297,   295,    20,   279,     0,
     290,   372,    19,     0,     0,   378,   379,    20,    20,   383,
      20,   355,     0,    96,    20,    20,   103,     0,    93,    88,
       0,     0,     0,    20,   223,     0,     0,     0,     0,    18,
     250,     0,   263,   261,     0,   205,     0,     0,     0,   242,
     243,   244,   245,   246,   235,   241,    20,     0,     0,    20,
     130,     0,   395,   396,     0,   141,    76,    77,     0,     0,
      99,   109,    53,   109,   109,   109,     0,   109,    20,   287,
     282,     0,   368,   369,   370,   371,     0,   358,   372,     0,
      99,    20,     0,   266,   264,     0,   256,    20,   200,   267,
     257,     0,   251,   262,   258,    20,   259,   260,     0,   237,
      20,     0,   288,   288,    36,    72,    71,    73,   107,    20,
       0,    20,    20,    20,     0,    20,     0,   374,   364,   363,
     357,     0,     0,    20,   382,    98,    85,   255,   265,     0,
     198,     0,   248,   247,    20,     0,     0,     0,    53,     0,
     389,    63,    22,    67,    66,    60,    62,    61,    58,    59,
      68,    57,   113,    65,    64,    53,   139,     0,   176,    55,
       0,   360,   356,     0,   222,    20,   204,   240,    20,    20,
      20,     0,   390,    54,     0,     0,     0,   155,     0,   193,
     359,     0,    20,     0,   240,   134,   133,   112,   115,   136,
      20,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   148,    20,   157,
       0,    22,   180,   252,   239,   236,     0,   140,     0,    20,
      56,   238,   156,     0,    20,     0,     0,   158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,   475,
      42,    54,    37,   690,   342,   337,    38,   296,   192,    65,
     298,   660,   728,   691,   692,   311,    66,   693,   694,   307,
     432,   491,    18,    47,    48,   155,    49,   149,   150,   566,
     151,   436,   608,   437,   535,    69,   313,   695,   696,   316,
      72,   536,   180,   181,   182,   183,   184,   185,    73,   697,
     445,   725,    59,    60,    61,    75,   698,   450,   726,   758,
     769,   759,    77,   699,    79,   700,   275,    62,   136,    43,
      81,   456,   268,   701,   598,   167,   499,   638,   500,   507,
     508,   168,   169,   170,   171,   498,   172,   173,   174,   175,
     176,   733,   596,   684,   451,   582,   177,    87,    88,    89,
      90,   218,    91,   548,   338,   137,   459,   544,   138,   139,
     238,   239,   140,   141,   142,   143,   673,   350,   476,   477,
     351,   352,   353,   365,   144,   145,   146,   702,   703,   704,
     418,   419,   420,   421,   207,   291
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -461
static const yytype_int16 yypact[] =
{
     902,   -43,   -22,     6,    18,   153,   183,   134,   270,   280,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,    83,  -461,  -461,
    -461,  -461,  -461,  -461,   188,  -461,  -461,  -461,   326,   326,
     326,   326,   326,   326,   326,  -461,   681,  -461,  -461,   326,
     299,   718,   326,   715,  1238,    98,  -461,  -461,  1963,  -461,
    1263,   333,   -17,    85,   395,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,   295,  -461,   744,  -461,   384,  -461,  -461,   411,
    -461,  -461,   317,   400,  -461,   424,  -461,   456,  -461,   476,
    -461,  1081,  -461,  -461,  -461,  -461,  -461,   375,  1766,   405,
     408,   129,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  2000,  -461,   427,   826,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
      58,  -461,   432,   421,   306,  -461,  -461,  -461,   326,   539,
    -461,  -461,   964,   542,  -461,   540,  -461,   111,  1081,   355,
     944,  -461,  1175,   533,  -461,  -461,  -461,  -461,  -461,   335,
     442,  -461,   481,   495,    13,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  1887,   296,   234,  -461,   220,   721,   392,   758,
    -461,    61,  -461,   625,   558,  -461,    68,  -461,   326,   582,
      93,  -461,   489,   511,  -461,  -461,  -461,  -461,  -461,   326,
     326,   326,   458,   326,   326,   954,  1334,  1050,   326,   326,
     326,  -461,  -461,   326,  -461,  -461,  -461,  -461,  -461,  1672,
     326,   326,   326,   326,  1334,   326,   101,   108,  -461,  -461,
    -461,  -461,  -461,  -461,   237,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,   576,  -461,  -461,  -461,   522,  -461,
    -461,  -461,  -461,  -461,   519,  1081,  -461,  -461,  1175,   574,
     734,  -461,  -461,    43,   548,   564,  -461,  -461,  -461,  -461,
    -461,   520,   336,   544,  -461,   678,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,   363,  -461,   608,
     326,   363,   708,   614,   747,   333,  -461,   598,   768,   607,
     810,   326,   567,  1263,   522,  1426,  -461,   709,  -461,  -461,
     326,   326,  -461,  1146,  -461,  -461,  -461,  -461,   125,    81,
    -461,  -461,  -461,   139,   139,  -461,  2032,   139,  -461,  -461,
    -461,  -461,   719,    50,  -461,   139,   139,   326,   326,  -461,
     326,   326,  -461,   139,   719,   161,  -461,  -461,  -461,   381,
      53,  -461,  -461,   364,  1263,   326,   326,   391,   755,   809,
     828,   539,   540,   723,  -461,   326,   326,  -461,   326,  -461,
     970,  -461,  -461,  -461,   631,   743,    43,    43,    43,    43,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,    70,   855,   395,   571,   299,   326,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,   135,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,   746,   749,
    -461,  -461,  -461,  -461,  -461,   197,   662,  1672,  1238,   741,
     326,   326,  1461,  -461,   741,   326,  -461,  -461,  -461,  -461,
    -461,  1521,  -461,  -461,   291,   293,  1899,    52,  -461,   277,
    -461,  -461,  1533,  -461,   402,  -461,  -461,    98,   304,   326,
    -461,   696,  1963,  1263,  -461,  -461,   729,  -461,    56,  1081,
    -461,  -461,   276,   276,   735,  -461,  -461,  -461,   329,  -461,
    -461,    69,  -461,   326,   326,   577,  -461,  -461,  -461,  -461,
    -461,  -461,  1086,  1274,  -461,  -461,  -461,  -461,   149,  -461,
     543,   404,  -461,  -461,   704,  -461,   711,   722,  -461,  -461,
     750,  -461,   770,  -461,  -461,  -461,  -461,  -461,  -461,  1614,
     326,   719,  -461,   825,   825,  -461,  -461,  -461,  -461,  -461,
     139,  -461,  1521,  -461,  -461,  -461,  -461,  1238,  -461,  -461,
      56,   303,   345,  -461,  -461,   365,   378,   366,   452,  -461,
    -461,   514,  -461,  -461,   276,  -461,   534,   521,   527,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,   314,  1081,   709,
     326,  1238,  -461,  -461,   380,  -461,  -461,  -461,   238,   361,
      98,  -461,   326,  -461,  -461,  -461,   530,  -461,  -461,   326,
    -461,    52,   852,   852,   326,   326,   717,  -461,   719,    53,
      98,  -461,   549,  -461,  -461,   563,  -461,  -461,  -461,  -461,
    -461,   825,  -461,  -461,  -461,  -461,  -461,  -461,   846,  -461,
    -461,   487,   741,   741,  -461,  -461,  -461,  -461,  -461,  -461,
    1844,  -461,  -461,  -461,   149,  -461,   530,  -461,  -461,  -461,
    -461,   139,   139,  -461,   402,    58,   326,  -461,  -461,  1263,
     852,   755,  -461,  -461,  -461,   846,   769,   791,   326,   431,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,   326,   326,  1787,  -461,   326,
     149,  -461,  -461,   154,  -461,  -461,  -461,   848,  -461,  -461,
    -461,  1844,  -461,   395,  1844,   292,   658,  -461,   979,  -461,
    -461,   575,  -461,   804,   848,   326,   326,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
     149,  -461,  -461,  -461,   326,  -461,   805,   326,  1670,  -461,
     395,  -461,  -461,   171,  -461,   571,   149,  -461
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -401,
       0,  -294,  -461,  -261,  -135,  -296,  -461,  -461,  -461,   670,
    -461,  -323,  -461,   198,  -461,  -461,  -461,   -10,    -8,  -461,
     618,  -461,  -461,  -461,   561,   447,  -239,   455,   315,  -461,
    -460,   -44,  -461,   416,  -297,  -461,  -167,    -1,     3,  -461,
    -461,  -461,  -232,  -461,  -461,  -461,   106,  -461,  -461,     4,
    -461,  -461,   223,  -461,   528,  -461,    15,  -461,  -461,  -461,
    -461,  -461,  -461,    26,  -461,    27,  -461,   596,   -34,  -452,
    -461,  -350,   752,    31,  -461,   -78,  -461,  -461,  -367,   269,
    -461,  -461,   383,   712,  -161,   485,   813,   498,  -156,  -461,
    -461,   250,   388,   308,   546,  -145,  -461,  -422,  -461,   903,
     914,  -185,   724,  -410,  -461,  -461,   407,  -461,  -193,  -461,
    -118,  -461,   771,   -20,  -461,  -205,  -461,   531,  -461,  -329,
     535,  -203,  -461,  -461,   -46,  -461,  -461,   -47,   820,   842,
     -23,  -461,  -461,  -461,  -117,  -169
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -376
static const yytype_int16 yytable[] =
{
      17,   152,   157,   206,   426,   528,    63,   269,   368,   501,
      28,    29,    30,    31,    32,    33,    34,   282,    39,    40,
      41,   349,    44,    45,   326,    50,    51,   564,   156,   188,
     417,    67,   343,    68,   355,   484,    53,   322,   325,   349,
      70,   364,   467,   468,    71,    74,   153,   154,    35,   158,
    -375,   235,   340,   394,   549,  -375,    76,   574,    35,   193,
     194,   -20,   314,   -20,   197,   198,   -20,    78,    80,   266,
      19,  -375,    82,   557,    35,    35,   589,   590,   591,   592,
     593,   334,   524,   442,   208,   209,   210,   534,    35,   616,
      35,    20,   219,   220,   221,   222,   186,   189,    35,   332,
     187,   581,   581,    35,   339,   542,    35,   344,   347,   356,
      36,   327,   266,    35,   389,   223,   232,   -20,   359,    21,
     289,   367,   290,   282,   282,   334,   363,   224,   225,   226,
     216,    22,   227,   228,   229,   230,   532,   233,   466,   340,
     464,   240,   241,   242,   243,   244,   245,   217,   463,   400,
     246,   247,   622,   623,   340,   147,   148,   541,    23,    35,
     366,   340,   179,   462,   264,  -375,   666,   341,  -375,   -20,
     564,   -20,    46,   305,   -20,  -375,    35,   558,   283,   285,
     -20,  -192,    67,   581,    68,   594,  -192,   525,    24,   292,
     482,    70,   346,   595,   664,    71,    74,   336,   266,   310,
     312,   315,   317,   319,   321,   323,   348,    76,   469,   470,
     346,   707,   473,   497,   330,   331,   671,   333,    78,    80,
     480,   481,   621,    82,   348,   267,   602,    46,   483,  -192,
     486,   357,   358,   522,   282,   478,   360,   361,   655,    35,
     680,   336,   686,   687,   710,   455,   618,    25,  -191,   369,
     371,   370,   523,   533,   341,   373,   374,   375,   376,   377,
     378,   379,   380,   415,   545,   546,   349,   605,   551,   341,
     423,   349,   385,   386,   388,    26,   341,   340,   537,   485,
      27,   579,    35,   540,   774,   727,   434,   396,   397,   398,
     399,   441,   400,    55,   424,   447,   -18,   453,   552,   674,
      55,    35,   427,   428,    35,    56,   429,    46,    35,    35,
    -191,    35,    56,   715,   659,  -192,   661,   662,   663,    35,
     665,   589,   590,   591,   592,   593,   472,   458,   460,   461,
     585,    35,   497,   186,   -20,   465,   284,   304,    35,    63,
     -20,    35,   559,    63,   561,   471,   772,   302,   -20,   372,
      35,   186,   303,   776,   479,   656,   270,   349,   583,   628,
     271,  -105,   532,   565,   620,   721,   487,   488,   489,    35,
      35,    35,   493,  -186,   631,   430,   195,   494,   495,   266,
    -186,   511,   724,  -199,   513,    35,    35,   514,   603,   391,
     368,   580,   341,   515,    63,   560,    35,    35,   723,   490,
     190,   191,   527,   708,   502,   503,   415,   199,   653,    35,
     301,   -18,    57,   553,   -18,    58,   554,   -99,   633,    57,
     250,   576,    58,   557,   251,   627,    35,   201,   722,   202,
     649,   400,   530,   672,   249,   531,   200,   346,   595,   643,
     -20,   178,   346,   -20,   -20,   321,   157,   -20,   203,   729,
     321,   348,   179,   422,   -20,   431,   348,    35,   334,   235,
     634,   147,   148,    35,   739,   757,   550,   770,  -195,  -195,
    -195,   335,   156,  -195,  -105,   272,   273,   274,  -105,   533,
     636,   639,   204,   637,    57,   562,   667,    58,   270,   211,
     567,   670,   271,  -199,   571,   572,  -192,   654,   575,   722,
     577,   578,   518,   519,   520,   521,   308,   607,   586,   587,
     588,    57,   597,   205,    58,   777,   600,   601,   714,   552,
     400,   401,   214,   -99,   604,   215,    35,   558,   346,   641,
    -268,    83,    35,   610,   281,   612,   711,   712,  -217,    35,
     402,   234,   348,    84,   186,   415,   248,   619,    35,   160,
     161,   162,   163,   164,    35,   263,   286,   624,   625,   320,
     626,   252,   265,   -20,   629,   630,   658,   640,    35,    35,
     632,  -268,    83,   635,   336,   281,    35,    84,   730,  -220,
      35,    35,    35,   216,    84,   657,    85,    35,   287,   381,
     160,   161,   162,   163,   164,   599,   648,   382,   166,   458,
    -196,  -196,  -196,    35,   288,  -196,   328,   272,   273,   274,
     443,   444,    35,   403,   404,   405,   406,   407,   408,   409,
     448,   410,   411,   412,   413,   449,   318,    85,   329,   642,
     -20,   676,   414,   186,   415,    86,   646,   679,   -20,   416,
     384,   387,   647,   -20,  -268,   681,  -217,  -217,  -217,   644,
     685,  -217,   645,  -217,  -217,  -217,   186,   186,   400,   688,
     606,   705,   706,   392,   677,   709,   423,   637,   279,   393,
     280,   -20,   178,   713,   737,   246,    86,   738,   678,   425,
     454,   762,    52,   179,   717,  -268,   -20,  -220,  -220,  -220,
     763,    63,  -220,   -20,  -220,  -220,  -220,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,    35,   457,   731,    83,   340,   734,   735,
     736,   186,    35,    35,   474,   433,    35,   438,    84,    92,
      93,   439,   764,    94,   306,   281,   512,    95,   -20,  -216,
     767,   -70,  -147,  -110,  -175,   196,   516,  -135,    64,   -20,
     160,   161,   162,   163,   164,  -179,   -20,   -20,   768,   309,
      35,   517,   539,   -20,   449,   147,   148,   505,   506,   773,
     -20,    85,   415,   547,   775,   543,   390,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   547,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   568,   573,   129,    35,   130,   131,   611,   584,   132,
      86,  -111,   509,   133,   613,  -111,  -298,   235,  -119,  -268,
     579,  -298,   341,    35,   668,   614,   -20,    57,  -305,  -305,
      58,   510,  -305,   134,   135,   669,  -305,  -216,  -216,  -216,
     -20,    35,  -216,    35,  -216,  -216,  -216,   552,   682,   683,
     186,   732,   297,   615,   440,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,   186,  -298,   617,   719,   446,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,   720,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
     765,   771,  -305,   186,  -305,  -305,   761,   452,  -305,   435,
       1,   492,  -305,     2,     3,     4,     5,     6,     7,   569,
    -298,  -298,   563,  -298,   236,   675,  -305,   609,   740,  -305,
     716,   237,  -305,  -305,   340,   235,   529,   276,   324,    35,
     160,   161,   162,   163,   164,   277,    92,    93,   186,   496,
      94,   281,   526,   504,    95,  -219,   383,   253,   570,   400,
     760,   651,   254,   278,   766,   650,   160,   161,   162,   163,
     164,   212,  -190,   718,   538,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   213,  -147,  -110,  -175,   652,   555,  -135,   395,
     362,   556,   299,     8,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   300,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
     129,   235,   130,   131,     0,    35,   132,   255,   256,   257,
     133,   258,    92,    93,   259,   260,    94,   261,   262,   341,
      95,     0,     0,     0,    57,     0,     0,    58,     0,     0,
     134,   135,     0,  -219,  -219,  -219,   334,   401,  -219,  -119,
    -219,  -219,  -219,   415,   159,     0,     0,   160,   161,   162,
     163,   164,   165,   166,     0,     0,   402,     0,     0,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
       0,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,   129,   216,   130,   131,
       0,    35,   132,     0,     0,   354,   133,     0,    92,    93,
       0,     0,    94,     0,     0,     0,    95,     0,     0,     0,
      57,     0,     0,    58,     0,     0,   134,   135,     0,   403,
     404,   405,   406,   407,   408,   409,     0,   410,   411,   412,
     413,   160,   161,   162,   163,   164,     0,     0,   414,   186,
       0,     0,   336,     0,     0,   416,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,     0,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,   129,    35,   130,   131,     0,     0,   132,     0,
      92,    93,   133,     0,    94,     0,     0,     0,    95,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    35,    58,
       0,     0,   134,   135,   340,   401,   159,     0,     0,   160,
     161,   162,   163,   164,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,   402,     0,     0,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,     0,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,     0,     0,   129,   235,   130,   131,     0,    35,
     132,     0,     0,     0,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
       0,    58,     0,     0,   134,   135,     0,   403,   404,   405,
     406,   407,   408,   409,     0,   410,   411,   412,   413,     0,
       0,     0,     0,     0,     0,     0,   414,   186,     0,   341,
       0,     0,     0,   416,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,     0,     0,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,  -278,   401,     0,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,     0,     0,     0,
       0,     0,     0,   345,    57,     0,     0,    58,     0,     0,
       0,  -285,   401,     0,     0,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,   402,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,     0,     0,     0,   403,
     404,   405,   406,   407,   408,   409,    35,   410,   411,   412,
     413,     0,     0,     0,  -376,     0,     0,     0,   414,   186,
    -278,     0,     0,  -278,     0,   416,     0,     0,     0,     0,
       0,     0,     0,   402,   403,   404,   405,   406,   407,   408,
     409,     0,   410,   411,   412,   413,     0,     0,     0,     0,
       0,     0,     0,   414,   186,  -285,     0,     0,  -285,     0,
     416,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
       0,     0,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,  -280,   216,     0,     0,     0,     0,
       0,     0,     0,   132,     0,     0,   403,   404,   405,   406,
     407,   408,   409,     0,   410,   411,   412,   413,     0,     0,
     345,    57,     0,     0,    58,   414,   186,     0,     0,     0,
       0,     0,   416,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,     0,
    -268,    83,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,    84,    92,    93,     0,     0,    94,     0,
       0,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,     0,    85,     0,  -280,     0,
       0,  -280,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,     0,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,  -271,    83,   129,     0,
     130,   131,     0,     0,   132,    86,     0,     0,   133,    84,
       0,     0,     0,     0,  -268,     0,     0,  -268,    83,     0,
       0,     0,    57,     0,     0,    58,     0,     0,   134,   135,
      84,     0,     0,     0,     0,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,     0,    85,     0,     0,     0,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,     0,    85,   400,   689,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -190,     0,     0,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,   -70,  -147,  -110,
    -175,    86,     0,  -135,    64,     0,     0,     0,     0,     0,
    -271,  -179,     0,     0,     0,     0,     0,    -2,   293,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,   295,
    -190,  -268,     0,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
     -70,  -147,  -110,  -175,   294,     0,  -135,    64,     0,     0,
       0,     0,     0,     0,  -179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -119,     0,     0,     0,   415,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,  -119,     0,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   345,    57,
       0,     0,    58,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,     0,     0,     0,   129,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   231,
       0,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,     0,     0,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126
};

static const yytype_int16 yycheck[] =
{
       0,    45,    48,    81,   298,   427,    40,   168,   247,   376,
      10,    11,    12,    13,    14,    15,    16,   173,    18,    19,
      20,   226,    22,    23,   209,    25,    26,   487,    48,    52,
     291,    41,   225,    41,   227,   364,    36,   204,   207,   244,
      41,   244,   338,   339,    41,    41,    46,    47,     5,    49,
       0,     1,     0,   285,   464,     5,    41,     1,     5,    59,
      60,     5,     1,     5,    64,    65,     5,    41,    41,     1,
     113,    21,    41,    21,     5,     5,     7,     8,     9,    10,
      11,     0,    12,   315,    84,    85,    86,   437,     5,   541,
       5,   113,    92,    93,    94,    95,   113,    12,     5,   216,
     117,   502,   503,     5,   222,   455,     5,   225,   226,   227,
      27,    18,     1,     5,   275,   115,   136,    59,   235,   113,
     107,    13,   109,   279,   280,     0,   244,   127,   128,   129,
       1,   113,   132,   133,   134,   135,     1,   137,    13,     0,
     333,   141,   142,   143,   144,   145,   146,    18,   333,     0,
     150,   151,   553,   554,     0,    57,    58,   454,     5,     5,
      59,     0,   119,   332,   164,   115,   618,   115,   118,   108,
     630,   115,   119,   196,   118,   125,     5,   125,   178,   179,
     119,   113,   192,   584,   192,   116,   118,   117,     5,   189,
     359,   192,   226,   124,   616,   192,   192,   116,     1,   199,
     200,   201,   202,   203,   204,   205,   226,   192,   343,   344,
     244,   663,   347,   374,   214,   215,   626,   217,   192,   192,
     355,   356,   551,   192,   244,   114,   522,   119,   363,   118,
     365,   231,   232,   402,   390,   353,   236,   237,     0,     5,
     641,   116,   652,   653,   666,   323,   543,   113,   113,   249,
      13,   251,   421,   118,   115,   255,   256,   257,   258,   259,
     260,   261,   262,   114,   457,   458,   471,   528,   471,   115,
     293,   476,   272,   273,   274,     5,   115,     0,   445,   118,
       0,     5,     5,   450,   113,   707,   309,   287,   288,   289,
     290,   314,     0,     1,   294,   318,     5,   320,     5,   628,
       1,     5,   302,   303,     5,    13,   306,   119,     5,     5,
     113,     5,    13,   680,   611,   118,   613,   614,   615,     5,
     617,     7,     8,     9,    10,    11,   346,   327,   328,   329,
       1,     5,   493,   113,     5,   335,     1,   117,     5,   373,
       5,     5,   477,   377,   479,   345,   768,   113,    13,   112,
       5,   113,   118,   775,   354,   117,     1,   562,   503,   562,
       5,     0,     1,    59,   549,   688,   366,   367,   368,     5,
       5,     5,   372,    81,   567,    12,    81,    13,    14,     1,
      81,   381,   705,     5,   384,     5,     5,   387,   523,   283,
     629,   115,   115,   393,   428,   118,     5,     5,   692,    18,
       5,     6,   425,   664,    13,    14,   114,    23,   601,     5,
     114,   120,   120,   120,   123,   123,   123,    13,   115,   120,
     114,   499,   123,    21,   118,   560,     5,   110,   689,    29,
     116,     0,   432,   626,    13,   435,    25,   471,   124,   584,
     105,   108,   476,   108,   115,   445,   492,   118,    24,   710,
     450,   471,   119,   117,   119,    92,   476,     5,     0,     1,
     115,    57,    58,     5,   725,   726,   466,   761,   113,   114,
     115,    13,   492,   118,   113,   120,   121,   122,   117,   118,
     115,   115,    26,   118,   120,   485,   621,   123,     1,   114,
     490,   626,     5,   115,   494,   495,   118,   117,   498,   760,
     500,   501,   396,   397,   398,   399,   114,   530,   508,   509,
     510,   120,   512,    37,   123,   776,   516,   517,   679,     5,
       0,     1,   117,   119,   524,   117,     5,   125,   562,    15,
       0,     1,     5,   533,     1,   535,   671,   672,     5,     5,
      20,   114,   562,    13,   113,   114,   114,   547,     5,    16,
      17,    18,    19,    20,     5,    13,   114,   557,   558,     1,
     560,    22,    22,     5,   564,   565,   610,   115,     5,     5,
     570,     0,     1,   573,   116,     1,     5,    13,   713,     5,
       5,     5,     5,     1,    13,   608,    56,     5,   107,    13,
      16,    17,    18,    19,    20,    18,   596,    21,    22,   599,
     113,   114,   115,     5,   109,   118,   117,   120,   121,   122,
      12,    13,     5,    93,    94,    95,    96,    97,    98,    99,
      13,   101,   102,   103,   104,    18,     1,    56,   117,   115,
       5,   631,   112,   113,   114,   105,   115,   637,    13,   119,
     118,   122,   115,    18,   114,   645,   113,   114,   115,   115,
     650,   118,   118,   120,   121,   122,   113,   113,     0,   659,
     117,   661,   662,   115,   115,   665,   689,   118,   170,   105,
     172,   113,   108,   673,   721,   675,   105,   724,   115,     1,
     113,   728,     1,   119,   684,   114,     5,   113,   114,   115,
     115,   725,   118,    12,   120,   121,   122,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     5,     5,   715,     1,     0,   718,   719,
     720,   113,     5,     5,     5,   117,     5,   113,    13,    12,
      13,   117,   732,    16,    13,     1,    13,    20,   113,     5,
     740,    23,    24,    25,    26,     1,   115,    29,    30,     5,
      16,    17,    18,    19,    20,    37,    12,    13,   758,     1,
       5,    18,    13,     5,    18,    57,    58,    12,    13,   769,
      12,    56,   114,    56,   774,   113,   278,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    56,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   115,    83,    96,     5,    98,    99,   113,    83,   102,
     105,   113,    13,   106,   113,   117,     0,     1,   110,   114,
       5,     5,   115,     5,   117,   113,    92,   120,    12,    13,
     123,    13,    16,   126,   127,   128,    20,   113,   114,   115,
      92,     5,   118,     5,   120,   121,   122,     5,    12,    13,
     113,    13,   192,   113,   117,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   113,    56,   113,   115,   117,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   115,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     116,   116,    96,   113,    98,    99,   728,   117,   102,   311,
      28,   370,   106,    31,    32,    33,    34,    35,    36,   492,
     114,   115,   487,   117,   118,   630,   120,   531,   725,   123,
     681,   125,   126,   127,     0,     1,   428,    13,   206,     5,
      16,    17,    18,    19,    20,    21,    12,    13,   113,   373,
      16,     1,   117,   377,    20,     5,   264,    13,   493,     0,
       1,   598,    18,   170,   734,   597,    16,    17,    18,    19,
      20,    88,    13,   685,   448,    16,    17,    18,    19,    20,
      21,    22,    88,    24,    25,    26,   599,   476,    29,   285,
     239,   476,   192,   111,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,   192,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      96,     1,    98,    99,    -1,     5,   102,    93,    94,    95,
     106,    97,    12,    13,   100,   101,    16,   103,   104,   115,
      20,    -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
     126,   127,    -1,   113,   114,   115,     0,     1,   118,   110,
     120,   121,   122,   114,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    20,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    96,     1,    98,    99,
      -1,     5,   102,    -1,    -1,   105,   106,    -1,    12,    13,
      -1,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    -1,
     120,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,   102,   103,
     104,    16,    17,    18,    19,    20,    -1,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    96,     5,    98,    99,    -1,    -1,   102,    -1,
      12,    13,   106,    -1,    16,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,     5,   123,
      -1,    -1,   126,   127,     0,     1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    96,     1,    98,    99,    -1,     5,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,    93,    94,    95,
      96,    97,    98,    99,    -1,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,   115,
      -1,    -1,    -1,   119,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,   123,    -1,    -1,
      -1,     0,     1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,     5,   101,   102,   103,
     104,    -1,    -1,    -1,     1,    -1,    -1,    -1,   112,   113,
     114,    -1,    -1,   117,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   114,    -1,    -1,   117,    -1,
     119,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,   102,   103,   104,    -1,    -1,
     119,   120,    -1,    -1,   123,   112,   113,    -1,    -1,    -1,
      -1,    -1,   119,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
       0,     1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    12,    13,    -1,    -1,    16,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    -1,   114,    -1,
      -1,   117,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,     0,     1,    96,    -1,
      98,    99,    -1,    -1,   102,   105,    -1,    -1,   106,    13,
      -1,    -1,    -1,    -1,   114,    -1,    -1,     0,     1,    -1,
      -1,    -1,   120,    -1,    -1,   123,    -1,    -1,   126,   127,
      13,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   105,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
     114,    37,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      13,   114,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,   114,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
      -1,    -1,   123,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    28,    31,    32,    33,    34,    35,    36,   111,   130,
     131,   132,   133,   134,   135,   136,   137,   139,   161,   113,
     113,   113,   113,     5,     5,   113,     5,     0,   139,   139,
     139,   139,   139,   139,   139,     5,    27,   141,   145,   139,
     139,   139,   139,   208,   139,   139,   119,   162,   163,   165,
     139,   139,     1,   139,   140,     1,    13,   120,   123,   191,
     192,   193,   206,   207,    30,   148,   155,   156,   157,   174,
     176,   177,   179,   187,   188,   194,   195,   201,   202,   203,
     204,   209,   212,     1,    13,    56,   105,   236,   237,   238,
     239,   241,    12,    13,    16,    20,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    96,
      98,    99,   102,   106,   126,   127,   207,   244,   247,   248,
     251,   252,   253,   254,   263,   264,   265,    57,    58,   166,
     167,   169,   170,   139,   139,   164,   252,   263,   139,    13,
      16,    17,    18,    19,    20,    21,    22,   214,   220,   221,
     222,   223,   225,   226,   227,   228,   229,   235,   108,   119,
     181,   182,   183,   184,   185,   186,   113,   117,   269,    12,
       5,     6,   147,   139,   139,    81,     1,   139,   139,    23,
      25,   110,    29,    24,    26,    37,   214,   273,   139,   139,
     139,   114,   238,   239,   117,   117,     1,    18,   240,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,    79,   252,   139,   114,     1,   118,   125,   249,   250,
     139,   139,   139,   139,   139,   139,   139,   139,   114,    13,
     114,   118,    22,    13,    18,    93,    94,    95,    97,   100,
     101,   103,   104,    13,   139,    22,     1,   114,   211,   223,
       1,     5,   120,   121,   122,   205,    13,    21,   225,   226,
     226,     1,   227,   139,     1,   139,   114,   107,   109,   107,
     109,   274,   139,     1,    27,    55,   146,   148,   149,   267,
     268,   114,   113,   118,   117,   269,    13,   158,   114,     1,
     139,   154,   139,   175,     1,   139,   178,   139,     1,   139,
       1,   139,   175,   139,   211,   274,   240,    18,   117,   117,
     139,   139,   273,   139,     0,    13,   116,   144,   243,   249,
       0,   115,   143,   247,   249,   119,   207,   249,   252,   254,
     256,   259,   260,   261,   105,   247,   249,   139,   139,   273,
     139,   139,   251,   249,   260,   262,    59,    13,   165,   139,
     139,    13,   112,   139,   139,   139,   139,   139,   139,   139,
     139,    13,    21,   222,   118,   139,   139,   122,   139,   223,
     226,   185,   115,   105,   181,   241,   139,   139,   139,   139,
       0,     1,    20,    93,    94,    95,    96,    97,    98,    99,
     101,   102,   103,   104,   112,   114,   119,   142,   269,   270,
     271,   272,   117,   269,   139,     1,   140,   139,   139,   139,
      12,    92,   159,   117,   269,   159,   170,   172,   113,   117,
     117,   269,   181,    12,    13,   189,   117,   269,    13,    18,
     196,   233,   117,   269,   113,   214,   210,     5,   139,   245,
     139,   139,   274,   240,   247,   139,    13,   144,   144,   143,
     143,   139,   252,   143,     5,   138,   257,   258,   249,   139,
     143,   143,   274,   143,   258,   118,   143,   139,   139,   139,
      18,   160,   163,   139,    13,    14,   206,   223,   224,   215,
     217,   217,    13,    14,   206,    12,    13,   218,   219,    13,
      13,   139,    13,   139,   139,   139,   115,    18,   185,   185,
     185,   185,   274,   274,    12,   117,   117,   269,   236,   193,
     139,   139,     1,   118,   210,   173,   180,   175,   233,    13,
     175,   173,   210,   113,   246,   247,   247,    56,   242,   242,
     139,   260,     5,   120,   123,   256,   259,    21,   125,   143,
     118,   143,   139,   166,   169,    59,   168,   139,   115,   164,
     224,   139,   139,    83,     1,   139,   214,   139,   139,     5,
     115,   138,   234,   234,    83,     1,   139,   139,   139,     7,
       8,     9,    10,    11,   116,   124,   231,   139,   213,    18,
     139,   139,   144,   143,   139,   142,   117,   269,   171,   172,
     139,   113,   139,   113,   113,   113,   208,   113,   173,   139,
     240,   258,   138,   138,   139,   139,   139,   143,   260,   139,
     139,   247,   139,   115,   115,   139,   115,   118,   216,   115,
     115,    15,   115,   234,   115,   118,   115,   115,   139,   116,
     231,   221,   245,   247,   117,     0,   117,   269,   170,   173,
     150,   173,   173,   173,   236,   173,   208,   143,   117,   128,
     143,   242,   247,   255,   258,   167,   139,   115,   115,   139,
     138,   139,    12,    13,   232,   139,   242,   242,   139,     1,
     142,   152,   153,   156,   157,   176,   177,   188,   195,   202,
     204,   212,   266,   267,   268,   139,   139,   208,   142,   139,
     236,   143,   143,   139,   223,   217,   218,   139,   232,   115,
     115,   150,   142,   140,   150,   190,   197,   236,   151,   142,
     143,   139,    13,   230,   139,   139,   139,   266,   266,   142,
     191,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   142,   198,   200,
       1,   152,   266,   115,   139,   116,   230,   139,   139,   199,
     140,   116,   236,   139,   113,   139,   236,   142
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
      yyerror (parser, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, parser)
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
		  Type, Value, parser); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    CSSParser* parser;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parser);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    CSSParser* parser;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, CSSParser* parser)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser)
    YYSTYPE *yyvsp;
    int yyrule;
    CSSParser* parser;
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
		       		       , parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parser); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, CSSParser* parser)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    CSSParser* parser;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 148: /* "valid_rule" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2365 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 149: /* "rule" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2374 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 150: /* "block_rule_list" */

/* Line 1000 of yacc.c  */
#line 322 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->ruleList); };

/* Line 1000 of yacc.c  */
#line 2383 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 151: /* "block_valid_rule_list" */

/* Line 1000 of yacc.c  */
#line 322 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->ruleList); };

/* Line 1000 of yacc.c  */
#line 2392 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 152: /* "block_valid_rule" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2401 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 153: /* "block_rule" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2410 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 156: /* "import" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2419 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 160: /* "maybe_media_value" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2428 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 162: /* "source_size_list" */

/* Line 1000 of yacc.c  */
#line 340 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->sourceSizeList); };

/* Line 1000 of yacc.c  */
#line 2437 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 163: /* "maybe_source_media_query_exp" */

/* Line 1000 of yacc.c  */
#line 343 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->mediaQueryExp); };

/* Line 1000 of yacc.c  */
#line 2446 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 164: /* "source_size_length" */

/* Line 1000 of yacc.c  */
#line 346 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ destroy((yyvaluep->value)); };

/* Line 1000 of yacc.c  */
#line 2455 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 165: /* "base_media_query_exp" */

/* Line 1000 of yacc.c  */
#line 337 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->mediaQueryExp); };

/* Line 1000 of yacc.c  */
#line 2464 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 166: /* "media_query_exp" */

/* Line 1000 of yacc.c  */
#line 337 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->mediaQueryExp); };

/* Line 1000 of yacc.c  */
#line 2473 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 167: /* "media_query_exp_list" */

/* Line 1000 of yacc.c  */
#line 349 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->mediaQueryExpList); };

/* Line 1000 of yacc.c  */
#line 2482 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 168: /* "maybe_and_media_query_exp_list" */

/* Line 1000 of yacc.c  */
#line 349 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->mediaQueryExpList); };

/* Line 1000 of yacc.c  */
#line 2491 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 170: /* "media_query" */

/* Line 1000 of yacc.c  */
#line 332 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->mediaQuery); };

/* Line 1000 of yacc.c  */
#line 2500 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 171: /* "maybe_media_list" */

/* Line 1000 of yacc.c  */
#line 329 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->mediaList)) (yyvaluep->mediaList)->deref(); };

/* Line 1000 of yacc.c  */
#line 2509 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 172: /* "media_list" */

/* Line 1000 of yacc.c  */
#line 329 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->mediaList)) (yyvaluep->mediaList)->deref(); };

/* Line 1000 of yacc.c  */
#line 2518 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 176: /* "media" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2527 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 177: /* "supports" */

/* Line 1000 of yacc.c  */
#line 413 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2536 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 188: /* "keyframes" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2545 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 190: /* "keyframes_rule" */

/* Line 1000 of yacc.c  */
#line 357 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->keyframeRuleList); };

/* Line 1000 of yacc.c  */
#line 2554 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 191: /* "keyframe_rule" */

/* Line 1000 of yacc.c  */
#line 354 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->keyframe)) (yyvaluep->keyframe)->deref(); };

/* Line 1000 of yacc.c  */
#line 2563 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 192: /* "key_list" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2572 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 195: /* "page" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2581 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 196: /* "page_selector" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2590 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 202: /* "font_face" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2599 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 204: /* "region" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2608 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 212: /* "ruleset" */

/* Line 1000 of yacc.c  */
#line 319 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ if ((yyvaluep->rule)) (yyvaluep->rule)->deref(); };

/* Line 1000 of yacc.c  */
#line 2617 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 214: /* "selector_list" */

/* Line 1000 of yacc.c  */
#line 372 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selectorList); };

/* Line 1000 of yacc.c  */
#line 2626 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 217: /* "nested_selector_list" */

/* Line 1000 of yacc.c  */
#line 372 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selectorList); };

/* Line 1000 of yacc.c  */
#line 2635 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 219: /* "comma_separated_lang_ranges" */

/* Line 1000 of yacc.c  */
#line 388 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->stringList); };

/* Line 1000 of yacc.c  */
#line 2644 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 220: /* "complex_selector_with_trailing_whitespace" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2653 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 221: /* "complex_selector" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2662 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 223: /* "compound_selector" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2671 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 224: /* "simple_selector_list" */

/* Line 1000 of yacc.c  */
#line 372 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selectorList); };

/* Line 1000 of yacc.c  */
#line 2680 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 226: /* "specifier_list" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2689 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 227: /* "specifier" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2698 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 228: /* "class" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2707 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 229: /* "attrib" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2716 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 233: /* "pseudo_page" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2725 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 234: /* "nth_selector_ending" */

/* Line 1000 of yacc.c  */
#line 373 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selectorList); };

/* Line 1000 of yacc.c  */
#line 2734 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 235: /* "pseudo" */

/* Line 1000 of yacc.c  */
#line 369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->selector); };

/* Line 1000 of yacc.c  */
#line 2743 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 243: /* "ident_list" */

/* Line 1000 of yacc.c  */
#line 399 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2752 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 244: /* "track_names_list" */

/* Line 1000 of yacc.c  */
#line 402 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ destroy((yyvaluep->value)); };

/* Line 1000 of yacc.c  */
#line 2761 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 245: /* "whitespace_or_expr" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2770 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 246: /* "maybe_expr" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2779 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 247: /* "expr" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2788 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 248: /* "valid_expr" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2797 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 251: /* "term" */

/* Line 1000 of yacc.c  */
#line 364 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ destroy((yyvaluep->value)); };

/* Line 1000 of yacc.c  */
#line 2806 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 253: /* "function" */

/* Line 1000 of yacc.c  */
#line 364 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ destroy((yyvaluep->value)); };

/* Line 1000 of yacc.c  */
#line 2815 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 254: /* "variable_function" */

/* Line 1000 of yacc.c  */
#line 364 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ destroy((yyvaluep->value)); };

/* Line 1000 of yacc.c  */
#line 2824 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 259: /* "calc_func_paren_expr" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2833 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 260: /* "calc_func_expr" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2842 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 261: /* "valid_calc_func_expr" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2851 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 262: /* "calc_func_expr_list" */

/* Line 1000 of yacc.c  */
#line 384 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ delete (yyvaluep->valueList); };

/* Line 1000 of yacc.c  */
#line 2860 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 263: /* "calc_function" */

/* Line 1000 of yacc.c  */
#line 364 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ destroy((yyvaluep->value)); };

/* Line 1000 of yacc.c  */
#line 2869 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;
      case 265: /* "min_or_max_function" */

/* Line 1000 of yacc.c  */
#line 364 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
	{ destroy((yyvaluep->value)); };

/* Line 1000 of yacc.c  */
#line 2878 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
	break;

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
int yyparse (CSSParser* parser);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





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
yyparse (CSSParser* parser)
#else
int
yyparse (parser)
    CSSParser* parser;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
        case 11:

/* Line 1455 of yacc.c  */
#line 444 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->m_rule = adoptRef((yyvsp[(4) - (6)].rule)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 446 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->m_keyframe = adoptRef((yyvsp[(4) - (6)].keyframe)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 451 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if ((yyvsp[(4) - (5)].valueList)) {
            parser->m_valueList = std::unique_ptr<CSSParserValueList>((yyvsp[(4) - (5)].valueList));
            int oldParsedProperties = parser->m_parsedProperties.size();
            if (!parser->parseValue(parser->m_id, parser->m_important))
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            parser->m_valueList = nullptr;
        }
    ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 462 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->m_mediaQuery = std::unique_ptr<MediaQuery>((yyvsp[(4) - (5)].mediaQuery)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 465 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if ((yyvsp[(4) - (5)].selectorList)) {
            if (parser->m_selectorListForParseSelector)
                parser->m_selectorListForParseSelector->adoptSelectorVector(*(yyvsp[(4) - (5)].selectorList));
            parser->recycleSelectorVector(std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>((yyvsp[(4) - (5)].selectorList)));
        }
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 474 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->m_supportsCondition = (yyvsp[(4) - (5)].boolean); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 492 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
     if (parser->m_styleSheet)
         parser->m_styleSheet->parserSetEncodingFromCharsetRule((yyvsp[(3) - (5)].string));
     if (parser->isExtractingSourceData() && parser->m_currentRuleDataStack->isEmpty() && parser->m_ruleSourceDataResult)
         parser->addNewRuleToSourceTree(CSSRuleSourceData::createUnknown());
  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 507 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if (RefPtr<StyleRuleBase> rule = adoptRef((yyvsp[(2) - (3)].rule))) {
            if (parser->m_styleSheet)
                parser->m_styleSheet->parserAppendRule(rule.releaseNonNull());
        }
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 521 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.rule) = nullptr; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 531 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = (yyvsp[(1) - (1)].rule);
        parser->m_hadSyntacticallyValidCSSRule = true;
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 535 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.rule) = nullptr; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 536 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.rule) = nullptr; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 537 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.rule) = nullptr; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 541 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.ruleList) = nullptr; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 542 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
      (yyval.ruleList) = (yyvsp[(1) - (3)].ruleList);
      if (RefPtr<StyleRuleBase> rule = adoptRef((yyvsp[(2) - (3)].rule))) {
          if (!(yyval.ruleList))
              (yyval.ruleList) = new Vector<RefPtr<StyleRuleBase>>;
          (yyval.ruleList)->append(rule.release());
      }
  ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 553 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.ruleList) = nullptr; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 554 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
      (yyval.ruleList) = (yyvsp[(1) - (3)].ruleList);
      if (RefPtr<StyleRuleBase> rule = adoptRef((yyvsp[(2) - (3)].rule))) {
          if (!(yyval.ruleList))
              (yyval.ruleList) = new Vector<RefPtr<StyleRuleBase>>;
          (yyval.ruleList)->append(rule.release());
      }
  ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 576 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.rule) = nullptr; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 576 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.rule) = nullptr; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 576 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.rule) = nullptr; ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 579 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
        parser->markRuleBodyStart();
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 586 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::IMPORT_RULE);
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 592 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = parser->createImportRule((yyvsp[(4) - (7)].string), adoptRef((yyvsp[(6) - (7)].mediaList))).leakRef();
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 595 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = parser->createImportRule((yyvsp[(4) - (7)].string), adoptRef((yyvsp[(6) - (7)].mediaList))).leakRef();
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 598 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = nullptr;
        parser->popRuleData();
        if ((yyvsp[(6) - (7)].mediaList))
            (yyvsp[(6) - (7)].mediaList)->deref();
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 604 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = nullptr;
        parser->popRuleData();
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 608 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = nullptr;
        parser->popRuleData();
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 615 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->addNamespace((yyvsp[(3) - (6)].string), (yyvsp[(4) - (6)].string)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 621 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.string).clear(); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 625 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.valueList) = nullptr; ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 625 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.valueList) = (yyvsp[(3) - (4)].valueList); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 628 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->m_sourceSizeList = std::unique_ptr<Vector<CSSParser::SourceSize>>((yyvsp[(3) - (5)].sourceSizeList));
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 634 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.sourceSizeList) = new Vector<CSSParser::SourceSize>;
        (yyval.sourceSizeList)->append(parser->sourceSize(std::unique_ptr<MediaQueryExp>((yyvsp[(1) - (2)].mediaQueryExp)), (yyvsp[(2) - (2)].value)));
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 638 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.sourceSizeList) = (yyvsp[(1) - (6)].sourceSizeList);
        (yyval.sourceSizeList)->append(parser->sourceSize(std::unique_ptr<MediaQueryExp>((yyvsp[(5) - (6)].mediaQueryExp)), (yyvsp[(6) - (6)].value)));
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 645 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQueryExp) = new MediaQueryExp;
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 652 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<CSSParserValueList> mediaValue((yyvsp[(5) - (6)].valueList));
        (yyvsp[(3) - (6)].string).lower();
        (yyval.mediaQueryExp) = new MediaQueryExp((yyvsp[(3) - (6)].string), mediaValue.get());
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 660 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if ((yyvsp[(1) - (4)].mediaQueryRestrictor) != MediaQuery::None) {
            
            
            delete (yyvsp[(3) - (4)].mediaQueryExp);
            (yyval.mediaQueryExp) = new MediaQueryExp;
        } else
            (yyval.mediaQueryExp) = (yyvsp[(3) - (4)].mediaQueryExp);
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 672 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = new Vector<std::unique_ptr<MediaQueryExp>>;
        (yyval.mediaQueryExpList)->append(std::unique_ptr<MediaQueryExp>((yyvsp[(1) - (1)].mediaQueryExp)));
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 676 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = (yyvsp[(1) - (5)].mediaQueryExpList);
        (yyval.mediaQueryExpList)->append(std::unique_ptr<MediaQueryExp>((yyvsp[(5) - (5)].mediaQueryExp)));
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 683 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = new Vector<std::unique_ptr<MediaQueryExp>>;
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 686 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = (yyvsp[(3) - (3)].mediaQueryExpList);
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 692 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::None;
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 695 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::Only;
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 698 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::Not;
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 704 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaQuery) = new MediaQuery(MediaQuery::None, "all", std::unique_ptr<Vector<std::unique_ptr<MediaQueryExp>>>((yyvsp[(1) - (1)].mediaQueryExpList)));
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 708 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyvsp[(3) - (5)].string).lower();
        (yyval.mediaQuery) = new MediaQuery((yyvsp[(1) - (5)].mediaQueryRestrictor), (yyvsp[(3) - (5)].string), std::unique_ptr<Vector<std::unique_ptr<MediaQueryExp>>>((yyvsp[(5) - (5)].mediaQueryExpList)));
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 714 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.mediaList) = &MediaQuerySet::create().leakRef(); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 717 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaList) = &MediaQuerySet::create().leakRef();
        (yyval.mediaList)->addMediaQuery(std::unique_ptr<MediaQuery>((yyvsp[(1) - (1)].mediaQuery)));
        parser->updateLastMediaLine((yyval.mediaList));
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 722 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaList) = (yyvsp[(1) - (4)].mediaList);
        std::unique_ptr<MediaQuery> mediaQuery((yyvsp[(4) - (4)].mediaQuery));
        if ((yyval.mediaList)) {
            (yyval.mediaList)->addMediaQuery(WTF::move(mediaQuery));
            parser->updateLastMediaLine((yyval.mediaList));
        }
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 730 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.mediaList) = nullptr;
        if ((yyvsp[(1) - (2)].mediaList))
            (yyvsp[(1) - (2)].mediaList)->deref();
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 738 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleBodyStart();
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 744 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::MEDIA_RULE);
    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 750 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 756 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = parser->createMediaRule(adoptRef((yyvsp[(4) - (10)].mediaList)), std::unique_ptr<Vector<RefPtr<StyleRuleBase>>>((yyvsp[(9) - (10)].ruleList)).get()).leakRef();
    ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 759 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = parser->createEmptyMediaRule(std::unique_ptr<Vector<RefPtr<StyleRuleBase>>>((yyvsp[(7) - (8)].ruleList)).get()).leakRef();
    ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 762 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = nullptr;
        parser->popRuleData();
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 769 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = parser->createSupportsRule((yyvsp[(4) - (10)].boolean), std::unique_ptr<Vector<RefPtr<StyleRuleBase>>>((yyvsp[(9) - (10)].ruleList)).get()).leakRef();
    ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 772 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = nullptr;
        parser->popRuleData();
        parser->popSupportsRuleData();
    ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 780 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 783 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 789 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::SUPPORTS_RULE);
        parser->markSupportsRuleHeaderStart();
    ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 796 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
        parser->markSupportsRuleHeaderEnd();
    ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 804 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = !(yyvsp[(3) - (3)].boolean); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 807 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = (yyvsp[(1) - (4)].boolean) && (yyvsp[(4) - (4)].boolean); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 808 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = (yyvsp[(1) - (4)].boolean) && (yyvsp[(4) - (4)].boolean); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 812 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = (yyvsp[(1) - (4)].boolean) || (yyvsp[(4) - (4)].boolean); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 813 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = (yyvsp[(1) - (4)].boolean) || (yyvsp[(4) - (4)].boolean); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 817 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = (yyvsp[(3) - (5)].boolean); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 818 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = (yyvsp[(1) - (1)].boolean); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 819 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = false; ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 823 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.boolean) = false;
        CSSParser* p = static_cast<CSSParser*>(parser);
        std::unique_ptr<CSSParserValueList> propertyValue((yyvsp[(6) - (9)].valueList));
        if ((yyvsp[(3) - (9)].id) && propertyValue) {
            p->m_valueList = WTF::move(propertyValue);
            int oldParsedProperties = p->m_parsedProperties.size();
            (yyval.boolean) = p->parseValue((yyvsp[(3) - (9)].id), (yyvsp[(7) - (9)].boolean));
            
            if ((yyval.boolean))
                p->rollbackLastProperties(p->m_parsedProperties.size() - oldParsedProperties);
            p->m_valueList = nullptr;
        }
        p->markPropertyEnd((yyvsp[(7) - (9)].boolean), false);
    ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 839 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.boolean) = false;
        CSSParser* p = static_cast<CSSParser*>(parser);
        std::unique_ptr<CSSParserValueList> propertyValue((yyvsp[(6) - (9)].valueList));
        if (propertyValue) {
            parser->m_valueList = WTF::move(propertyValue);
            int oldParsedProperties = p->m_parsedProperties.size();
            p->setCustomPropertyName((yyvsp[(3) - (9)].string));
            (yyval.boolean) = p->parseValue(CSSPropertyCustom, (yyvsp[(7) - (9)].boolean));
            if ((yyval.boolean))
                p->rollbackLastProperties(p->m_parsedProperties.size() - oldParsedProperties);
            p->m_valueList = nullptr;
        }
        p->markPropertyEnd((yyvsp[(7) - (9)].boolean), false);
    ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 857 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::KEYFRAMES_RULE);
    ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 863 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = parser->createKeyframesRule((yyvsp[(4) - (10)].string), std::unique_ptr<Vector<RefPtr<StyleKeyframe>>>((yyvsp[(9) - (10)].keyframeRuleList))).leakRef();
    ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 871 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.keyframeRuleList) = new Vector<RefPtr<StyleKeyframe>>; ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 872 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.keyframeRuleList) = (yyvsp[(1) - (3)].keyframeRuleList);
        if (RefPtr<StyleKeyframe> keyframe = adoptRef((yyvsp[(2) - (3)].keyframe)))
            (yyval.keyframeRuleList)->append(keyframe.release());
    ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 879 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.keyframe) = parser->createKeyframe(*std::unique_ptr<CSSParserValueList>((yyvsp[(1) - (6)].valueList))).leakRef(); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 882 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.valueList) = new CSSParserValueList;
        (yyval.valueList)->addValue((yyvsp[(1) - (1)].value));
    ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 886 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (5)].valueList);
        ASSERT((yyvsp[(5) - (5)].value).unit != CSSParserValue::Function); 
        if ((yyval.valueList))
            (yyval.valueList)->addValue((yyvsp[(5) - (5)].value));
    ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 895 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[(1) - (2)].integer) * (yyvsp[(2) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 896 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER;
        CSSParserString& str = (yyvsp[(1) - (1)].string);
        if (str.equalIgnoringCase("from"))
            (yyval.value).fValue = 0;
        else if (str.equalIgnoringCase("to"))
            (yyval.value).fValue = 100;
        else {
            (yyval.value).unit = 0;
            YYERROR;
        }
    ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 908 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).unit = 0;
    ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 914 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::PAGE_RULE);
    ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 921 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if ((yyvsp[(4) - (10)].selector))
            (yyval.rule) = parser->createPageRule(std::unique_ptr<CSSParserSelector>((yyvsp[(4) - (10)].selector))).leakRef();
        else {
            
            parser->clearProperties();
            
            (yyval.rule) = nullptr;
            parser->popRuleData();
        }
    ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 932 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->popRuleData();
        (yyval.rule) = nullptr;
    ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 936 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->popRuleData();
        (yyval.rule) = nullptr;
    ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 943 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector(QualifiedName(nullAtom, (yyvsp[(1) - (1)].string), parser->m_defaultNamespace));
        (yyval.selector)->setForPage();
    ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 947 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector)) {
            (yyval.selector)->prependTagSelector(QualifiedName(nullAtom, (yyvsp[(1) - (2)].string), parser->m_defaultNamespace));
            (yyval.selector)->setForPage();
        }
    ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 954 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
        if ((yyval.selector))
            (yyval.selector)->setForPage();
    ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 959 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector;
        (yyval.selector)->setForPage();
    ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 968 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->startDeclarationsForMarginBox();
    ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 970 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->createMarginAtRule((yyvsp[(1) - (7)].marginBox));
    ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 976 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopLeftCornerMarginBox;
    ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 979 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopLeftMarginBox;
    ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 982 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopCenterMarginBox;
    ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 985 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopRightMarginBox;
    ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 988 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopRightCornerMarginBox;
    ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 991 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomLeftCornerMarginBox;
    ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 994 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomLeftMarginBox;
    ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 997 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomCenterMarginBox;
    ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1000 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomRightMarginBox;
    ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1003 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomRightCornerMarginBox;
    ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1006 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftTopMarginBox;
    ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1009 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftMiddleMarginBox;
    ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1012 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftBottomMarginBox;
    ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1015 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightTopMarginBox;
    ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1018 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightMiddleMarginBox;
    ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1021 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightBottomMarginBox;
    ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1027 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::FONT_FACE_RULE);
    ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1033 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = parser->createFontFaceRule().leakRef();
    ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1036 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = nullptr;
        parser->popRuleData();
    ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1040 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = nullptr;
        parser->popRuleData();
    ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1076 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::REGION_RULE);
    ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1082 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<Vector<RefPtr<StyleRuleBase>>> ruleList((yyvsp[(9) - (10)].ruleList));
        if ((yyvsp[(4) - (10)].selectorList))
            (yyval.rule) = parser->createRegionRule(std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>((yyvsp[(4) - (10)].selectorList)).get(), ruleList.get()).leakRef();
        else {
            (yyval.rule) = nullptr;
            parser->popRuleData();
        }
    ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1094 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.relation) = CSSParserSelectorCombinator::DirectAdjacent; ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1095 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.relation) = CSSParserSelectorCombinator::IndirectAdjacent; ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1096 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.relation) = CSSParserSelectorCombinator::Child; ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1098 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.relation) = CSSParserSelectorCombinator::DescendantDoubleChild; ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1102 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.integer) = 1; ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1104 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.integer) = -1; ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1104 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.integer) = 1; ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1106 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->markPropertyStart(); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1109 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::STYLE_RULE);
        parser->markSelectorStart();
    ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1115 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->markRuleHeaderEnd(); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1117 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->markSelectorEnd(); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1120 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.rule) = parser->createStyleRule((yyvsp[(2) - (9)].selectorList)).leakRef();
        parser->recycleSelectorVector(std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>((yyvsp[(2) - (9)].selectorList)));
    ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1126 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->markSelectorStart(); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1129 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selectorList) = nullptr;
        if ((yyvsp[(1) - (1)].selector)) {
            (yyval.selectorList) = parser->createSelectorVector().release();
            (yyval.selectorList)->append(std::unique_ptr<CSSParserSelector>((yyvsp[(1) - (1)].selector)));
            parser->updateLastSelectorLineAndPosition();
        }
    ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1137 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> selectorList((yyvsp[(1) - (6)].selectorList));
        std::unique_ptr<CSSParserSelector> selector((yyvsp[(6) - (6)].selector));
        (yyval.selectorList) = nullptr;
        if (selectorList && selector) {
            (yyval.selectorList) = selectorList.release();
            (yyval.selectorList)->append(WTF::move(selector));
            parser->updateLastSelectorLineAndPosition();
        }
    ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1147 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selectorList) = nullptr;
        delete (yyvsp[(1) - (2)].selectorList);
    ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1153 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->startNestedSelectorList(); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1154 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->endNestedSelectorList(); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1157 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selectorList) = (yyvsp[(2) - (3)].selectorList);
    ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1165 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.stringList) = new Vector<CSSParserString>;
        (yyval.stringList)->append((yyvsp[(1) - (1)].string));
    ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1169 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.stringList) = (yyvsp[(1) - (5)].stringList);
        if ((yyval.stringList))
            (yyvsp[(1) - (5)].stringList)->append((yyvsp[(5) - (5)].string));
    ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1174 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.stringList) = nullptr;
        delete (yyvsp[(1) - (2)].stringList);
    ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1186 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<CSSParserSelector> left((yyvsp[(1) - (2)].selector));
        std::unique_ptr<CSSParserSelector> right((yyvsp[(2) - (2)].selector));
        (yyval.selector) = nullptr;
        if (left && right) {
            right->appendTagHistory(CSSParserSelectorCombinator::DescendantSpace, WTF::move(left));
            (yyval.selector) = right.release();
        }
    ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1195 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<CSSParserSelector> left((yyvsp[(1) - (3)].selector));
        std::unique_ptr<CSSParserSelector> right((yyvsp[(3) - (3)].selector));
        (yyval.selector) = nullptr;
        if (left && right) {
            right->appendTagHistory((yyvsp[(2) - (3)].relation), WTF::move(left));
            (yyval.selector) = right.release();
        }
    ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1204 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        delete (yyvsp[(1) - (2)].selector);
    ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1211 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.string).clear(); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1212 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { static LChar star = '*'; (yyval.string).init(&star, 1); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1217 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector(QualifiedName(nullAtom, (yyvsp[(1) - (1)].string), parser->m_defaultNamespace));
    ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1220 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector))
            parser->rewriteSpecifiersWithElementName(nullAtom, (yyvsp[(1) - (2)].string), *(yyval.selector));
    ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1225 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
        if ((yyval.selector))
            parser->rewriteSpecifiersWithNamespaceIfNeeded(*(yyval.selector));
    ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1230 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector(parser->determineNameInNamespace((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string)));
    ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1233 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(3) - (3)].selector);
        if ((yyval.selector))
            parser->rewriteSpecifiersWithElementName((yyvsp[(1) - (3)].string), (yyvsp[(2) - (3)].string), *(yyval.selector));
    ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1238 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector))
            parser->rewriteSpecifiersWithElementName((yyvsp[(1) - (2)].string), starAtom, *(yyval.selector));
    ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1246 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selectorList) = nullptr;
        if ((yyvsp[(1) - (1)].selector)) {
            (yyval.selectorList) = parser->createSelectorVector().release();
            (yyval.selectorList)->append(std::unique_ptr<CSSParserSelector>((yyvsp[(1) - (1)].selector)));
        }
    ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1253 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> list((yyvsp[(1) - (5)].selectorList));
        std::unique_ptr<CSSParserSelector> selector((yyvsp[(5) - (5)].selector));
        (yyval.selectorList) = nullptr;
        if (list && selector) {
            (yyval.selectorList) = list.release();
            (yyval.selectorList)->append(WTF::move(selector));
        }
    ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1262 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selectorList) = nullptr;
        delete (yyvsp[(1) - (2)].selectorList);
    ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1269 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (1)].string);
    ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1272 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        static LChar star = '*';
        (yyval.string).init(&star, 1);
    ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1280 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<CSSParserSelector> list((yyvsp[(1) - (2)].selector));
        std::unique_ptr<CSSParserSelector> specifier((yyvsp[(2) - (2)].selector));
        (yyval.selector) = nullptr;
        if (list && specifier)
            (yyval.selector) = parser->rewriteSpecifiers(WTF::move(list), WTF::move(specifier)).release();
    ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1287 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        delete (yyvsp[(1) - (2)].selector);
    ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1294 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector;
        (yyval.selector)->setMatch(CSSSelector::Id);
        if (parser->m_context.mode == CSSQuirksMode)
            (yyvsp[(1) - (1)].string).lower();
        (yyval.selector)->setValue((yyvsp[(1) - (1)].string));
    ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1301 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].string)[0] >= '0' && (yyvsp[(1) - (1)].string)[0] <= '9')
            (yyval.selector) = nullptr;
        else {
            (yyval.selector) = new CSSParserSelector;
            (yyval.selector)->setMatch(CSSSelector::Id);
            if (parser->m_context.mode == CSSQuirksMode)
                (yyvsp[(1) - (1)].string).lower();
            (yyval.selector)->setValue((yyvsp[(1) - (1)].string));
        }
    ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1318 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector;
        (yyval.selector)->setMatch(CSSSelector::Class);
        if (parser->m_context.mode == CSSQuirksMode)
            (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
    ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1328 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector;
        (yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[(3) - (5)].string), nullAtom), parser->m_context.isHTMLDocument);
        (yyval.selector)->setMatch(CSSSelector::Set);
    ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1333 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector;
        (yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[(3) - (10)].string), nullAtom), parser->m_context.isHTMLDocument);
        (yyval.selector)->setMatch((yyvsp[(5) - (10)].match));
        (yyval.selector)->setValue((yyvsp[(7) - (10)].string));
        (yyval.selector)->setAttributeValueMatchingIsCaseInsensitive((yyvsp[(9) - (10)].boolean));
    ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1340 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector;
        (yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[(3) - (6)].string), (yyvsp[(4) - (6)].string)), parser->m_context.isHTMLDocument);
        (yyval.selector)->setMatch(CSSSelector::Set);
    ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1345 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = new CSSParserSelector;
        (yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[(3) - (11)].string), (yyvsp[(4) - (11)].string)), parser->m_context.isHTMLDocument);
        (yyval.selector)->setMatch((yyvsp[(6) - (11)].match));
        (yyval.selector)->setValue((yyvsp[(8) - (11)].string));
        (yyval.selector)->setAttributeValueMatchingIsCaseInsensitive((yyvsp[(10) - (11)].boolean));
    ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1355 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if (UNLIKELY((yyvsp[(1) - (2)].string).length() != 1 || !isASCIIAlphaCaselessEqual((yyvsp[(1) - (2)].string)[0], 'i')))
            YYERROR;
        (yyval.boolean) = true;
    ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1361 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1366 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.match) = CSSSelector::Exact;
    ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1369 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.match) = CSSSelector::List;
    ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1372 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.match) = CSSSelector::Hyphen;
    ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1375 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.match) = CSSSelector::Begin;
    ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1378 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.match) = CSSSelector::End;
    ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1381 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.match) = CSSSelector::Contain;
    ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1389 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = CSSParserSelector::parsePagePseudoSelector((yyvsp[(2) - (2)].string));
    ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1394 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selectorList) = nullptr;
    ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1397 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selectorList) = nullptr;
    ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1400 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if ((yyvsp[(4) - (6)].selectorList))
            (yyval.selectorList) = (yyvsp[(4) - (6)].selectorList);
        else
            YYERROR;
    ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1409 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = CSSParserSelector::parsePseudoClassAndCompatibilityElementSelector((yyvsp[(2) - (2)].string));
    ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1412 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = CSSParserSelector::parsePseudoElementSelector((yyvsp[(3) - (3)].string));
    ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1417 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = CSSParserSelector::parsePseudoElementCueFunctionSelector((yyvsp[(3) - (7)].string), (yyvsp[(5) - (7)].selectorList));
    ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1426 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        if ((yyvsp[(4) - (6)].selectorList)) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->adoptSelectorVector(*std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>((yyvsp[(4) - (6)].selectorList)));
            selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
            if (selector->pseudoClassType() == CSSSelector::PseudoClassAny)
                (yyval.selector) = selector.release();
        }
    ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1437 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        if ((yyvsp[(4) - (6)].selectorList)) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->adoptSelectorVector(*std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>>((yyvsp[(4) - (6)].selectorList)));
            selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
            if (selector->pseudoClassType() == CSSSelector::PseudoClassMatches)
                (yyval.selector) = selector.release();
        }
    ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1448 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        if ((yyvsp[(4) - (6)].stringList)) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->setLangArgumentList(*std::unique_ptr<Vector<CSSParserString>>((yyvsp[(4) - (6)].stringList)));
            selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
            if (selector->pseudoClassType() == CSSSelector::PseudoClassLang)
                (yyval.selector) = selector.release();
        }
    ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1461 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument((yyvsp[(4) - (6)].string));
        selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
        if (selector->pseudoClassType() == CSSSelector::PseudoClassDir)
            (yyval.selector) = selector.release();
    ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1471 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument((yyvsp[(4) - (6)].string));
        selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
        if (selector->pseudoClassType() == CSSSelector::PseudoClassRole)
            (yyval.selector) = selector.release();
    ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1483 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> ending((yyvsp[(5) - (5)].selectorList));
        if (selectorListDoesNotMatchAnyPseudoElement(ending.get())) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->setArgument((yyvsp[(4) - (5)].string));
            selector->setPseudoClassValue((yyvsp[(2) - (5)].string));
            if (ending)
                selector->adoptSelectorVector(*ending);
            CSSSelector::PseudoClassType pseudoClassType = selector->pseudoClassType();
            if (pseudoClassType == CSSSelector::PseudoClassNthChild || pseudoClassType == CSSSelector::PseudoClassNthLastChild)
                (yyval.selector) = selector.release();
        }
    ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1498 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> ending((yyvsp[(6) - (6)].selectorList));
        if (selectorListDoesNotMatchAnyPseudoElement(ending.get())) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->setArgument(AtomicString::number((yyvsp[(4) - (6)].integer) * (yyvsp[(5) - (6)].number)));
            selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
            if (ending)
                selector->adoptSelectorVector(*ending);
            CSSSelector::PseudoClassType pseudoClassType = selector->pseudoClassType();
            if (pseudoClassType == CSSSelector::PseudoClassNthChild || pseudoClassType == CSSSelector::PseudoClassNthLastChild)
                (yyval.selector) = selector.release();
        }
    ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1513 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> ending((yyvsp[(5) - (5)].selectorList));
        if (isValidNthToken((yyvsp[(4) - (5)].string)) && selectorListDoesNotMatchAnyPseudoElement(ending.get())) {
            auto selector = std::make_unique<CSSParserSelector>();
            selector->setMatch(CSSSelector::PseudoClass);
            selector->setArgument((yyvsp[(4) - (5)].string));
            selector->setPseudoClassValue((yyvsp[(2) - (5)].string));
            if (ending)
               selector->adoptSelectorVector(*ending);
            CSSSelector::PseudoClassType pseudoClassType = selector->pseudoClassType();
            if (pseudoClassType == CSSSelector::PseudoClassNthChild || pseudoClassType == CSSSelector::PseudoClassNthLastChild)
                (yyval.selector) = selector.release();
        }
    ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1530 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument((yyvsp[(4) - (6)].string));
        selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
        if (selector->pseudoClassType() != CSSSelector::PseudoClassUnknown)
            (yyval.selector) = selector.release();
    ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1540 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument(AtomicString::number((yyvsp[(4) - (7)].integer) * (yyvsp[(5) - (7)].number)));
        selector->setPseudoClassValue((yyvsp[(2) - (7)].string));
        if (selector->pseudoClassType() != CSSSelector::PseudoClassUnknown)
            (yyval.selector) = selector.release();
    ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1550 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        auto selector = std::make_unique<CSSParserSelector>();
        selector->setMatch(CSSSelector::PseudoClass);
        selector->setArgument((yyvsp[(4) - (6)].string));
        selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
        CSSSelector::PseudoClassType type = selector->pseudoClassType();
        if (type == CSSSelector::PseudoClassUnknown)
            selector = nullptr;
        else if (type == CSSSelector::PseudoClassNthChild ||
                 type == CSSSelector::PseudoClassNthOfType ||
                 type == CSSSelector::PseudoClassNthLastChild ||
                 type == CSSSelector::PseudoClassNthLastOfType) {
            if (!isValidNthToken((yyvsp[(4) - (6)].string)))
                selector = nullptr;
        }
        (yyval.selector) = selector.release();
    ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1568 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.selector) = nullptr;
        if ((yyvsp[(4) - (6)].selectorList)) {
            std::unique_ptr<Vector<std::unique_ptr<CSSParserSelector>>> list((yyvsp[(4) - (6)].selectorList));
            if (selectorListDoesNotMatchAnyPseudoElement(list.get())) {
                auto selector = std::make_unique<CSSParserSelector>();
                selector->setMatch(CSSSelector::PseudoClass);
                selector->setPseudoClassValue((yyvsp[(2) - (6)].string));
                selector->adoptSelectorVector(*list);
                if (selector->pseudoClassType() == CSSSelector::PseudoClassNot)
                    (yyval.selector) = selector.release();
            }
        }
    ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1585 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = false; ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1587 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = (yyvsp[(1) - (2)].boolean) || (yyvsp[(2) - (2)].boolean); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1589 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = false; ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1594 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (3)].boolean);
    ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1598 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = false;
    ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1602 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (4)].boolean);
        if ((yyvsp[(2) - (4)].boolean))
            (yyval.boolean) = (yyvsp[(2) - (4)].boolean);
    ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1608 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (4)].boolean);
    ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1615 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        parser->syntaxError((yyvsp[(2) - (3)].location), CSSParser::PropertyDeclarationError);
    ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1621 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.boolean) = false;
        bool isPropertyParsed = false;
        std::unique_ptr<CSSParserValueList> propertyValue((yyvsp[(4) - (5)].valueList));
        if (propertyValue) {
            parser->m_valueList = WTF::move(propertyValue);
            int oldParsedProperties = parser->m_parsedProperties.size();
            parser->setCustomPropertyName((yyvsp[(1) - (5)].string));
            (yyval.boolean) = parser->parseValue(CSSPropertyCustom, (yyvsp[(5) - (5)].boolean));
            if (!(yyval.boolean))
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            else
                isPropertyParsed = true;
            parser->m_valueList = nullptr;
        }
        parser->markPropertyEnd((yyvsp[(5) - (5)].boolean), isPropertyParsed);
    ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1638 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.boolean) = false;
        bool isPropertyParsed = false;
        std::unique_ptr<CSSParserValueList> propertyValue((yyvsp[(4) - (5)].valueList));
        if ((yyvsp[(1) - (5)].id) && propertyValue) {
            parser->m_valueList = WTF::move(propertyValue);
            int oldParsedProperties = parser->m_parsedProperties.size();
            (yyval.boolean) = parser->parseValue((yyvsp[(1) - (5)].id), (yyvsp[(5) - (5)].boolean));
            if (!(yyval.boolean))
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            else
                isPropertyParsed = true;
            parser->m_valueList = nullptr;
        }
        parser->markPropertyEnd((yyvsp[(5) - (5)].boolean), isPropertyParsed);
    ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1654 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = false; ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1655 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        
        parser->markPropertyEnd(false, false);
        delete (yyvsp[(4) - (6)].valueList);
        (yyval.boolean) = false;
    ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1661 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        
        (yyval.boolean) = false;
    ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1665 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        
        parser->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1672 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->syntaxError((yyvsp[(2) - (3)].location)); ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1674 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.id) = cssPropertyID((yyvsp[(1) - (2)].string)); ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1676 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = true; ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1676 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.boolean) = false; ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1681 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.valueList) = new CSSParserValueList;
        (yyval.valueList)->addValue(makeIdentValue((yyvsp[(1) - (2)].string)));
    ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1685 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
        (yyval.valueList)->addValue(makeIdentValue((yyvsp[(2) - (3)].string)));
    ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1692 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).setFromValueList(std::make_unique<CSSParserValueList>());
    ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1695 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).setFromValueList(std::unique_ptr<CSSParserValueList>((yyvsp[(3) - (4)].valueList)));
    ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1698 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = 0;
        YYERROR;
    ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1708 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        if ((yyvsp[(2) - (2)].valueList))
            (yyval.valueList) = (yyvsp[(2) - (2)].valueList);
        else {
            CSSParserValue val;
            val.id = CSSValueInvalid;
            val.unit = CSSPrimitiveValue::CSS_PARSER_WHITESPACE;
            val.string.init(emptyString());
            (yyval.valueList) = new CSSParserValueList;
            (yyval.valueList)->addValue(val);
        }
    ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1720 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.valueList) = (yyvsp[(2) - (2)].valueList); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1723 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.valueList) = nullptr; ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1723 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.valueList) = (yyvsp[(1) - (1)].valueList); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1725 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.valueList) = nullptr; delete (yyvsp[(1) - (2)].valueList); ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1728 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.valueList) = new CSSParserValueList;
        (yyval.valueList)->addValue((yyvsp[(1) - (1)].value));
    ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1732 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
        if (!(yyval.valueList))
            destroy((yyvsp[(3) - (3)].value));
        else {
            if ((yyvsp[(2) - (3)].character)) {
                CSSParserValue v;
                v.id = CSSValueInvalid;
                v.unit = CSSParserValue::Operator;
                v.iValue = (yyvsp[(2) - (3)].character);
                (yyval.valueList)->addValue(v);
            }
            (yyval.valueList)->addValue((yyvsp[(3) - (3)].value));
        }
    ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1751 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.character) = '/'; ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1751 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.character) = ','; ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1751 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.character) = 0; ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1755 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value) = (yyvsp[(2) - (3)].value); (yyval.value).fValue *= (yyvsp[(1) - (3)].integer); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1756 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_STRING; ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1757 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value) = makeIdentValue((yyvsp[(1) - (2)].string)); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1759 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1760 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(2) - (3)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1761 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_URI; ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1762 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_UNICODE_RANGE; ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1763 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1764 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).string = CSSParserString(); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1770 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { 
      (yyval.value).id = CSSValueInvalid; (yyval.value).unit = 0;
  ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1779 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = true; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1780 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1781 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PERCENTAGE; ;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1782 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PX; ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1783 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CM; ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1784 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MM; ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1785 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_IN; ;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1786 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PT; ;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1787 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PC; ;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1788 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DEG; ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1789 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_RAD; ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1790 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_GRAD; ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1791 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_TURN; ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1792 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MS; ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1793 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_S; ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1794 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_HZ; ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1795 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_KHZ; ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1796 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EMS; ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1797 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSParserValue::Q_EMS; ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1798 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EXS; ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1799 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
      (yyval.value).id = CSSValueInvalid;
      (yyval.value).fValue = (yyvsp[(1) - (1)].number);
      (yyval.value).unit = CSSPrimitiveValue::CSS_REMS;
      if (parser->m_styleSheet)
          parser->m_styleSheet->parserSetUsesRemUnits();
  ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1806 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CHS; ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1807 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VW; ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1808 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VH; ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1809 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMIN; ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1810 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMAX; ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1811 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPPX; ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1812 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPI; ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1813 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPCM; ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1814 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value).id = CSSValueInvalid; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_FR; ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1818 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = (yyvsp[(1) - (4)].string);
        f->args = std::unique_ptr<CSSParserValueList>((yyvsp[(3) - (4)].valueList));
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1826 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = (yyvsp[(1) - (3)].string);
        f->args = std::unique_ptr<CSSParserValueList>(new CSSParserValueList);
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1834 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = (yyvsp[(1) - (4)].string);
        f->args = nullptr;
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
  ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1845 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        CSSParserVariable* var = new CSSParserVariable;
        var->name = (yyvsp[(3) - (5)].string);
        var->args = nullptr;
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Variable;
        (yyval.value).variable = var;
    ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1853 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        CSSParserVariable* var = new CSSParserVariable;
        var->name = (yyvsp[(3) - (8)].string);
        var->args = std::unique_ptr<CSSParserValueList>((yyvsp[(7) - (8)].valueList));
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Variable;
        (yyval.value).variable = var;
    ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1861 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        CSSParserVariable* var = new CSSParserVariable;
        var->name = (yyvsp[(3) - (7)].string);
        var->args = std::unique_ptr<CSSParserValueList>(new CSSParserValueList());
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Variable;
        (yyval.value).variable = var;
    ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1870 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = 0;
        YYERROR;
    ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1875 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = 0;
        YYERROR;
    ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1880 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = 0;
        YYERROR;
    ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1885 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = 0;
        YYERROR;
    ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1890 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = 0;
        YYERROR;
    ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1902 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value) = (yyvsp[(1) - (1)].value); ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1903 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); (yyval.value).fValue *= (yyvsp[(1) - (2)].integer); ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1912 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.character) = '+';
    ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1915 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.character) = '-';
    ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1918 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.character) = '*';
    ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1921 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.character) = '/';
    ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1929 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.valueList) = nullptr;
        if ((yyvsp[(3) - (5)].valueList)) {
            (yyval.valueList) = (yyvsp[(3) - (5)].valueList);
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = '(';
            (yyval.valueList)->insertValueAt(0, v);
            v.iValue = ')';
            (yyval.valueList)->addValue(v);
        }
    ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1944 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.valueList) = nullptr; delete (yyvsp[(1) - (2)].valueList); ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1947 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.valueList) = new CSSParserValueList;
        (yyval.valueList)->addValue((yyvsp[(1) - (1)].value));
    ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1951 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<CSSParserValueList> expression((yyvsp[(1) - (3)].valueList));
        (yyval.valueList) = nullptr;
        if (expression && (yyvsp[(2) - (3)].character)) {
            (yyval.valueList) = expression.release();
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = (yyvsp[(2) - (3)].character);
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->addValue((yyvsp[(3) - (3)].value));
        } else {
            destroy((yyvsp[(3) - (3)].value));
        }

    ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1967 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<CSSParserValueList> left((yyvsp[(1) - (3)].valueList));
        std::unique_ptr<CSSParserValueList> right((yyvsp[(3) - (3)].valueList));
        (yyval.valueList) = nullptr;
        if (left && (yyvsp[(2) - (3)].character) && right) {
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = (yyvsp[(2) - (3)].character);
            left->addValue(v);
            left->extend(*right);
            (yyval.valueList) = left.release();
        }
    ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1986 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        std::unique_ptr<CSSParserValueList> list((yyvsp[(1) - (5)].valueList));
        std::unique_ptr<CSSParserValueList> expression((yyvsp[(4) - (5)].valueList));
        (yyval.valueList) = nullptr;
        if (list && expression) {
            (yyval.valueList) = list.release();
            CSSParserValue v;
            v.id = CSSValueInvalid;
            v.unit = CSSParserValue::Operator;
            v.iValue = ',';
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->extend(*expression);
        }
    ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 2003 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = (yyvsp[(1) - (5)].string);
        f->args = std::unique_ptr<CSSParserValueList>((yyvsp[(3) - (5)].valueList));
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 2011 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = 0;
        YYERROR;
    ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 2022 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        CSSParserFunction* f = new CSSParserFunction;
        f->name = (yyvsp[(1) - (4)].string);
        f->args = std::unique_ptr<CSSParserValueList>((yyvsp[(3) - (4)].valueList));
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 2030 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    {
        (yyval.value).id = CSSValueInvalid;
        (yyval.value).unit = 0;
        YYERROR;
    ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 2045 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { parser->invalidBlockHit(); ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 2061 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"
    { (yyval.location) = parser->currentLocation(); ;}
    break;



/* Line 1455 of yacc.c  */
#line 6081 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.cpp"
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
      yyerror (parser, YY_("syntax error"));
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
	    yyerror (parser, yymsg);
	  }
	else
	  {
	    yyerror (parser, YY_("syntax error"));
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
		      yytoken, &yylval, parser);
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
		  yystos[yystate], yyvsp, parser);
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
  yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parser);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parser);
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
#line 2071 "C:\\WebKitOut\\DerivedSources\\WebCore\\CSSGrammar.y"



