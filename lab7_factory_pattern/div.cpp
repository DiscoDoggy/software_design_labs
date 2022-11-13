
#include "base.hpp"
#include "op.hpp"
#include "div.hpp"

#include <iostream>
#include<string>
#include <exception>

using namespace std;

Div::Div(double onlyDoubleVal1, double onlyDoubleVal2) :Base()  {
	valueForObject1 = new Op(onlyDoubleVal1);
	valueForObject2 = new Op(onlyDoubleVal2);
}

Div::Div(Base* passedValForObj1, Base* passedValForObj2) :Base() {
	valueForObject1 = passedValForObj1;
	valueForObject2 = passedValForObj2;
}

Div::Div(Base* passedFor1ObjConstruct, double  doubleForVal2):Base() {
	valueForObject1 = passedFor1ObjConstruct;
	valueForObject2 = new Op(doubleForVal2);

}

Div::Div (double doubleForVal1, Base* passedForObjComes2nd) :Base()  {
	valueForObject1 = new Op(doubleForVal1);
	valueForObject2 = passedForObjComes2nd;
}

Div::Div (int intForVal1, int intForVal2) :Base()  {
	valueForObject1 = new Op(intForVal1);
	valueForObject2 = new Op(intForVal2);
	
}

double Div::evaluate(){
	try {
		if (valueForObject2->evaluate() == 0) {
			throw "denominator cannot be 0";
		}

	}

	catch (const char* msg){
		cout << msg << endl;
		exit(1);
	}

	
	return valueForObject1->evaluate() / valueForObject2->evaluate();

}

string Div::stringify() {
	return "(" + valueForObject1->stringify() + " / " + valueForObject2->stringify() + ")";
}

Div::~Div(){

        delete  valueForObject1;
        delete  valueForObject2;

}


