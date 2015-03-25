#ifndef __LONEINT_H__
#define __LONEINT_H__
#include <string>
#include "expression.h"

class LoneInt: public Expression{
	int n;
	std::string to_string(int n);
public:
	LoneInt(int n);
	std::string prettyprint();
	int evaluate();	
};

#endif
