/* File: values.cc
 CMSC 430 Week 6 Project 3
 Compiler Theory and Design
 Wanner HernandezR
 Professor: Dr. Duane J. Jarc
 April 27, 2021 */

// This file contains the bodies of the evaluation functions

#include <string>
#include <vector>
#include <cmath>

using namespace std;

#include "values.h"
#include "listing.h"

int evaluateReduction(Operators operator_, int head, int tail) {
	if (operator_ == ADD)
		return head + tail;
	return head * tail;
}

int evaluateRelational(int left, Operators operator_, int right) {
	int result;
	switch (operator_) {
		case LESS:
			result = left < right;
			break;
		case LESS_EQUAL:
			result = left <= right;
			break;
		case GREATER:
			result = left > right;
			break;
		case GREATER_EQUAL:
			result = left >= right;
			break;
		case EQUAL:
			result = left = right;
			break;
		case NOT_EQUAL:	
			result = left /= right;
			break;
              
	}
	return result;
}

int evaluateArithmetic(int left, Operators operator_, int right) {
	int result;
	switch (operator_) {
		case ADD:
			result = left + right;
			break;
		case SUBTRACT:
			result = left - right;
			break;
		case MULTIPLY:
			result = left * right;
			break;
		case DIVIDE:
			result = left / right;
			break;
		case REM:
			result = left % right;
			break;
                 
	}
	return result;
}