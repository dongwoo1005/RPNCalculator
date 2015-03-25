#include "binaryop.h"
#include <string>
using namespace std;

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
	}
	else if (op == "-"){
		retval = left->evaluate() - right->evaluate();
	}
	else if (op == "*"){
		retval = left->evaluate() * right->evaluate();
	}
	else if (op == "/"){
		retval = left->evaluate() / right->evaluate();
	}
	return retval;
}
