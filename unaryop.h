#ifndef __UNARYOP_H__
#define __UNARYOP_H__
#include <string>
#include "expression.h"

class UnaryOp: public Expression{
	std::string op;		// unary operator
	Expression* expr;	// previous expression

public:
	UnaryOp(Expression* expr, std::string op); // ctor
	~UnaryOp(); // dtor

	// string prettyprint()
	// returns the string of UnaryOp expression in conventional infix notation
	std::string prettyprint();

	// int evaluate()
	// returns its value in int
	int evaluate();
};

#endif
