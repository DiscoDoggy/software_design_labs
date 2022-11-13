#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
	private:
   	double value;


	 public:
	Op(double v);
       // Op(double value) : Base() { }
        virtual double evaluate();// { return value; }
        virtual std::string stringify();// { return ""; }
};

#endif //__OP_HPP__
