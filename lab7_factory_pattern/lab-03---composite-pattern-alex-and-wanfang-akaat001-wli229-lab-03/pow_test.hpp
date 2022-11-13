#ifndef POW_TEST_HPP
#define POW_TEST_HPP

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest,testingTwoIntegers) {

	double testValue1 = 5;
	double testValue2 = 5;

	Base* PowTest1 = new Pow(testValue1, testValue2);
	EXPECT_NEAR(PowTest1->evaluate(),3125,0.01);

}

TEST(PowTest,testingTwoOpObjects) {

        Base* testValue3 = new Op(29.4);
        Base* testValue4 = new Op(1.6);

        Base* PowTest2 = new Pow(testValue3, testValue4);
        EXPECT_NEAR(PowTest2->evaluate(),223.54,0.01);

}

TEST(PowTest, testingDoubleAndObject) {
	Base* testValue5 = new Op(29.4);
	double testValue6 = 2.6;

	Base* PowTest3 = new Pow(testValue5, testValue6);

	EXPECT_NEAR(PowTest3->evaluate(),6572.08,0.01 );
}

TEST(PowTest, testingPowingmultObjects) {
	Base* testValue7 = new Op(2.2);
	Base* testValue8 = new Op(3.3);
	Base* testValue9 = new Op(2.2);
	
	Base* testValue10 = new Pow(testValue7, testValue8);
	
	Base* PowTest4 = new Pow(testValue10, testValue9);

	EXPECT_NEAR(PowTest4->evaluate(),306.188,0.001);
	
}

TEST(PowTest, testingTwoIntegerStringify) {
	double testValue11 = 91;
	double testValue12 = 2;

	Base* PowTest5 = new Pow(testValue11, testValue12);

	EXPECT_EQ(PowTest5->stringify(), "(91 ** 2)");
}

TEST(PowTest, testingTwoObjectsStringify) {
 	Base* testValue13 = new Op(7.23);
        Base* testValue14 = new Op(1.94);

        Base* PowTest6 = new Pow(testValue13, testValue14);
        EXPECT_EQ(PowTest6->stringify(),"(7.23 ** 1.94)");

}

#endif
