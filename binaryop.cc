#include "binaryop.h"
#include <string>
using namespace std;

// Refer to binaryop.h for implementation details

BinaryOp::BinaryOp(Expression* left, Expression* right, string op):
	op(op), left(left), right(right) {}

BinaryOp::~BinaryOp(){
	delete left;
	delete right;
}


string BinaryOp::prettyprint(){
	return "(" + left->prettyprint() + " " + op + " " + right->prettyprint() + ")";
}

int BinaryOp::evaluate(){
	int retval;
	if (op == "+"){
		retval = left->evaluate() + right->evaluate();
	} // end if
	else if (op == "-"){
		retval = left->evaluate() - right->evaluate();
	} // end else if
	else if (op == "*"){
		retval = left->evaluate() * right->evaluate();
	} // end else if
	else if (op == "/"){
		retval = left->evaluate() / right->evaluate();
	} // end else if
	return retval;
}
