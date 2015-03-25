#include "unaryop.h"
#include <string>
using namespace std;

UnaryOp::UnaryOp(Expression* expr, string op):
	op(op), expr(expr){}

UnaryOp::~UnaryOp(){
	delete expr;
}

string UnaryOp::prettyprint(){
	string retstr;
	if (op == "NEG"){
		retstr = "-" + expr->prettyprint();
	}
	else if (op == "ABS"){
		retstr = "|" + expr->prettyprint() + "|";
	}
	return retstr;
}

int UnaryOp::evaluate(){
	int retval;
	int evaluatedVal = expr->evaluate();
	if (op == "NEG"){
		retval = -1 * evaluatedVal;
	}
	else if (op == "ABS"){
		retval = evaluatedVal >= 0 ? evaluatedVal : -1 * evaluatedVal;
	}
	return retval;
}
