#include "expression.h"
#include "loneint.h"
#include "unaryop.h"
#include "binaryop.h"
#include <iostream>
#include <sstream>
using namespace std;

// RPN Calculator
// Written by Dongwoo Son
// Written for CS246 a4q1b
// on March 20, 2015

const int stackSize = 10; // set max stack size

int main(){
	string word;
	Expression* stack[stackSize];
	int numStack = 0;
	while (1){
		// read one word at a time
		cin >> word;
		if (cin.eof()){
	// the stack will contain a pointer to a single object that encapsulates the entire expression
			if (numStack == 1){
				cout << stack[0]->prettyprint() << endl;
				cout << "= " << stack[0]->evaluate() << endl;
			} // end if
			delete stack[0];
			break;
		} // end if

		istringstream ss(word);
		int n;

		// if the word is a number
		if (ss >> n){
			// when you require more stack space
			if (numStack == stackSize){
				cerr << "Stack overflow" << endl;
				break;
			} // end if
			// create a corresponding expression object
			LoneInt* li = new LoneInt(n);
			// push a pointer to the object onto the stack
			stack[numStack] = li;
			numStack++;
		} // end if

		// if the word is ABS or NEG
		else if (word == "ABS" || word == "NEG"){
			// pop one item from the stack
			numStack--;
			Expression* expr1 = stack[numStack];
			// convert to the corresponding object
			UnaryOp* uo = new UnaryOp(expr1, word);
			// push back onto the stack
			stack[numStack] = uo;
			numStack++;
		} // end else if

		// if the word is one of binary operator
		else if (word == "+" || word == "-" || word == "*" || word == "/"){
			// pop two items from the stack
			numStack--;
			Expression* right = stack[numStack];
			numStack--;
			Expression* left = stack[numStack];
			// convert to the corresponding object
			BinaryOp* bo = new BinaryOp(left,right,word);
			// push back onto the stack
			stack[numStack] = bo;
			numStack++;
		} // end else if

		else {
			cerr << "Invalid Input" << endl;
		} // end else
		
	}  // end while
} // end main
