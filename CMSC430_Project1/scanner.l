/* File: scanner.l
 CMSC 430 Week 2 Project 1
 Compiler Theory and Design
 Wanner HernandezR
 Professor: Dr. Duane J. Jarc
 March 29, 2021 */
/* This file contains flex input file */

%{
#include <cstdio>
#include <string>

using namespace std;

#include "listing.h"
#include "tokens.h"
%}

%option noyywrap

ws		[ \t\r]+
comment	\-\-.*\n
comment2	\/\/.*\n 
line		[\n]
id		[A-Za-z](_?[A-Za-z0-9])* 
digit [0-9]
int -?{digit}+
punc		[\(\),:;.]
REAL_LITERAL {digit}+\.{digit}*([Ee][+-]?{digit}+)? 
%%

{ws}		{ ECHO; }
{comment}	{ ECHO; nextLine();}
{comment2}	{ECHO;nextLine();}
{line}		{ ECHO; nextLine();}
"=>"		{ ECHO; return(ARROW); }
"="|"/="|"<"|">"|">="|"<="		{ ECHO; return(RELOP); } 
"+"|"-"		{ ECHO; return(ADDOP); }  
"*"|"/"		{ ECHO; return(MULOP); }  
"**"		{ ECHO; return(EXPOP); }   
rem			{ECHO; return(REMOP); }
begin		{ ECHO; return(BEGIN_); }
boolean		{ ECHO; return(BOOLEAN); }
true      { ECHO; return(BOOL_LITERAL); } 
false     { ECHO; return(BOOL_LITERAL); } 
or    { ECHO; return(OROP); } 
not   { ECHO; return(NOTOP);} 
case		{ ECHO; return(CASE); }  
else		{ ECHO; return(ELSE); } 
endcase		{ ECHO; return(ENDCASE); } 
endif		{ ECHO; return(ENDIF); } 
if			{ ECHO; return(IF); } 
others		{ ECHO; return(OTHERS); } 
real		{ ECHO; return(REAL); }
returns		{ ECHO; return(RETURNS); }
then		{ ECHO; return(THEN); }
when		{ ECHO; return(WHEN); }
end		{ ECHO; return(END); }
endreduce	{ ECHO; return(ENDREDUCE); }
function	{ ECHO; return(FUNCTION); }
integer		{ ECHO; return(INTEGER); }
is		{ ECHO; return(IS); }
reduce		{ ECHO; return (REDUCE); }
and		{ ECHO; return(ANDOP); }
{REAL_LITERAL}   { ECHO; return(REAL_LITERAL); }
{id}		{ECHO; return(IDENTIFIER);}
{int}		{ ECHO; return(INT_LITERAL); }
{punc}		{ ECHO; return(yytext[0]); }
.		{ ECHO; appendError(LEXICAL, yytext); }
%%

int main()
{
	firstLine();
	
	FILE *file = fopen("lexemes.txt", "wa"); 
	int token = yylex();
	while (token)
	{
		fprintf(file, "%d %s\n", token, yytext);
		token = yylex();
	}
	lastLine();
	fclose(file);
	return 0;
}