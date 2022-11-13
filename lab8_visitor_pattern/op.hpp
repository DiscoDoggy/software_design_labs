#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include "iterator.hpp"


class Op : public Base {
	private:
   	double value;


	 public:
	Op(double v);
      	//Op(double value) : Base() { }
       	virtual double evaluate();
	virtual std::string stringify();
	
	int number_of_children() override;
	Base* get_child(int i )override;
	void accept(Visitor* visitor, int index) override;
       
};
       
#endif //__OP_HPP__









































