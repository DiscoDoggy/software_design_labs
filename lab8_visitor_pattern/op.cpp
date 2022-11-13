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

int Op::number_of_children() {
	return 0;
}

Base* Op::get_child(int i) {
	return nullptr;
}

void Op::accept(Visitor* visitor, int index) {
	if(index == 0) {
		visitor->visit_op(this);
	}

}




