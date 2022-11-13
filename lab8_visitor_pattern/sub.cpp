#include "base.hpp"
#include "op.hpp"
#include "sub.hpp"
#include "visitor.hpp"
#include <iostream>
#include<string>

using namespace std;

Sub::Sub(double onlyDoubleVal1, double onlyDoubleVal2) :Base()  {
	valueForObject1 = new Op(onlyDoubleVal1);
	valueForObject2 = new Op(onlyDoubleVal2);
}

Sub::Sub(Base* passedValForObj1, Base* passedValForObj2) :Base() {
	valueForObject1 = passedValForObj1;
	valueForObject2 = passedValForObj2;
}

Sub::Sub(Base* passedFor1ObjConstruct, double  doubleForVal2):Base() {
	valueForObject1 = passedFor1ObjConstruct;
	valueForObject2 = new Op(doubleForVal2);
}

Sub::Sub(double doubleForVal1, Base* passedForObjComes2nd) {
	valueForObject1 = new Op(doubleForVal1);
	valueForObject2 = passedForObjComes2nd;

}



double Sub::evaluate(){
	return valueForObject1->evaluate() - valueForObject2->evaluate();
}

string Sub::stringify() {
	return "(" + valueForObject1->stringify() + " - " + valueForObject2->stringify() + ")";
}


int Sub::number_of_children() {
	return 2;
}

Base* Sub::get_child (int i) {
	if (i == 0) {
		return valueForObject1;
	}

	else if (i == 1) {
		return valueForObject2;
	}
}



void Sub::accept(Visitor* visitor, int index) {
        if (index == 0) {
                visitor->visit_sub_begin(this);
        }

        else if (index == 1) {
                visitor -> visit_sub_middle(this);
        }

        else if (index == 2) {
                visitor -> visit_sub_end(this);
        }

        else {
                cout << "In Add accept, invalid index" << endl;
        }	
}
