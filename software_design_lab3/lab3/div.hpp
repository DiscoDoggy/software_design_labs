#ifndef DIV_HPP
#define DIV_HPP

#include "base.hpp"
#include <iostream>

class Div: public Base {
	private:
		Base*  valueForObject1;
		Base*  valueForObject2;

	public:
		Div(double onlyDoubleVal1, double onlyDoubleVal2);
		Div(Base* passedValForObj1, Base* passedValForObj2);
		Div(Base* passedFor1ObjConstruct, double  doubleForVal2);
		Div(double doubleForVal1, Base* passedValForObj2);
		Div(int intForVal1, int intForVal2);


		virtual double evaluate();
		virtual std::string stringify();
};
#endif

