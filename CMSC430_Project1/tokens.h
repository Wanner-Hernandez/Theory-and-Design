/* File: token.h
 CMSC 430 Week 2 Project 1
 Compiler Theory and Design
 Wanner HernandezR
 Professor: Dr. Duane J. Jarc
 March 29, 2021 */

/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C
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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INT_LITERAL = 259,
    BOOL_LITERAL = 260,
    REAL_LITERAL = 261,
    ADDOP = 262,
    MULOP = 263,
    RELOP = 264,
    ANDOP = 265,
    REMOP = 266,
    EXPOP = 267,
    OROP = 268,
    NOTOP = 269,
    BEGIN_ = 270,
    BOOLEAN = 271,
    END = 272,
    ENDREDUCE = 273,
    FUNCTION = 274,
    INTEGER = 275,
    IS = 276,
    REDUCE = 277,
    RETURNS = 278,
    REAL = 279,
    IF = 280,
    THEN = 281,
    ELSE = 282,
    ENDIF = 283,
    CASE = 284,
    OTHERS = 285,
    ARROW = 286,
    ENDCASE = 287,
    WHEN = 288,
    NOT = 289
  };

#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */


