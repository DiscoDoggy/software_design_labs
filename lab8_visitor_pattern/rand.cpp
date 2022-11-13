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

void randomNumber::accept(Visitor* visitor, int index)  {
	if(index == 0) {
		visitor->visit_rand(this);
	}

	else {
		cout << "Rand accept fail" << endl;
	}
}


int randomNumber::number_of_children() {
	return 0;
}

Base* randomNumber::get_child (int i) {
	return nullptr;
}
