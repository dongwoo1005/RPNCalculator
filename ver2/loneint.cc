#include "loneint.h"
#include <string>
#include <sstream>
using namespace std;

LoneInt::LoneInt(int n): 
	n(n){}

string LoneInt::to_string(int n){
	ostringstream ss;
	ss << n;
	return ss.str();
}

string LoneInt::prettyprint(){
	return to_string(n);
}

int LoneInt::evaluate(){
	return n;
}
