#ifndef __LONEINT_H__
#define __LONEINT_H__
#include <string>
#include "expression.h"

class LoneInt: public Expression{
	int n;		// lone integers
	// string to_string(int n)
	// takes an integer and return it in a string form
	std::string to_string(int n);
public:
	LoneInt(int n); // ctor

	// string prettyprint()
	// returns the string of LoneInt expression in conventional infix notation
	std::string prettyprint();
	
	// int evaluate()
	// returns its value in int
	int evaluate();	
};

#endif
