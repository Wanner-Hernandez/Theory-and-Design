/*
 Compiler Theory and Design
 CMSC 430 Week 8 Project 4
 Wanner HernandezR
 Professor: Dr. Duane J. Jarc
 May 10, 2021
 Desc: This file contains the function prototypes for the functions that produce the 
 compilation listing
*/
enum ErrorCategories {LEXICAL, SYNTAX, GENERAL_SEMANTIC, DUPLICATE_IDENTIFIER,
	UNDECLARED};

void firstLine();
void nextLine();
int lastLine();
void appendError(ErrorCategories errorCategory, string message);

