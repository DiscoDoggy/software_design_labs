#ifndef DIV_TEST_HPP
#define DIV_TEST_HPP

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
TEST(DivTest,testingTwoIntegers) {

	double testValue1 = 25;
	double testValue2 = 5;

	Base* DivTest1 = new Div(testValue1, testValue2);
	EXPECT_NEAR(DivTest1->evaluate(),5,0.00001);

}

TEST(DivTest,testingTwoOpObjects) {

        Base* testValue3 = new Op(33.5);
        Base* testValue4 = new Op(20.5);

        Base* DivTest2 = new Div(testValue3, testValue4);
        EXPECT_NEAR(DivTest2->evaluate(),1.63415,0.00001);

}

TEST(DivTest, testingDoubleAndObject) {
	Base* testValue5 = new Op(29.4);
	double testValue6 = 30.6;

	Base* DivTest3 = new Div(testValue5, testValue6);
	EXPECT_NEAR(DivTest3->evaluate(),0.960784 ,0.00001);
}

TEST(DivTest, testingDivingmultObjects) {
	Base* testValue7 = new Op(2.2);
	Base* testValue8 = new Op(3.3);
	Base* testValue9 = new Op(4.4);
	
	Base* testValue10 = new Div(testValue7, testValue8);	
	Base* DivTest4 = new Div(testValue10, testValue9);

	EXPECT_NEAR(DivTest4->evaluate(), 0.151515,0.00001);
	

}

TEST(DivTest, testingTwoIntegerStringify) {
	double testValue11 = 91;
	double testValue12 = 82;

	Base* DivTest5 = new Div(testValue11, testValue12);

	EXPECT_EQ(DivTest5->stringify(), "(91 / 82)");
}

TEST(DivTest, testingTwoObjectsStringify) {
 	Base* testValue13 = new Op(7.23);
        Base* testValue14 = new Op(1.94);

        Base* DivTest6 = new Div(testValue13, testValue14);
        EXPECT_EQ(DivTest6->stringify(),"(7.23 / 1.94)");

}

TEST(DivTest, testUsingOnlyDivs) {
	Base* testValue15 = new Div(1000, 2);
	Base* testValue16 = new Div(testValue15, 2);

	Base* DivTest7 = new Div(testValue16, 2);

	EXPECT_EQ(DivTest7->stringify(), "(((1000 / 2) / 2) / 2)");

}

#endif
