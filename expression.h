#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__
#include <string>


// Abstract class Expression
class Expression{

public:
	virtual ~Expression(){};	// dtor

	// string prettyprint()
	// returns the string of an Expression in conventional infix notation
	virtual std::string prettyprint() = 0;
	
	// int evaluate()
	// returns its value in int
	virtual int evaluate() = 0;
};

#endif
