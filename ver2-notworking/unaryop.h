#ifndef __UNARYOP_H__
#define __UNARYOP_H__
#include <string>
#include "expression.h"

class UnaryOp: public Expression{
	std::string op;
	Expression* expr;

public:
	UnaryOp(Expression* expr, std::string op);
	~UnaryOp();
	std::string prettyprint();
	int evaluate();
};

#endif
