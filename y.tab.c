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
#line 1 "kim.y"

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;
#include <stdio.h>
#include <stdlib.h>
#include "type.h"
extern int line_no;
extern int syntax_err;
extern int semantic_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;
extern A_NODE *makeNode(NODE_NAME,A_NODE *,A_NODE *,A_NODE *);
extern A_NODE *makeNodeList(NODE_NAME,A_NODE *,A_NODE *);
extern void checkForwardReference();
extern A_ID *linkDeclaratorList(A_ID *, A_ID *);
extern A_ID *setFunctionDeclaratorSpecifier(A_ID *, A_SPECIFIER *);
extern A_ID *setFunctionDeclaratorBody(A_ID *,A_NODE *);
extern A_SPECIFIER *makeSpecifier(A_TYPE *,S_KIND);
extern A_ID *setDeclaratorListSpecifier(A_ID *,A_SPECIFIER *);
extern A_SPECIFIER *updateSpecifier(A_SPECIFIER *,A_TYPE *,S_KIND);
extern A_ID *makeDummyIdentifier();
extern A_ID *setDeclaratorInit(A_ID *,A_NODE *);
extern A_TYPE *setTypeStructOrEnumIdentifier(T_KIND,char *,ID_KIND);
extern A_TYPE *setTypeField(A_TYPE *,A_ID *);
extern A_TYPE *setTypeExpr(A_TYPE *,A_NODE *);
extern A_TYPE *makeType(T_KIND);
extern A_TYPE *getTypeOfStructOrEnumRefIdentifier(T_KIND,char *,ID_KIND);
extern A_ID *setStructDeclaratorListSpecifier(A_ID *,A_TYPE *);
extern A_ID *setDeclaratorKind(A_ID *,ID_KIND);
extern A_ID *setDeclaratorElementType(A_ID *,A_TYPE *);
extern A_TYPE *setTypeElementType(A_TYPE *,A_TYPE *);
extern A_ID *makeIdentifier(char *);
extern A_ID *setParameterDeclaratorSpecifier(A_ID *,A_SPECIFIER *);
extern A_ID *setDeclaratorType(A_ID *,A_TYPE *);
extern A_ID *getIdentifierDeclared(char *);
extern A_TYPE *setTypeNameSpecifier(A_TYPE *,A_SPECIFIER *);

#line 111 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    FLOAT_CONSTANT = 260,          /* FLOAT_CONSTANT  */
    INTEGER_CONSTANT = 261,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 262,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 263,          /* STRING_LITERAL  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    PLUSPLUS = 266,                /* PLUSPLUS  */
    MINUSMINUS = 267,              /* MINUSMINUS  */
    BAR = 268,                     /* BAR  */
    AMP = 269,                     /* AMP  */
    BARBAR = 270,                  /* BARBAR  */
    AMPAMP = 271,                  /* AMPAMP  */
    ARROW = 272,                   /* ARROW  */
    SEMICOLON = 273,               /* SEMICOLON  */
    LSS = 274,                     /* LSS  */
    GTR = 275,                     /* GTR  */
    LEQ = 276,                     /* LEQ  */
    GEQ = 277,                     /* GEQ  */
    EQL = 278,                     /* EQL  */
    NEQ = 279,                     /* NEQ  */
    DOTDOTDOT = 280,               /* DOTDOTDOT  */
    LP = 281,                      /* LP  */
    RP = 282,                      /* RP  */
    LB = 283,                      /* LB  */
    RB = 284,                      /* RB  */
    LR = 285,                      /* LR  */
    RR = 286,                      /* RR  */
    PERIOD = 287,                  /* PERIOD  */
    COMMA = 288,                   /* COMMA  */
    EXCL = 289,                    /* EXCL  */
    STAR = 290,                    /* STAR  */
    SLASH = 291,                   /* SLASH  */
    PERCENT = 292,                 /* PERCENT  */
    ASSIGN = 293,                  /* ASSIGN  */
    COLON = 294,                   /* COLON  */
    AUTO_SYM = 295,                /* AUTO_SYM  */
    STATIC_SYM = 296,              /* STATIC_SYM  */
    TYPEDEF_SYM = 297,             /* TYPEDEF_SYM  */
    STRUCT_SYM = 298,              /* STRUCT_SYM  */
    ENUM_SYM = 299,                /* ENUM_SYM  */
    SIZEOF_SYM = 300,              /* SIZEOF_SYM  */
    UNION_SYM = 301,               /* UNION_SYM  */
    IF_SYM = 302,                  /* IF_SYM  */
    ELSE_SYM = 303,                /* ELSE_SYM  */
    WHILE_SYM = 304,               /* WHILE_SYM  */
    DO_SYM = 305,                  /* DO_SYM  */
    FOR_SYM = 306,                 /* FOR_SYM  */
    CONTINUE_SYM = 307,            /* CONTINUE_SYM  */
    BREAK_SYM = 308,               /* BREAK_SYM  */
    RETURN_SYM = 309,              /* RETURN_SYM  */
    SWITCH_SYM = 310,              /* SWITCH_SYM  */
    CASE_SYM = 311,                /* CASE_SYM  */
    DEFAULT_SYM = 312,             /* DEFAULT_SYM  */
    CONST_SYM = 313                /* CONST_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define BAR 268
#define AMP 269
#define BARBAR 270
#define AMPAMP 271
#define ARROW 272
#define SEMICOLON 273
#define LSS 274
#define GTR 275
#define LEQ 276
#define GEQ 277
#define EQL 278
#define NEQ 279
#define DOTDOTDOT 280
#define LP 281
#define RP 282
#define LB 283
#define RB 284
#define LR 285
#define RR 286
#define PERIOD 287
#define COMMA 288
#define EXCL 289
#define STAR 290
#define SLASH 291
#define PERCENT 292
#define ASSIGN 293
#define COLON 294
#define AUTO_SYM 295
#define STATIC_SYM 296
#define TYPEDEF_SYM 297
#define STRUCT_SYM 298
#define ENUM_SYM 299
#define SIZEOF_SYM 300
#define UNION_SYM 301
#define IF_SYM 302
#define ELSE_SYM 303
#define WHILE_SYM 304
#define DO_SYM 305
#define FOR_SYM 306
#define CONTINUE_SYM 307
#define BREAK_SYM 308
#define RETURN_SYM 309
#define SWITCH_SYM 310
#define CASE_SYM 311
#define DEFAULT_SYM 312
#define CONST_SYM 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_FLOAT_CONSTANT = 5,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 6,           /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 7,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 8,             /* STRING_LITERAL  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_PLUSPLUS = 11,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 12,                /* MINUSMINUS  */
  YYSYMBOL_BAR = 13,                       /* BAR  */
  YYSYMBOL_AMP = 14,                       /* AMP  */
  YYSYMBOL_BARBAR = 15,                    /* BARBAR  */
  YYSYMBOL_AMPAMP = 16,                    /* AMPAMP  */
  YYSYMBOL_ARROW = 17,                     /* ARROW  */
  YYSYMBOL_SEMICOLON = 18,                 /* SEMICOLON  */
  YYSYMBOL_LSS = 19,                       /* LSS  */
  YYSYMBOL_GTR = 20,                       /* GTR  */
  YYSYMBOL_LEQ = 21,                       /* LEQ  */
  YYSYMBOL_GEQ = 22,                       /* GEQ  */
  YYSYMBOL_EQL = 23,                       /* EQL  */
  YYSYMBOL_NEQ = 24,                       /* NEQ  */
  YYSYMBOL_DOTDOTDOT = 25,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 26,                        /* LP  */
  YYSYMBOL_RP = 27,                        /* RP  */
  YYSYMBOL_LB = 28,                        /* LB  */
  YYSYMBOL_RB = 29,                        /* RB  */
  YYSYMBOL_LR = 30,                        /* LR  */
  YYSYMBOL_RR = 31,                        /* RR  */
  YYSYMBOL_PERIOD = 32,                    /* PERIOD  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_EXCL = 34,                      /* EXCL  */
  YYSYMBOL_STAR = 35,                      /* STAR  */
  YYSYMBOL_SLASH = 36,                     /* SLASH  */
  YYSYMBOL_PERCENT = 37,                   /* PERCENT  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_COLON = 39,                     /* COLON  */
  YYSYMBOL_AUTO_SYM = 40,                  /* AUTO_SYM  */
  YYSYMBOL_STATIC_SYM = 41,                /* STATIC_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 42,               /* TYPEDEF_SYM  */
  YYSYMBOL_STRUCT_SYM = 43,                /* STRUCT_SYM  */
  YYSYMBOL_ENUM_SYM = 44,                  /* ENUM_SYM  */
  YYSYMBOL_SIZEOF_SYM = 45,                /* SIZEOF_SYM  */
  YYSYMBOL_UNION_SYM = 46,                 /* UNION_SYM  */
  YYSYMBOL_IF_SYM = 47,                    /* IF_SYM  */
  YYSYMBOL_ELSE_SYM = 48,                  /* ELSE_SYM  */
  YYSYMBOL_WHILE_SYM = 49,                 /* WHILE_SYM  */
  YYSYMBOL_DO_SYM = 50,                    /* DO_SYM  */
  YYSYMBOL_FOR_SYM = 51,                   /* FOR_SYM  */
  YYSYMBOL_CONTINUE_SYM = 52,              /* CONTINUE_SYM  */
  YYSYMBOL_BREAK_SYM = 53,                 /* BREAK_SYM  */
  YYSYMBOL_RETURN_SYM = 54,                /* RETURN_SYM  */
  YYSYMBOL_SWITCH_SYM = 55,                /* SWITCH_SYM  */
  YYSYMBOL_CASE_SYM = 56,                  /* CASE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 57,               /* DEFAULT_SYM  */
  YYSYMBOL_CONST_SYM = 58,                 /* CONST_SYM  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_translation_unit = 61,          /* translation_unit  */
  YYSYMBOL_external_declaration = 62,      /* external_declaration  */
  YYSYMBOL_function_definition = 63,       /* function_definition  */
  YYSYMBOL_64_1 = 64,                      /* @1  */
  YYSYMBOL_65_2 = 65,                      /* @2  */
  YYSYMBOL_declaration_list_opt = 66,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 67,          /* declaration_list  */
  YYSYMBOL_declaration = 68,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 69,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 70,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 71,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 72,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 73,           /* init_declarator  */
  YYSYMBOL_initializer = 74,               /* initializer  */
  YYSYMBOL_initializer_list = 75,          /* initializer_list  */
  YYSYMBOL_type_specifier = 76,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 77,     /* struct_type_specifier  */
  YYSYMBOL_78_3 = 78,                      /* @3  */
  YYSYMBOL_79_4 = 79,                      /* @4  */
  YYSYMBOL_80_5 = 80,                      /* @5  */
  YYSYMBOL_81_6 = 81,                      /* @6  */
  YYSYMBOL_struct_or_union = 82,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 83,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 84,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 85,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 86,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 87,       /* enum_type_specifier  */
  YYSYMBOL_88_7 = 88,                      /* @7  */
  YYSYMBOL_89_8 = 89,                      /* @8  */
  YYSYMBOL_enumerator_list = 90,           /* enumerator_list  */
  YYSYMBOL_enumerator = 91,                /* enumerator  */
  YYSYMBOL_92_9 = 92,                      /* @9  */
  YYSYMBOL_declarator = 93,                /* declarator  */
  YYSYMBOL_pointer = 94,                   /* pointer  */
  YYSYMBOL_direct_declarator = 95,         /* direct_declarator  */
  YYSYMBOL_96_10 = 96,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 97,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 98,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 99,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 100,    /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 101,  /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 102,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 103, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 104,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 105,           /* statement_list  */
  YYSYMBOL_statement = 106,                /* statement  */
  YYSYMBOL_labeled_statement = 107,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 108,       /* compound_statement  */
  YYSYMBOL_109_11 = 109,                   /* @11  */
  YYSYMBOL_expression_statement = 110,     /* expression_statement  */
  YYSYMBOL_selection_statement = 111,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 112,      /* iteration_statement  */
  YYSYMBOL_for_expression = 113,           /* for_expression  */
  YYSYMBOL_expression_opt = 114,           /* expression_opt  */
  YYSYMBOL_jump_statement = 115,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 116,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 117,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 118,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 119,      /* constant_expression  */
  YYSYMBOL_expression = 120,               /* expression  */
  YYSYMBOL_comma_expression = 121,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 122,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 123,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 124,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 125,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 126,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 127,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 128,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 129,      /* equality_expression  */
  YYSYMBOL_relational_expression = 130,    /* relational_expression  */
  YYSYMBOL_shift_expression = 131,         /* shift_expression  */
  YYSYMBOL_additive_expression = 132,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 133, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 134,          /* cast_expression  */
  YYSYMBOL_unary_expression = 135,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 136,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 137,       /* primary_expression  */
  YYSYMBOL_type_name = 138                 /* type_name  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   417

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    50,    51,    54,    55,    58,    58,    59,
      59,    62,    63,    66,    67,    70,    73,    74,    75,    76,
      79,    80,    81,    84,    85,    88,    89,    92,    93,    96,
      97,   100,   101,   104,   105,   106,   109,   109,   109,   110,
     110,   110,   111,   114,   115,   118,   119,   122,   125,   126,
     129,   132,   132,   133,   133,   134,   137,   138,   141,   142,
     142,   145,   146,   149,   150,   153,   154,   155,   156,   156,
     159,   160,   163,   164,   167,   168,   171,   172,   175,   176,
     179,   180,   181,   184,   185,   186,   187,   188,   191,   192,
     195,   196,   199,   200,   201,   202,   203,   204,   207,   208,
     211,   211,   214,   215,   218,   219,   220,   223,   224,   225,
     228,   231,   232,   235,   236,   237,   240,   241,   244,   245,
     248,   249,   252,   255,   258,   261,   262,   265,   268,   269,
     272,   273,   276,   279,   282,   285,   286,   287,   290,   291,
     292,   293,   294,   297,   300,   301,   302,   305,   306,   307,
     308,   311,   312,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   327,   328,   329,   330,   331,   332,   333,
     336,   337,   338,   339,   340,   341,   344
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON",
  "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB",
  "RB", "LR", "RR", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "ASSIGN", "COLON", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM",
  "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM",
  "DO_SYM", "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM",
  "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM", "CONST_SYM", "$accept",
  "program", "translation_unit", "external_declaration",
  "function_definition", "@1", "@2", "declaration_list_opt",
  "declaration_list", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list", "type_specifier", "struct_type_specifier", "@3",
  "@4", "@5", "@6", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_type_specifier", "@7", "@8", "enumerator_list", "enumerator", "@9",
  "declarator", "pointer", "direct_declarator", "@10",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "statement_list_opt", "statement_list", "statement", "labeled_statement",
  "compound_statement", "@11", "expression_statement",
  "selection_statement", "iteration_statement", "for_expression",
  "expression_opt", "jump_statement", "arg_expression_list_opt",
  "arg_expression_list", "constant_expression_opt", "constant_expression",
  "expression", "comma_expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "postfix_expression", "primary_expression",
  "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-220)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     137,  -220,  -220,    25,    27,  -220,  -220,  -220,  -220,    72,
    -220,   105,   137,  -220,  -220,  -220,    25,    45,    45,  -220,
     108,  -220,  -220,    24,    71,    89,  -220,    91,    94,  -220,
    -220,   124,   125,  -220,    62,  -220,  -220,   121,   136,   152,
      71,  -220,    29,  -220,   155,   183,  -220,    25,   359,   152,
     168,  -220,  -220,  -220,    45,  -220,  -220,  -220,  -220,  -220,
      29,    29,   204,   204,    29,   315,    29,    29,   372,   177,
    -220,  -220,  -220,  -220,  -220,   202,   203,  -220,  -220,  -220,
      55,   222,  -220,   118,    -6,  -220,   187,   270,  -220,   183,
     190,   102,  -220,  -220,   191,   359,  -220,  -220,  -220,  -220,
     189,    45,    41,   200,  -220,   198,  -220,  -220,  -220,  -220,
      29,  -220,  -220,  -220,    97,   210,   218,  -220,  -220,   315,
    -220,  -220,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,  -220,  -220,   243,    29,
      29,   245,   126,   226,  -220,   183,  -220,   131,   189,    25,
      50,  -220,   260,    45,  -220,    25,   103,    29,  -220,    19,
    -220,  -220,   171,  -220,   180,   302,   176,  -220,  -220,    29,
     246,   203,  -220,   222,   222,  -220,  -220,  -220,  -220,    -6,
      -6,  -220,  -220,  -220,  -220,  -220,   248,   244,  -220,   247,
    -220,  -220,    29,  -220,  -220,   359,   130,    47,  -220,  -220,
    -220,  -220,  -220,   253,   254,   260,   257,   266,   267,    29,
     262,    29,   250,   261,   260,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,   273,  -220,   272,   274,   264,   171,    45,    29,
    -220,  -220,  -220,  -220,  -220,    29,  -220,  -220,  -220,  -220,
    -220,    25,    29,    29,   251,    29,  -220,  -220,   285,  -220,
      29,   265,   260,  -220,  -220,  -220,  -220,  -220,  -220,   281,
     306,  -220,  -220,   309,   311,   313,   320,   322,  -220,   324,
     260,  -220,  -220,  -220,   260,   260,    29,   260,    29,   260,
    -220,   304,  -220,   326,  -220,   336,  -220,   260,   345,    29,
    -220,  -220,  -220
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   160,   151,   159,
       0,   154,   155,   156,    78,     0,     0,   158,   157,     0,
     161,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,   116,
       0,     0,     0,     0,    54,     0,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    80,
      77,    79,    81,    69,     0,    70,    80,   176,   175,     0,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,     0,   117,   118,     0,
     166,    52,     0,    57,    30,     0,     0,     0,    48,    50,
      41,    46,   102,     0,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   152,   162,   165,     0,   164,    60,    32,    38,
      47,     0,     0,     0,     0,   111,   114,   115,     0,   112,
       0,     0,     0,   101,    91,   103,    86,    83,    84,     0,
       0,   119,    49,     0,     0,     0,     0,     0,   113,     0,
       0,    99,    87,    85,     0,     0,     0,     0,   111,     0,
      98,   104,   107,     0,   109,     0,   106,     0,     0,   111,
     105,   108,   110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,  -220,  -220,   360,  -220,  -220,  -220,  -220,  -220,   -80,
       7,  -220,  -220,  -220,   327,   -83,  -220,   -92,  -220,  -220,
    -220,  -220,  -220,  -220,   228,  -130,  -220,   146,  -220,  -220,
    -220,   299,   252,  -220,    -1,     0,   -20,  -220,   -53,  -220,
    -220,   227,   276,  -123,   -56,  -220,  -220,  -157,  -220,    22,
    -220,  -220,  -220,  -220,  -220,  -219,  -220,  -220,  -220,  -139,
     -43,   -42,  -220,  -126,  -220,  -220,   277,   269,  -220,  -220,
    -220,    12,   205,  -220,    40,   -50,   128,  -220,  -220,   282
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    44,
      28,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   266,   248,   221,   186,   187,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   103,    25,    40,    26,    97,    71,    16,   149,   184,
     107,   109,   146,   188,   113,    34,   117,   118,   226,    16,
     201,   154,     1,   115,    35,    36,   267,     1,     1,   132,
     133,   134,    55,   225,    56,    57,    58,    59,    60,    61,
      62,    63,   225,    64,     1,   156,    94,   157,   244,     2,
       3,     3,    97,    71,     2,    65,   149,   254,   149,   285,
       4,    53,     4,    66,    67,   240,   201,   156,   115,   157,
     292,    98,   114,   223,    68,    27,     4,   115,   124,   125,
     241,   200,   181,   182,   183,     5,     6,     7,     8,     9,
     260,    10,    -7,     8,     9,   271,    10,    41,   189,    42,
      48,   158,   159,   227,   149,    29,     1,     2,   155,   261,
     227,    37,   238,   280,   166,    71,    43,   281,   282,   232,
     284,   -51,   286,   165,    45,   157,   114,   130,   131,   156,
     290,   157,     4,   144,     2,   145,   173,   174,     4,    40,
       1,     2,    46,     5,     6,     7,     8,     9,   199,    10,
     237,   -36,    97,    71,    94,    25,   159,   191,    47,   145,
     155,   239,   194,     3,   195,   166,    51,   249,   251,    71,
     179,   180,     4,     8,     9,   259,    10,     5,     6,     7,
       8,     9,    52,    10,     2,    89,    90,    71,   108,   108,
     111,   112,   108,     2,   108,   108,   120,   228,    99,   229,
     263,   264,   165,   249,   157,   230,   121,    55,   269,    56,
      57,    58,    59,    60,    61,    62,    63,   122,    64,   123,
       5,     6,     7,     8,     9,   135,    10,   163,   -59,    48,
     110,   164,     8,     9,   283,    10,   249,   168,    66,    67,
     199,   126,   127,   128,   129,   169,   185,   249,   190,    68,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,    55,   192,    56,    57,    58,    59,    60,
      61,    62,    63,   233,    64,   234,   236,   235,   202,   242,
     243,   136,   137,   245,   246,   247,    65,   138,   250,   252,
      52,   255,   253,   258,    66,    67,   139,   108,   140,   256,
     265,   257,   141,   268,   270,    68,     2,   203,   272,   204,
     205,   206,   207,   208,   209,   210,   211,   212,    55,     2,
      56,    57,    58,    59,    60,    61,    62,    63,   165,    64,
     157,   175,   176,   177,   178,   273,   274,     4,   275,   276,
     278,    65,     5,     6,     7,     8,     9,   277,    10,    66,
      67,   279,   287,   288,   289,     5,     6,     7,     8,     9,
      68,    10,    55,   291,    56,    57,    58,    59,    60,    61,
      62,    63,    30,    64,    93,    55,   196,    56,    57,    58,
      59,    60,    61,    62,    63,    65,    64,   262,   142,    95,
     167,   231,   172,    66,    67,     0,     0,   193,   119,   171,
       0,   170,     0,     0,    68,     0,    66,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     3,    23,     4,    48,    48,     0,   100,   135,
      60,    61,    95,   139,    64,    16,    66,    67,   157,    12,
     150,   101,     3,    65,    17,    18,   245,     3,     3,    35,
      36,    37,     3,   156,     5,     6,     7,     8,     9,    10,
      11,    12,   165,    14,     3,    26,    47,    28,   205,     4,
      26,    26,    95,    95,     4,    26,   148,   214,   150,   278,
      35,    39,    35,    34,    35,    18,   196,    26,   110,    28,
     289,    49,    65,   153,    45,     3,    35,   119,    23,    24,
      33,    31,   132,   133,   134,    40,    41,    42,    43,    44,
     229,    46,    30,    43,    44,   252,    46,    26,   140,    28,
      38,   102,   102,   159,   196,     0,     3,     4,   101,   235,
     166,     3,   195,   270,   114,   157,    27,   274,   275,   169,
     277,    30,   279,    26,    30,    28,   119,     9,    10,    26,
     287,    28,    35,    31,     4,    33,   124,   125,    35,   159,
       3,     4,    18,    40,    41,    42,    43,    44,   149,    46,
     192,    30,   195,   195,   155,   156,   156,    31,    33,    33,
     153,    31,    31,    26,    33,   165,    30,   209,   211,   211,
     130,   131,    35,    43,    44,   228,    46,    40,    41,    42,
      43,    44,    30,    46,     4,    30,     3,   229,    60,    61,
      62,    63,    64,     4,    66,    67,    68,    26,    30,    28,
     242,   243,    26,   245,    28,    25,    29,     3,   250,     5,
       6,     7,     8,     9,    10,    11,    12,    15,    14,    16,
      40,    41,    42,    43,    44,    38,    46,    27,    38,    38,
      26,    33,    43,    44,   276,    46,   278,    27,    34,    35,
     241,    19,    20,    21,    22,    27,     3,   289,     3,    45,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     3,    38,     5,     6,     7,     8,     9,
      10,    11,    12,    27,    14,    27,    29,    33,    18,    26,
      26,    11,    12,    26,    18,    18,    26,    17,    26,    39,
      30,    18,    31,    29,    34,    35,    26,   169,    28,    27,
      49,    27,    32,    18,    39,    45,     4,    47,    27,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    26,    14,
      28,   126,   127,   128,   129,    29,    27,    35,    27,    26,
      18,    26,    40,    41,    42,    43,    44,    27,    46,    34,
      35,    27,    48,    27,    18,    40,    41,    42,    43,    44,
      45,    46,     3,    18,     5,     6,     7,     8,     9,    10,
      11,    12,    12,    14,    47,     3,   148,     5,     6,     7,
       8,     9,    10,    11,    12,    26,    14,   241,    89,    30,
     114,   164,   123,    34,    35,    -1,    -1,   145,    26,   122,
      -1,   119,    -1,    -1,    45,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    26,    35,    40,    41,    42,    43,    44,
      46,    60,    61,    62,    63,    68,    69,    70,    76,    77,
      82,    87,    93,    94,    95,    93,    94,     3,    89,     0,
      62,    71,    72,    73,    93,    69,    69,     3,    80,    65,
      95,    26,    28,    27,    88,    30,    18,    33,    38,    64,
      78,    30,    30,   108,    96,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    14,    26,    34,    35,    45,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    30,
       3,    90,    91,    73,    93,    30,    74,   119,   108,    30,
      81,   109,    69,    97,    98,    99,   100,   134,   135,   134,
      26,   135,   135,   134,    69,   120,   138,   134,   134,    26,
     135,    29,    15,    16,    23,    24,    19,    20,    21,    22,
       9,    10,    35,    36,    37,    38,    11,    12,    17,    26,
      28,    32,    90,    92,    31,    33,    74,    75,    79,    76,
      83,    84,    66,    67,    68,    69,    26,    28,    93,    94,
     101,   102,   103,    27,    33,    26,    94,   101,    27,    27,
     138,   125,   126,   130,   130,   131,   131,   131,   131,   133,
     133,   134,   134,   134,   122,     3,   116,   117,   122,   120,
       3,    31,    38,    91,    31,    33,    83,    85,    86,    93,
      31,    84,    18,    47,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   104,   105,   106,   107,   108,   110,   111,
     112,   115,   120,    68,    97,   102,   118,   103,    26,    28,
      25,   100,   134,    27,    27,    33,    29,   120,    74,    31,
      18,    33,    26,    26,   106,    26,    18,    18,   114,   120,
      26,   119,    39,    31,   106,    18,    27,    27,    29,    97,
     118,   122,    86,   120,   120,    49,   113,   114,    18,   120,
      39,   106,    27,    29,    27,    27,    26,    27,    18,    27,
     106,   106,   106,   120,   106,   114,   106,    48,    27,    18,
     106,    18,   114
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    64,    63,    65,
      63,    66,    66,    67,    67,    68,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    78,    79,    77,    80,
      81,    77,    77,    82,    82,    83,    83,    84,    85,    85,
      86,    88,    87,    89,    87,    87,    90,    90,    91,    92,
      91,    93,    93,    94,    94,    95,    95,    95,    96,    95,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   107,   107,
     109,   108,   110,   110,   111,   111,   111,   112,   112,   112,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   128,   129,   129,   129,   130,   130,
     130,   130,   130,   131,   132,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   138
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
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
  case 2: /* program: translation_unit  */
#line 47 "kim.y"
        {root=makeNode(N_PROGRAM,NIL,yyvsp[0],NIL); checkForwardReference();}
#line 1652 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 50 "kim.y"
                               {yyval=yyvsp[0];}
#line 1658 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 51 "kim.y"
                                                {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1664 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 54 "kim.y"
                              {yyval=yyvsp[0];}
#line 1670 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 55 "kim.y"
                      {yyval=yyvsp[0];}
#line 1676 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 58 "kim.y"
                                            {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1682 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 58 "kim.y"
                                                                                                           {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1688 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 59 "kim.y"
                     {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],makeSpecifier(int_type,0));}
#line 1694 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 59 "kim.y"
                                                                                                           {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1700 "y.tab.c"
    break;

  case 11: /* declaration_list_opt: %empty  */
#line 62 "kim.y"
          {yyval=NIL;}
#line 1706 "y.tab.c"
    break;

  case 12: /* declaration_list_opt: declaration_list  */
#line 63 "kim.y"
                           {yyval=yyvsp[0];}
#line 1712 "y.tab.c"
    break;

  case 13: /* declaration_list: declaration  */
#line 66 "kim.y"
                      {yyval=yyvsp[0];}
#line 1718 "y.tab.c"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 67 "kim.y"
                                       {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1724 "y.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 70 "kim.y"
                                                                    {yyval=setDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1730 "y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier  */
#line 73 "kim.y"
                         {yyval=makeSpecifier(yyvsp[0],0);}
#line 1736 "y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier  */
#line 74 "kim.y"
                                  {yyval=makeSpecifier(0,yyvsp[0]);}
#line 1742 "y.tab.c"
    break;

  case 18: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 75 "kim.y"
                                                {yyval=updateSpecifier(yyvsp[0],yyvsp[-1],0);}
#line 1748 "y.tab.c"
    break;

  case 19: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 76 "kim.y"
                                                         {yyval=updateSpecifier(yyvsp[0],0,yyvsp[-1]);}
#line 1754 "y.tab.c"
    break;

  case 20: /* storage_class_specifier: AUTO_SYM  */
#line 79 "kim.y"
                   {yyval=S_AUTO;}
#line 1760 "y.tab.c"
    break;

  case 21: /* storage_class_specifier: STATIC_SYM  */
#line 80 "kim.y"
                     {yyval=S_STATIC;}
#line 1766 "y.tab.c"
    break;

  case 22: /* storage_class_specifier: TYPEDEF_SYM  */
#line 81 "kim.y"
                      {yyval=S_TYPEDEF;}
#line 1772 "y.tab.c"
    break;

  case 23: /* init_declarator_list_opt: %empty  */
#line 84 "kim.y"
          {yyval=makeDummyIdentifier();}
#line 1778 "y.tab.c"
    break;

  case 24: /* init_declarator_list_opt: init_declarator_list  */
#line 85 "kim.y"
                               {yyval=yyvsp[0];}
#line 1784 "y.tab.c"
    break;

  case 25: /* init_declarator_list: init_declarator  */
#line 88 "kim.y"
                          {yyval=yyvsp[0];}
#line 1790 "y.tab.c"
    break;

  case 26: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 89 "kim.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1796 "y.tab.c"
    break;

  case 27: /* init_declarator: declarator  */
#line 92 "kim.y"
                     {yyval=yyvsp[0];}
#line 1802 "y.tab.c"
    break;

  case 28: /* init_declarator: declarator ASSIGN initializer  */
#line 93 "kim.y"
                                        {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1808 "y.tab.c"
    break;

  case 29: /* initializer: constant_expression  */
#line 96 "kim.y"
                              {yyval=makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1814 "y.tab.c"
    break;

  case 30: /* initializer: LR initializer_list RR  */
#line 97 "kim.y"
                                 {yyval=yyvsp[-1];}
#line 1820 "y.tab.c"
    break;

  case 31: /* initializer_list: initializer  */
#line 100 "kim.y"
                      {yyval=makeNode(N_INIT_LIST,yyvsp[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1826 "y.tab.c"
    break;

  case 32: /* initializer_list: initializer_list COMMA initializer  */
#line 101 "kim.y"
                                             {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 1832 "y.tab.c"
    break;

  case 33: /* type_specifier: struct_type_specifier  */
#line 104 "kim.y"
                                {yyval=yyvsp[0];}
#line 1838 "y.tab.c"
    break;

  case 34: /* type_specifier: enum_type_specifier  */
#line 105 "kim.y"
                              {yyval=yyvsp[0];}
#line 1844 "y.tab.c"
    break;

  case 35: /* type_specifier: TYPE_IDENTIFIER  */
#line 106 "kim.y"
                          {yyval=yyvsp[0];}
#line 1850 "y.tab.c"
    break;

  case 36: /* @3: %empty  */
#line 109 "kim.y"
                                     {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1856 "y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 109 "kim.y"
                                                                                             {yyval=current_id;current_level++;}
#line 1862 "y.tab.c"
    break;

  case 38: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 109 "kim.y"
                                                                                                                                                         {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);current_level--;current_id=yyvsp[-2];}
#line 1868 "y.tab.c"
    break;

  case 39: /* @5: %empty  */
#line 110 "kim.y"
                          {yyval=makeType(yyvsp[0]);}
#line 1874 "y.tab.c"
    break;

  case 40: /* @6: %empty  */
#line 110 "kim.y"
                                                {yyval=current_id;current_level++;}
#line 1880 "y.tab.c"
    break;

  case 41: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 110 "kim.y"
                                                                                                            {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);current_level--;current_id=yyvsp[-2];}
#line 1886 "y.tab.c"
    break;

  case 42: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 111 "kim.y"
                                     {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1892 "y.tab.c"
    break;

  case 43: /* struct_or_union: STRUCT_SYM  */
#line 114 "kim.y"
                     {yyval=T_STRUCT;}
#line 1898 "y.tab.c"
    break;

  case 44: /* struct_or_union: UNION_SYM  */
#line 115 "kim.y"
                    {yyval=T_UNION;}
#line 1904 "y.tab.c"
    break;

  case 45: /* struct_declaration_list: struct_declaration  */
#line 118 "kim.y"
                             {yyval=yyvsp[0];}
#line 1910 "y.tab.c"
    break;

  case 46: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 119 "kim.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1916 "y.tab.c"
    break;

  case 47: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 122 "kim.y"
                                                          {yyval=setStructDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1922 "y.tab.c"
    break;

  case 48: /* struct_declarator_list: struct_declarator  */
#line 125 "kim.y"
                            {yyval=yyvsp[0];}
#line 1928 "y.tab.c"
    break;

  case 49: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 126 "kim.y"
                                                         {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1934 "y.tab.c"
    break;

  case 50: /* struct_declarator: declarator  */
#line 129 "kim.y"
                     {yyval=yyvsp[0];}
#line 1940 "y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 132 "kim.y"
                              {yyval=setTypeStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1946 "y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 132 "kim.y"
                                                                                                           {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1952 "y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 133 "kim.y"
                   {yyval=makeType(T_ENUM);}
#line 1958 "y.tab.c"
    break;

  case 54: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 133 "kim.y"
                                                                {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1964 "y.tab.c"
    break;

  case 55: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 134 "kim.y"
                              {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1970 "y.tab.c"
    break;

  case 56: /* enumerator_list: enumerator  */
#line 137 "kim.y"
                     {yyval=yyvsp[0];}
#line 1976 "y.tab.c"
    break;

  case 57: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 138 "kim.y"
                                           {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1982 "y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER  */
#line 141 "kim.y"
                     {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1988 "y.tab.c"
    break;

  case 59: /* @9: %empty  */
#line 142 "kim.y"
                     {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1994 "y.tab.c"
    break;

  case 60: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 142 "kim.y"
                                                                                                   {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 2000 "y.tab.c"
    break;

  case 61: /* declarator: pointer direct_declarator  */
#line 145 "kim.y"
                                    {yyval=setDeclaratorElementType(yyvsp[0],yyvsp[-1]);}
#line 2006 "y.tab.c"
    break;

  case 62: /* declarator: direct_declarator  */
#line 146 "kim.y"
                            {yyval=yyvsp[0];}
#line 2012 "y.tab.c"
    break;

  case 63: /* pointer: STAR  */
#line 149 "kim.y"
               {yyval=makeType(T_POINTER);}
#line 2018 "y.tab.c"
    break;

  case 64: /* pointer: STAR pointer  */
#line 150 "kim.y"
                       {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2024 "y.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 153 "kim.y"
                     {yyval=makeIdentifier(yyvsp[0]);}
#line 2030 "y.tab.c"
    break;

  case 66: /* direct_declarator: LP declarator RP  */
#line 154 "kim.y"
                           {yyval=yyvsp[-1];}
#line 2036 "y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 155 "kim.y"
                                                          {yyval=setDeclaratorElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2042 "y.tab.c"
    break;

  case 68: /* @10: %empty  */
#line 156 "kim.y"
                               {yyval=current_id;current_level++;}
#line 2048 "y.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 156 "kim.y"
                                                                                           {checkForwardReference();current_id=yyvsp[-2];current_level--;yyval=setDeclaratorElementType(yyvsp[-4],setTypeField(makeType(T_FUNC),yyvsp[-1]));}
#line 2054 "y.tab.c"
    break;

  case 70: /* parameter_type_list_opt: %empty  */
#line 159 "kim.y"
          {yyval=NIL;}
#line 2060 "y.tab.c"
    break;

  case 71: /* parameter_type_list_opt: parameter_type_list  */
#line 160 "kim.y"
                              {yyval=yyvsp[0];}
#line 2066 "y.tab.c"
    break;

  case 72: /* parameter_type_list: parameter_list  */
#line 163 "kim.y"
                         {yyval=yyvsp[0];}
#line 2072 "y.tab.c"
    break;

  case 73: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 164 "kim.y"
                                         {yyval=linkDeclaratorList(yyvsp[-2],setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2078 "y.tab.c"
    break;

  case 74: /* parameter_list: parameter_declaration  */
#line 167 "kim.y"
                                {yyval=yyvsp[0];}
#line 2084 "y.tab.c"
    break;

  case 75: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 168 "kim.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 2090 "y.tab.c"
    break;

  case 76: /* parameter_declaration: declaration_specifiers declarator  */
#line 171 "kim.y"
                                            {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2096 "y.tab.c"
    break;

  case 77: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 172 "kim.y"
                                                         {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),yyvsp[0]),yyvsp[-1]);}
#line 2102 "y.tab.c"
    break;

  case 78: /* abstract_declarator_opt: %empty  */
#line 175 "kim.y"
          {yyval=NIL;}
#line 2108 "y.tab.c"
    break;

  case 79: /* abstract_declarator_opt: abstract_declarator  */
#line 176 "kim.y"
                              {yyval=yyvsp[0];}
#line 2114 "y.tab.c"
    break;

  case 80: /* abstract_declarator: pointer  */
#line 179 "kim.y"
                  {yyval=makeType(T_POINTER);}
#line 2120 "y.tab.c"
    break;

  case 81: /* abstract_declarator: direct_abstract_declarator  */
#line 180 "kim.y"
                                     {yyval=yyvsp[0];}
#line 2126 "y.tab.c"
    break;

  case 82: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 181 "kim.y"
                                             {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2132 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 184 "kim.y"
                                    {yyval=yyvsp[-1];}
#line 2138 "y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 185 "kim.y"
                                        {yyval=setTypeExpr(makeType(T_ARRAY),yyvsp[-1]);}
#line 2144 "y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 186 "kim.y"
                                                                   {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2150 "y.tab.c"
    break;

  case 86: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 187 "kim.y"
                                        {yyval=setTypeExpr(makeType(T_FUNC),yyvsp[-1]);}
#line 2156 "y.tab.c"
    break;

  case 87: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 188 "kim.y"
                                                                   {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 2162 "y.tab.c"
    break;

  case 88: /* statement_list_opt: %empty  */
#line 191 "kim.y"
          {yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2168 "y.tab.c"
    break;

  case 89: /* statement_list_opt: statement_list  */
#line 192 "kim.y"
                         {yyval=yyvsp[0];}
#line 2174 "y.tab.c"
    break;

  case 90: /* statement_list: statement  */
#line 195 "kim.y"
                    {yyval=makeNode(N_STMT_LIST,yyvsp[0],NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2180 "y.tab.c"
    break;

  case 91: /* statement_list: statement_list statement  */
#line 196 "kim.y"
                                   {yyval=makeNodeList(N_STMT_LIST,yyvsp[-1],yyvsp[0]);}
#line 2186 "y.tab.c"
    break;

  case 92: /* statement: labeled_statement  */
#line 199 "kim.y"
                            {yyval=yyvsp[0];}
#line 2192 "y.tab.c"
    break;

  case 93: /* statement: compound_statement  */
#line 200 "kim.y"
                             {yyval=yyvsp[0];}
#line 2198 "y.tab.c"
    break;

  case 94: /* statement: expression_statement  */
#line 201 "kim.y"
                               {yyval=yyvsp[0];}
#line 2204 "y.tab.c"
    break;

  case 95: /* statement: selection_statement  */
#line 202 "kim.y"
                              {yyval=yyvsp[0];}
#line 2210 "y.tab.c"
    break;

  case 96: /* statement: iteration_statement  */
#line 203 "kim.y"
                              {yyval=yyvsp[0];}
#line 2216 "y.tab.c"
    break;

  case 97: /* statement: jump_statement  */
#line 204 "kim.y"
                         {yyval=yyvsp[0];}
#line 2222 "y.tab.c"
    break;

  case 98: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 207 "kim.y"
                                                       {yyval=makeNode(N_STMT_LABEL_CASE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2228 "y.tab.c"
    break;

  case 99: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 208 "kim.y"
                                      {yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yyvsp[0],NIL);}
#line 2234 "y.tab.c"
    break;

  case 100: /* @11: %empty  */
#line 211 "kim.y"
             {yyval=current_id;current_level++;}
#line 2240 "y.tab.c"
    break;

  case 101: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 211 "kim.y"
                                                                                         {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND,yyvsp[-2],NIL,yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2246 "y.tab.c"
    break;

  case 102: /* expression_statement: SEMICOLON  */
#line 214 "kim.y"
                    {yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2252 "y.tab.c"
    break;

  case 103: /* expression_statement: expression SEMICOLON  */
#line 215 "kim.y"
                               {yyval=makeNode(N_STMT_EXPRESSION,NIL,yyvsp[-1],NIL);}
#line 2258 "y.tab.c"
    break;

  case 104: /* selection_statement: IF_SYM LP expression RP statement  */
#line 218 "kim.y"
                                            {yyval=makeNode(N_STMT_IF,yyvsp[-2],NIL,yyvsp[0]);}
#line 2264 "y.tab.c"
    break;

  case 105: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 219 "kim.y"
                                                               {yyval=makeNode(N_STMT_IF_ELSE,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2270 "y.tab.c"
    break;

  case 106: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 220 "kim.y"
                                                {yyval=makeNode(N_STMT_SWITCH,yyvsp[-2],NIL,yyvsp[0]);}
#line 2276 "y.tab.c"
    break;

  case 107: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 223 "kim.y"
                                               {yyval=makeNode(N_STMT_WHILE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2282 "y.tab.c"
    break;

  case 108: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 224 "kim.y"
                                                                {yyval=makeNode(N_STMT_DO,yyvsp[-5],NIL,yyvsp[-2]);}
#line 2288 "y.tab.c"
    break;

  case 109: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 225 "kim.y"
                                                 {yyval=makeNode(N_STMT_FOR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2294 "y.tab.c"
    break;

  case 110: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 228 "kim.y"
                                                                           {yyval=makeNode(N_FOR_EXP,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2300 "y.tab.c"
    break;

  case 111: /* expression_opt: %empty  */
#line 231 "kim.y"
          {yyval=NIL;}
#line 2306 "y.tab.c"
    break;

  case 112: /* expression_opt: expression  */
#line 232 "kim.y"
                     {yyval=yyvsp[0];}
#line 2312 "y.tab.c"
    break;

  case 113: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 235 "kim.y"
                                              {yyval=makeNode(N_STMT_RETURN,NIL,yyvsp[-1],NIL);}
#line 2318 "y.tab.c"
    break;

  case 114: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 236 "kim.y"
                                 {yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2324 "y.tab.c"
    break;

  case 115: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 237 "kim.y"
                              {yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2330 "y.tab.c"
    break;

  case 116: /* arg_expression_list_opt: %empty  */
#line 240 "kim.y"
          {yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2336 "y.tab.c"
    break;

  case 117: /* arg_expression_list_opt: arg_expression_list  */
#line 241 "kim.y"
                              {yyval=yyvsp[0];}
#line 2342 "y.tab.c"
    break;

  case 118: /* arg_expression_list: assignment_expression  */
#line 244 "kim.y"
                                {yyval=makeNode(N_ARG_LIST,yyvsp[0],NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2348 "y.tab.c"
    break;

  case 119: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 245 "kim.y"
                                                          {yyval=makeNodeList(N_ARG_LIST,yyvsp[-2],yyvsp[0]);}
#line 2354 "y.tab.c"
    break;

  case 120: /* constant_expression_opt: %empty  */
#line 248 "kim.y"
          {yyval=NIL;}
#line 2360 "y.tab.c"
    break;

  case 121: /* constant_expression_opt: constant_expression  */
#line 249 "kim.y"
                              {yyval=yyvsp[0];}
#line 2366 "y.tab.c"
    break;

  case 122: /* constant_expression: expression  */
#line 252 "kim.y"
                     {yyval=yyvsp[0];}
#line 2372 "y.tab.c"
    break;

  case 123: /* expression: comma_expression  */
#line 255 "kim.y"
                           {yyval=yyvsp[0];}
#line 2378 "y.tab.c"
    break;

  case 124: /* comma_expression: assignment_expression  */
#line 258 "kim.y"
                                {yyval=yyvsp[0];}
#line 2384 "y.tab.c"
    break;

  case 125: /* assignment_expression: conditional_expression  */
#line 261 "kim.y"
                                 {yyval=yyvsp[0];}
#line 2390 "y.tab.c"
    break;

  case 126: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 262 "kim.y"
                                                        {yyval=makeNode(N_EXP_ASSIGN,yyvsp[-2],NIL,yyvsp[0]);}
#line 2396 "y.tab.c"
    break;

  case 127: /* conditional_expression: logical_or_expression  */
#line 265 "kim.y"
                                {yyval=yyvsp[0];}
#line 2402 "y.tab.c"
    break;

  case 128: /* logical_or_expression: logical_and_expression  */
#line 268 "kim.y"
                                 {yyval=yyvsp[0];}
#line 2408 "y.tab.c"
    break;

  case 129: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 269 "kim.y"
                                                              {yyval=makeNode(N_EXP_OR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2414 "y.tab.c"
    break;

  case 130: /* logical_and_expression: bitwise_or_expression  */
#line 272 "kim.y"
                                {yyval=yyvsp[0];}
#line 2420 "y.tab.c"
    break;

  case 131: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 273 "kim.y"
                                                              {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL,yyvsp[0]);}
#line 2426 "y.tab.c"
    break;

  case 132: /* bitwise_or_expression: bitwise_xor_expression  */
#line 276 "kim.y"
                                 {yyval=yyvsp[0];}
#line 2432 "y.tab.c"
    break;

  case 133: /* bitwise_xor_expression: bitwise_and_expression  */
#line 279 "kim.y"
                                 {yyval=yyvsp[0];}
#line 2438 "y.tab.c"
    break;

  case 134: /* bitwise_and_expression: equality_expression  */
#line 282 "kim.y"
                              {yyval=yyvsp[0];}
#line 2444 "y.tab.c"
    break;

  case 135: /* equality_expression: relational_expression  */
#line 285 "kim.y"
                                {yyval=yyvsp[0];}
#line 2450 "y.tab.c"
    break;

  case 136: /* equality_expression: equality_expression EQL relational_expression  */
#line 286 "kim.y"
                                                        {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2456 "y.tab.c"
    break;

  case 137: /* equality_expression: equality_expression NEQ relational_expression  */
#line 287 "kim.y"
                                                        {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2462 "y.tab.c"
    break;

  case 138: /* relational_expression: shift_expression  */
#line 290 "kim.y"
                           {yyval=yyvsp[0];}
#line 2468 "y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LSS shift_expression  */
#line 291 "kim.y"
                                                     {yyval=makeNode(N_EXP_LSS,yyvsp[-2],NIL,yyvsp[0]);}
#line 2474 "y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GTR shift_expression  */
#line 292 "kim.y"
                                                     {yyval=makeNode(N_EXP_GTR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2480 "y.tab.c"
    break;

  case 141: /* relational_expression: relational_expression LEQ shift_expression  */
#line 293 "kim.y"
                                                     {yyval=makeNode(N_EXP_LEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2486 "y.tab.c"
    break;

  case 142: /* relational_expression: relational_expression GEQ shift_expression  */
#line 294 "kim.y"
                                                     {yyval=makeNode(N_EXP_GEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2492 "y.tab.c"
    break;

  case 143: /* shift_expression: additive_expression  */
#line 297 "kim.y"
                              {yyval=yyvsp[0];}
#line 2498 "y.tab.c"
    break;

  case 144: /* additive_expression: multiplicative_expression  */
#line 300 "kim.y"
                                    {yyval=yyvsp[0];}
#line 2504 "y.tab.c"
    break;

  case 145: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 301 "kim.y"
                                                             {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2510 "y.tab.c"
    break;

  case 146: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 302 "kim.y"
                                                              {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2516 "y.tab.c"
    break;

  case 147: /* multiplicative_expression: cast_expression  */
#line 305 "kim.y"
                          {yyval=yyvsp[0];}
#line 2522 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 306 "kim.y"
                                                         {yyval=makeNode(N_EXP_MUL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2528 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 307 "kim.y"
                                                          {yyval=makeNode(N_EXP_DIV,yyvsp[-2],NIL,yyvsp[0]);}
#line 2534 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 308 "kim.y"
                                                            {yyval=makeNode(N_EXP_MOD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2540 "y.tab.c"
    break;

  case 151: /* cast_expression: unary_expression  */
#line 311 "kim.y"
                           {yyval=yyvsp[0];}
#line 2546 "y.tab.c"
    break;

  case 152: /* cast_expression: LP type_name RP cast_expression  */
#line 312 "kim.y"
                                          {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL,yyvsp[0]);}
#line 2552 "y.tab.c"
    break;

  case 153: /* unary_expression: postfix_expression  */
#line 315 "kim.y"
                             {yyval=yyvsp[0];}
#line 2558 "y.tab.c"
    break;

  case 154: /* unary_expression: PLUSPLUS unary_expression  */
#line 316 "kim.y"
                                    {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2564 "y.tab.c"
    break;

  case 155: /* unary_expression: MINUSMINUS unary_expression  */
#line 317 "kim.y"
                                      {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2570 "y.tab.c"
    break;

  case 156: /* unary_expression: AMP cast_expression  */
#line 318 "kim.y"
                              {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2576 "y.tab.c"
    break;

  case 157: /* unary_expression: STAR cast_expression  */
#line 319 "kim.y"
                               {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2582 "y.tab.c"
    break;

  case 158: /* unary_expression: EXCL cast_expression  */
#line 320 "kim.y"
                               {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2588 "y.tab.c"
    break;

  case 159: /* unary_expression: MINUS cast_expression  */
#line 321 "kim.y"
                                {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2594 "y.tab.c"
    break;

  case 160: /* unary_expression: PLUS cast_expression  */
#line 322 "kim.y"
                               {yyval=makeNode(N_EXP_PLUS,NIL,yyvsp[0],NIL);}
#line 2600 "y.tab.c"
    break;

  case 161: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 323 "kim.y"
                                      {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2606 "y.tab.c"
    break;

  case 162: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 324 "kim.y"
                                     {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2612 "y.tab.c"
    break;

  case 163: /* postfix_expression: primary_expression  */
#line 327 "kim.y"
                             {yyval=yyvsp[0];}
#line 2618 "y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression LB expression RB  */
#line 328 "kim.y"
                                              {yyval=makeNode(N_EXP_ARRAY,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2624 "y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 329 "kim.y"
                                                           {yyval=makeNode(N_EXP_FUNCTION_CALL,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2630 "y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 330 "kim.y"
                                               {yyval=makeNode(N_EXP_STRUCT,yyvsp[-2],NIL,yyvsp[0]);}
#line 2636 "y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 331 "kim.y"
                                              {yyval=makeNode(N_EXP_ARROW,yyvsp[-2],NIL,yyvsp[0]);}
#line 2642 "y.tab.c"
    break;

  case 168: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 332 "kim.y"
                                      {yyval=makeNode(N_EXP_POST_INC,NIL,yyvsp[-1],NIL);}
#line 2648 "y.tab.c"
    break;

  case 169: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 333 "kim.y"
                                        {yyval=makeNode(N_EXP_POST_DEC,NIL,yyvsp[-1],NIL);}
#line 2654 "y.tab.c"
    break;

  case 170: /* primary_expression: IDENTIFIER  */
#line 336 "kim.y"
                     {yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yyvsp[0]),NIL);}
#line 2660 "y.tab.c"
    break;

  case 171: /* primary_expression: INTEGER_CONSTANT  */
#line 337 "kim.y"
                           {yyval=makeNode(N_EXP_INT_CONST,NIL,yyvsp[0],NIL);}
#line 2666 "y.tab.c"
    break;

  case 172: /* primary_expression: FLOAT_CONSTANT  */
#line 338 "kim.y"
                         {yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yyvsp[0],NIL);}
#line 2672 "y.tab.c"
    break;

  case 173: /* primary_expression: CHARACTER_CONSTANT  */
#line 339 "kim.y"
                             {yyval=makeNode(N_EXP_CHAR_CONST,NIL,yyvsp[0],NIL);}
#line 2678 "y.tab.c"
    break;

  case 174: /* primary_expression: STRING_LITERAL  */
#line 340 "kim.y"
                         {yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yyvsp[0],NIL);}
#line 2684 "y.tab.c"
    break;

  case 175: /* primary_expression: LP expression RP  */
#line 341 "kim.y"
                           {yyval=yyvsp[-1];}
#line 2690 "y.tab.c"
    break;

  case 176: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 344 "kim.y"
                                                         {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2696 "y.tab.c"
    break;


#line 2700 "y.tab.c"

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

#line 346 "kim.y"

extern char *yytext;

yyerror(char *s){
	syntax_err++;
	printf("line_no %d: %s near %s \n", line_no, s, yytext);
	exit(1);
}

int yywrap()
{
	return(1);
}
