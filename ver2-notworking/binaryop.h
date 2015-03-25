#ifndef __BINARYOP_H__
#define __BINARYOP_H__
#include "expression.h"

class BinaryOp: public Expression{
	std::string op;
	Expression* left;
	Expression* right;

public:
	BinaryOp(Expression* left, Expression* right, std::string op);
	~BinaryOp();
	std::string prettyprint();
	int evaluate();
};

#endif
