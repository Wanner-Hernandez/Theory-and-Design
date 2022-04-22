/* File: values.h
 CMSC 430 Week 6 Project 3
 Compiler Theory and Design
 Wanner HernandezR
 Professor: Dr. Duane J. Jarc
 April 27, 2021 */

// This file contains function definitions for the evaluation functions

typedef char* CharPtr;
enum Operators {LESS, ADD, SUBTRACT, DIVIDE, MULTIPLY, POWER, ARROW, GREATER, EQUAL, NOT_EQUAL, GREATER_EQUAL, LESS_EQUAL, REM, };

int evaluateReduction(Operators operator_, int head, int tail);
int evaluateRelational(int left, Operators operator_, int right);
int evaluateArithmetic(int left, Operators operator_, int right);