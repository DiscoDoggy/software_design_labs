#ifndef SUB_HPP
#define SUB_HPP

#include "base.hpp"
#include <iostream>

class Sub: public Base {
	private:
		Base*  valueForObject1;
		Base*  valueForObject2;

	public:
		Sub(double onlyDoubleVal1, double onlyDoubleVal2);
		Sub(Base* passedValForObj1, Base* passedValForObj2);
		Sub(Base* passedFor1ObjConstruct, double  doubleForVal2);
		Sub(double doubleForVal1, Base* passedValForObj2);
		~Sub();

		virtual double evaluate();
		virtual std::string stringify();
};
#endif

