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
     ADDOP = 262,
     MULOP = 263,
     RELOP = 264,
     ANDOP = 265,
     EXPOP = 266,
     OROP = 267,
     NOTOP = 268,
     REMOP = 269,
     ARROW = 270,
     THEN = 271,
     WHEN = 272,
     BEGIN_ = 273,
     BOOLEAN = 274,
     END = 275,
     ENDREDUCE = 276,
     FUNCTION = 277,
     INTEGER = 278,
     IS = 279,
     REDUCE = 280,
     RETURNS = 281,
     CASE = 282,
     ELSE = 283,
     ENDCASE = 284,
     ENDIF = 285,
     IF = 286,
     OTHERS = 287,
     REAL = 288
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INT_LITERAL 259
#define REAL_LITERAL 260
#define BOOL_LITERAL 261
#define ADDOP 262
#define MULOP 263
#define RELOP 264
#define ANDOP 265
#define EXPOP 266
#define OROP 267
#define NOTOP 268
#define REMOP 269
#define ARROW 270
#define THEN 271
#define WHEN 272
#define BEGIN_ 273
#define BOOLEAN 274
#define END 275
#define ENDREDUCE 276
#define FUNCTION 277
#define INTEGER 278
#define IS 279
#define REDUCE 280
#define RETURNS 281
#define CASE 282
#define ELSE 283
#define ENDCASE 284
#define ENDIF 285
#define IF 286
#define OTHERS 287
#define REAL 288




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

