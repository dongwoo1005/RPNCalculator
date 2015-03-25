#ifndef __BINARYOP_H__
#define __BINARYOP_H__
#include "expression.h"

class BinaryOp: public Expression{
	std::string op;		// operrator + - / *
	Expression* left;	// left expression
	Expression* right;  // right expression

public:
	BinaryOp(Expression* left, Expression* right, std::string op); // ctor
	~BinaryOp(); // dtor

	// string prettyprint()
	// returns the string of BinaryOp expression in conventional infix notation
	std::string prettyprint();
	// int evaluate()
	// returns its value in int
	int evaluate();
};

#endif
