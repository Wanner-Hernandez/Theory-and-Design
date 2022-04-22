/* File: listing.h
CMSC 430 Week 2 Project 1
Compiler Theory and Design
Wanner HernandezR
Professor: Dr. Duane J. Jarc
March 29, 2021 */

// This file contains the function prototypes for the functions that produce the // compilation listing

enum ErrorCategories {LEXICAL, SYNTAX, GENERAL_SEMANTIC, DUPLICATE_IDENTIFIER,
	UNDECLARED};

void firstLine();
void nextLine();
int lastLine();
void appendError(ErrorCategories errorCategory, string message);

