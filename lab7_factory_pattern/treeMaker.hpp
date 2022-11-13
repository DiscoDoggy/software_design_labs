#ifndef TREEMAKER_HPP
#define TREEMAKER_HPP

#include <iostream>
#include <string>
#include <vector>

#include "base.hpp"
#include "op.hpp"
//#include "rand.hpp"
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "sub.hpp"

using namespace std;

class treeMaker {
	
	private:
	   Op* createdOp;
	   void parseIntoVectors(vector<Op*> &digitList, vector<string> &operatorList, char** userInput, int lenOfInput);

	public:
	   Base* mathOperator;
	   Base* Parse(char** input, int length);
	   treeMaker(){};
	   ~treeMaker();


};








#endif
