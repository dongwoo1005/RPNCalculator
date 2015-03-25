#include "expression.h"
#include <string>
using namespace std;

Expression::Expression(): numStack(0){
	for (int i=0; i<stackSize; ++i){
		stack[i] = NULL;
	}
}

/*
Expression::Expression(int numStack):
	numStack(numStack){
	for (int i=0; i<stackSize; ++i){
		stack[i] = new Expression;
	}
}
*/

Expression::~Expression(){
	for (int i=0; i<stackSize; ++i){
		if (stack[i] != NULL){
			delete stack[i];
		}
	}
}

/*
Expression* Expression::getLastStack(){
	return stack[numStack];
}
*/
/*
Expression::Expression(Expression &other): numStack(other.numStack){
	for (int i=0; i<numStack; ++i){
		stack[i] = 
	}
}
*/

Expression* Expression::popLastStack(){
	numStack--;
	return stack[numStack];
}

void Expression::addtoStack(Expression* expr){
	stack[numStack] = expr;
	numStack++;
}

int Expression::getnumStack(){
	return numStack;
}

bool Expression::isStackFull(){
	return numStack == stackSize;
}

string Expression::prettyprint(){
	return stack[0]->prettyprint();
};

int Expression::evaluate(){
	return stack[0]->evaluate();
};
