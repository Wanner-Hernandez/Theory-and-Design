/* File: listing.h
 CMSC 430 Week 6 Project 3
 Compiler Theory and Design
 Wanner HernandezR
 Professor: Dr. Duane J. Jarc
 April 27, 2021 */

// This file contains the function prototypes for the functions that produce the // compilation listing

enum ErrorCategories {LEXICAL, SYNTAX, GENERAL_SEMANTIC, DUPLICATE_IDENTIFIER,
	UNDECLARED};

void firstLine();
void nextLine();
int lastLine();
void appendError(ErrorCategories errorCategory, string message);