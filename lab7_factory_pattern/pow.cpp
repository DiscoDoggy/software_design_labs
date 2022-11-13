#include "base.hpp"
#include "op.hpp"
#include "pow.hpp"

#include <iostream>
#include <cmath>
#include<string>
#include <exception>

using namespace std;

Pow::Pow(double onlyDoubleVal1, double onlyDoubleVal2) :Base()  {
	valueForObject1 = new Op(onlyDoubleVal1);
	valueForObject2 = new Op(onlyDoubleVal2);
}

Pow::Pow(Base* passedValForObj1, Base* passedValForObj2) :Base() {
	valueForObject1 = passedValForObj1;
	valueForObject2 = passedValForObj2;
}

Pow::Pow(Base* passedFor1ObjConstruct, double  doubleForVal2):Base() {
	valueForObject1 = passedFor1ObjConstruct;
	valueForObject2 = new Op(doubleForVal2);

}

Pow::Pow(double doubleForVal1, Base* passedForObjComes2nd) {
	valueForObject1 = new Op(doubleForVal1);
	valueForObject2 = passedForObjComes2nd;

}

double Pow::evaluate(){
	try {
		if (valueForObject1->evaluate() < 0 && valueForObject2->evaluate() == 0.5) {
			throw "Error: Can't square root negative number";

		}
	}
	catch (const char* msg){
		cerr << msg << endl;
}

	return pow(valueForObject1->evaluate() , valueForObject2->evaluate());

}

string Pow::stringify() {
	return "(" + valueForObject1->stringify() + " ** " + valueForObject2->stringify() + ")";
}

Pow::~Pow(){

	delete  valueForObject1;
	delete  valueForObject2;

}
