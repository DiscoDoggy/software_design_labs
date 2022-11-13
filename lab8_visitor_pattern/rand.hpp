
#ifndef RAND_HPP
#define RAND_HPP

#include "base.hpp"
#include <cstdlib>

class randomNumber : public Base {

	private:
		int value;
	public:
		randomNumber();

		virtual double evaluate();
		virtual std::string stringify();

		int number_of_children() override;
		Base* get_child (int i) override;
               	void accept(Visitor* visitor, int index)  override;


};








#endif
