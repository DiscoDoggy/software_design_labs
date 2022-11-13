#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"

#include <iostream>
#include<string>

using namespace std;

Mult::Mult(double onlyDoubleVal1, double onlyDoubleVal2) :Base()  {
	valueForObject1 = new Op(onlyDoubleVal1);
	valueForObject2 = new Op(onlyDoubleVal2);
}

Mult::Mult(Base* passedValForObj1, Base* passedValForObj2) :Base() {
	valueForObject1 = passedValForObj1;
	valueForObject2 = passedValForObj2;
}

Mult::Mult(Base* passedFor1ObjConstruct, double  doubleForVal2):Base() {
	valueForObject1 = passedFor1ObjConstruct;
	valueForObject2 = new Op(doubleForVal2);

}

Mult::Mult (double doubleForVal1, Base* passedForObjComes2nd) {
	valueForObject1 = new Op(doubleForVal1);
	valueForObject2 = passedForObjComes2nd;

}




double Mult::evaluate(){
	return valueForObject1->evaluate() * valueForObject2->evaluate();

}

string Mult::stringify() {
	return "(" + valueForObject1->stringify() + " * " + valueForObject2->stringify() + ")";


}

Mult::~Mult(){

	delete valueForObject1;
	delete valueForObject2;

}
