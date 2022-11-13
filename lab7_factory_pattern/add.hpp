#ifndef ADD_HPP
#define ADD_HPP

#include "base.hpp"
#include <iostream>

class Add: public Base {
	private:
		Base*  valueForObject1;
		Base*  valueForObject2;

	public:
//constructors
		Add(double onlyDoubleVal1, double onlyDoubleVal2);
		Add(Base* passedValForObj1, Base* passedValForObj2);
		Add(Base* passedFor1ObjConstruct, double  doubleForVal2);
		Add(double doubleForVal1, Base* passedForObjComes2nd);
//functions	
		virtual double evaluate();
		virtual std::string stringify();
//destructor		
		~Add();




};



#endif
