#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include "rand.hpp"

using namespace std;

randomNumber::randomNumber() : Base() {
//	srand(1);
	value = rand() % 100;

}

double randomNumber::evaluate() {
	return value;

}

string randomNumber::stringify() {
	stringstream randomNumberToString;
	string typeConvertedRandomNumber;

	randomNumberToString << value;
	randomNumberToString >> typeConvertedRandomNumber;

	return typeConvertedRandomNumber;	


}

