#ifndef MULT_TEST_HPP
#define MULT_TEST_HPP

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "sub.hpp"
#include "treeMaker.hpp"
TEST(MultTest,testingTwoIntegers) {

	double testValue1 = 5;
	double testValue2 = 27;

	Base* MultTest1 = new Mult(testValue1, testValue2);
	EXPECT_EQ(MultTest1->evaluate(),135);

}

TEST(MultTest,testingTwoOpObjects) {

        Base* testValue3 = new Op(32.5);
        Base* testValue4 = new Op(20.79);

        Base* MultTest2 = new Mult(testValue3, testValue4);
        EXPECT_DOUBLE_EQ(MultTest2->evaluate(),675.675);

}

TEST(MultTest, testingDoubleAndObject) {
	Base* testValue5 = new Op(29.4);
	double testValue6 = 30.6;

	Base* MultTest3 = new Mult(testValue5, testValue6);

	EXPECT_DOUBLE_EQ(MultTest3->evaluate(),899.64 );
}

TEST(MultTest, testingMultingMultObjects) {
	Base* testValue7 = new Op(2.2);
	Base* testValue8 = new Op(3.3);
	Base* testValue9 = new Op(4.4);
	
	Base* testValue10 = new Mult(testValue7, testValue8);
	
	Base* MultTest4 = new Mult(testValue10, testValue9);

	EXPECT_DOUBLE_EQ(MultTest4->evaluate(), 31.944);
	

}

TEST(MultTest, testingTwoIntegerStringify) {
	double testValue11 = 91;
	double testValue12 = 82;

	Base* MultTest5 = new Mult(testValue11, testValue12);

	EXPECT_EQ(MultTest5->stringify(), "(91 * 82)");
}

TEST(MultTest, testingTwoObjectsStringify) {
 	Base* testValue13 = new Op(7.23);
        Base* testValue14 = new Op(1.94);

        Base* MultTest6 = new Mult(testValue13, testValue14);
        EXPECT_EQ(MultTest6->stringify(),"(7.23 * 1.94)");

}

TEST(MultTest, testingUsingOnlyMults) {
	Base* testValue15 = new Mult(6,8);
	Base* testValue16 = new Mult(2,3);

	Base* MultTest7 = new Mult(testValue15, testValue16);

	EXPECT_EQ(MultTest7->stringify(), "((6 * 8) * (2 * 3))");

}
#endif
