#ifndef MULT_HPP
#define MULT_HPP

#include "base.hpp"
#include <iostream>

class Mult: public Base {
	private:
		Base*  valueForObject1;
		Base*  valueForObject2;

	public:
		Mult(double onlyDoubleVal1, double onlyDoubleVal2);
		Mult(Base* passedValForObj1, Base* passedValForObj2);
		Mult(Base* passedFor1ObjConstruct, double  doubleForVal2);
		Mult(double doubleForVal1, Base* passedValForObj2);

		virtual double evaluate();
		virtual std::string stringify();
};
#endif 
