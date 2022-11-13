#ifndef POW_HPP
#define POW_HPP

#include "base.hpp"
#include <cmath>
#include <iostream>

class Pow: public Base {
	private:
		Base*  valueForObject1;
		Base*  valueForObject2;

	public:
		Pow(double onlyDoubleVal1, double onlyDoubleVal2);
		Pow(Base* passedValForObj1, Base* passedValForObj2);
		Pow(Base* passedFor1ObjConstruct, double  doubleForVal2);
		Pow(double doubleForVal1, Base* passedValForObj2);
		~Pow();

		virtual double evaluate();
		virtual std::string stringify();
};
#endif

