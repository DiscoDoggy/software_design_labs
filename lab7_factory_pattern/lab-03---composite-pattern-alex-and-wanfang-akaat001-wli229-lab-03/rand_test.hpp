#ifndef RAND_TEST_HPP
#define RAND_TEST_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>



#include "gtest/gtest.h"
#include "rand.hpp"

using namespace std;

TEST(randomNumTest, isRightRandNum) {
	srand(1);

	int numOfRandNums = 100;
	randomNumber* arrOfRandNums[numOfRandNums];
	bool randTest1 = true;

	for (int i = 0; i < numOfRandNums; i++) {
		arrOfRandNums[i] = new randomNumber();

	}
	for (int i = 0; i < numOfRandNums; i++) {
		if (arrOfRandNums[i]->evaluate() < 0 || arrOfRandNums[i]->evaluate() > 99) {
			randTest1 = false;
		}
	}
		


	EXPECT_EQ(randTest1, true);

}

TEST (randomNumTest, didStringifyWork) {
	stringstream convertTestNumToInt;	
	int testValueForDidStringifyWork;
	bool isStringifyRight = true;

	srand(1);
	randomNumber* testRandomNumber = new randomNumber();
	
	
	convertTestNumToInt << testRandomNumber->stringify();
	convertTestNumToInt >> testValueForDidStringifyWork;
	
	if (testRandomNumber ->evaluate() != testValueForDidStringifyWork) {
		isStringifyRight = false;
	}




	EXPECT_EQ(isStringifyRight, true);


}








#endif
