#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "visitor.hpp"

#include <iostream>
#include<string>

using namespace std;

Add::Add(double onlyDoubleVal1, double onlyDoubleVal2) :Base()  {
	valueForObject1 = new Op(onlyDoubleVal1);
	valueForObject2 = new Op(onlyDoubleVal2);
}

Add::Add(Base* passedValForObj1, Base* passedValForObj2) :Base() {
	valueForObject1 = passedValForObj1;
	valueForObject2 = passedValForObj2;
}

Add::Add(Base* passedFor1ObjConstruct, double  doubleForVal2):Base() {
	valueForObject1 = passedFor1ObjConstruct;
	valueForObject2 = new Op(doubleForVal2);

}

Add::Add(double doubleForVal1, Base* passedForObjComes2nd) {
	valueForObject1 = new Op(doubleForVal1);
	valueForObject2 = passedForObjComes2nd;

}

double Add::evaluate(){
	return valueForObject1->evaluate() + valueForObject2->evaluate();

}

string Add::stringify() {
	return "(" + valueForObject1->stringify() + " + " + valueForObject2->stringify() + ")";


}


int Add::number_of_children() {
	return 2;
}
		
Base* Add::get_child(int i) {
	if (i == 0) {
		return valueForObject1;
	
	}
	if (i == 1) {
		return valueForObject2;
	}

	else {
		return nullptr;
	}
}



void Add::accept(Visitor* visitor, int index) {
	if (index == 0) {
		visitor->visit_add_begin(this);
	}

	else if (index == 1) {
		visitor -> visit_add_middle(this);
	}

	else if (index == 2) {
		visitor -> visit_add_end(this);
	}

	else {
		cout << "In Add accept, invalid index" << endl;
	}		
}


