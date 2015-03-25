#include "expression.h"
#include "loneint.h"
#include "unaryop.h"
#include "binaryop.h"
#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string word;
	Expression expr;
	while (1){
		// read one word at a time
		cin >> word;
		if (cin.eof()){
	// the stack will contain a pointer to a single object that encapsulates the entire expression
			if (expr.getnumStack() == 1){
				cout << expr.prettyprint() << endl;
				cout << "= " << expr.evaluate() << endl;
			} // end if
			break;
		} // end if

		istringstream ss(word);
		int n;

		// if the word is a number
		if (ss >> n){
			// when you require more stack space
			if (expr.isStackFull()){
				cerr << "Stack overflow" << endl;
				break;
			} // end if
			// create a corresponding expression object
			LoneInt* li = new LoneInt(n);
			// push a pointer to the object onto the stack
			expr.addtoStack(li);
		} // end if

		// if the word is ABS or NEG
		else if (word == "ABS" || word == "NEG"){
			// pop one item from the stack
			Expression* expr1 = expr.popLastStack();
			// convert to the corresponding object
			UnaryOp* uo = new UnaryOp(expr1, word);
			// push back onto the stack
			expr.addtoStack(uo);
		} // end else if

		// if the word is one of binary operator
		else if (word == "+" || word == "-" || word == "*" || word == "/"){
			// pop two items from the stack
			Expression* right = expr.popLastStack();
			Expression* left = expr.popLastStack();
			// convert to the corresponding object
			BinaryOp* bo = new BinaryOp(left,right,word);
			// push back onto the stack
			expr.addtoStack(bo);
		} // end else if

		else {
			cerr << "Invalid Input" << endl;
		} // end else
		
	}  // end while
} // end main
