/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     INT_LITERAL = 259,
     REAL_LITERAL = 260,
     BOOL_LITERAL = 261,
     CASE = 262,
     TRUE = 263,
     FALSE = 264,
     ADDOP = 265,
     MULOP = 266,
     RELOP = 267,
     OROP = 268,
     NOTOP = 269,
     REMOP = 270,
     EXPOP = 271,
     ANDOP = 272,
     BEGIN_ = 273,
     BOOLEAN = 274,
     END = 275,
     ENDREDUCE = 276,
     FUNCTION = 277,
     INTEGER = 278,
     IS = 279,
     REDUCE = 280,
     RETURNS = 281,
     THEN = 282,
     WHEN = 283,
     ELSE = 284,
     ENDCASE = 285,
     ENDIF = 286,
     IF = 287,
     OTHERS = 288,
     REAL = 289
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INT_LITERAL 259
#define REAL_LITERAL 260
#define BOOL_LITERAL 261
#define CASE 262
#define TRUE 263
#define FALSE 264
#define ADDOP 265
#define MULOP 266
#define RELOP 267
#define OROP 268
#define NOTOP 269
#define REMOP 270
#define EXPOP 271
#define ANDOP 272
#define BEGIN_ 273
#define BOOLEAN 274
#define END 275
#define ENDREDUCE 276
#define FUNCTION 277
#define INTEGER 278
#define IS 279
#define REDUCE 280
#define RETURNS 281
#define THEN 282
#define WHEN 283
#define ELSE 284
#define ENDCASE 285
#define ENDIF 286
#define IF 287
#define OTHERS 288
#define REAL 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 35 "parser.y"
{
	CharPtr iden;
	Operators oper;
	int value;
}
/* Line 1529 of yacc.c.  */
#line 123 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

