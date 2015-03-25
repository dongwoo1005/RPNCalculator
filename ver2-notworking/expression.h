#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__
#include <string>

const int stackSize = 10;

class Expression{
	Expression* stack[stackSize];
	int numStack;

public:
	Expression();
	//Expression(int numStack, std::string prettystr, int val);
	virtual ~Expression();

//	Expression* getLastStack();
	Expression* popLastStack();
	void addtoStack(Expression* expr);

	bool isStackFull();
	int getnumStack();

	virtual std::string prettyprint();
	virtual int evaluate();
};

#endif
