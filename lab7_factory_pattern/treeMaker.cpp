#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "treeMaker.hpp"
#include "op.hpp"

using namespace std;
                        
Base* treeMaker::Parse(char** input, int length) {
	vector<Op*>digitsFromParse;
	vector<string> operatorsFromParse;
	vector<Base*>expressionPartials;
	int posInDigitList = 0;

	mathOperator = nullptr;	

	parseIntoVectors(digitsFromParse, operatorsFromParse, input, length);

	for (int i = 0; i < operatorsFromParse.size(); i++) {
		if (i == 0) {
			if (operatorsFromParse.at(i) == "+") {
				mathOperator = new Add(digitsFromParse.at(0), digitsFromParse.at(1));
					
			}

			else if (operatorsFromParse.at(i) == "-") {
				mathOperator = new Sub(digitsFromParse.at(0), digitsFromParse.at(1));

			}

			 else if (operatorsFromParse.at(i) == "*") {
                                mathOperator = new Mult(digitsFromParse.at(0), digitsFromParse.at(1));

                        }

			 else if (operatorsFromParse.at(i) == "/") {
                                mathOperator = new Div(digitsFromParse.at(0), digitsFromParse.at(1));
 
                        }

			 else if (operatorsFromParse.at(i) == "**") {
                                mathOperator = new Pow(digitsFromParse.at(0), digitsFromParse.at(1));

                        }
			
			expressionPartials.push_back(mathOperator);
			posInDigitList = 2; 

		}

		else {
			if (operatorsFromParse.at(i) == "+") {
				mathOperator = new Add(expressionPartials.at(expressionPartials.size() - 1), digitsFromParse.at(posInDigitList));  
			}

			else if (operatorsFromParse.at(i) == "-") {
				mathOperator = new Sub(expressionPartials.at(expressionPartials.size() - 1), digitsFromParse.at(posInDigitList));
			}

			else if (operatorsFromParse.at(i) == "*") {
				mathOperator = new Mult(expressionPartials.at(expressionPartials.size() - 1), digitsFromParse.at(posInDigitList));
			}

			else if (operatorsFromParse.at(i) == "/") {
				mathOperator = new Div(expressionPartials.at(expressionPartials.size() - 1), digitsFromParse.at(posInDigitList));
			}

			else if (operatorsFromParse.at(i) == "**") {
				mathOperator = new Pow(expressionPartials.at(expressionPartials.size() - 1), digitsFromParse.at(posInDigitList));
			}

			expressionPartials.push_back(mathOperator);
			posInDigitList = posInDigitList + 1;
			
		}
		
		
	}

	return expressionPartials.at(expressionPartials.size() - 1);

	
}

void treeMaker::parseIntoVectors(vector<Op*> &digitList, vector<string> &operatorList, char** userInput, int lenOfInput) {
	string tempDigit = "";
	stringstream ss;
	vector<string> entireExpression;
	double convertToDouble = 0;
  try {
	for (int i = 1; i < lenOfInput; i++) {
		entireExpression.push_back(userInput[i]);
	}

	for (int i = 0; i < entireExpression.size(); i++) {
		if(isdigit(entireExpression.at(i).at(0))) {
			ss << entireExpression.at(i);
			ss >> convertToDouble;
	
			createdOp = new Op(convertToDouble);

			digitList.push_back(createdOp);

			ss.clear();
		}

		else if (entireExpression.at(i) == "+" || entireExpression.at(i) == "-" || 
        	entireExpression.at(i) == "*" || entireExpression.at(i) == "/" || entireExpression.at(i) == "**") { 
			operatorList.push_back(entireExpression.at(i));
		}

		else {
			//FIXME: make into an exception later
			throw "Invalid Input detected";
		}
	}
   }
	
    catch(const char* msg) {
	cerr << msg << endl;	
	exit(-1);
    }
}

treeMaker::~treeMaker(){

	delete mathOperator;

}
