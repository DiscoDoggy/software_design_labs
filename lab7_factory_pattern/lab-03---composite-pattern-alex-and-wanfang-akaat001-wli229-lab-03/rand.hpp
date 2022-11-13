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



};








#endif
