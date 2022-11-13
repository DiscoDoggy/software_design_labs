#include <iostream>
#include<string>
#include "op.hpp"
#include <sstream>

using namespace std;

Op::Op (double v) : Base() {
	value = v;
}


 string Op::stringify() {
	string stringValue;
	
	stringstream convertOpToString;
	
	if (value < 0) {
		value = value * -1;
		convertOpToString << value;
		convertOpToString >> stringValue;

		stringValue = "-" + stringValue;
		
		value = value * -1;		
	
		return stringValue;
	}

	else {
		convertOpToString << value;
		convertOpToString >> stringValue;

		return stringValue;
	}

}

 double Op::evaluate() {
	return value;

}
