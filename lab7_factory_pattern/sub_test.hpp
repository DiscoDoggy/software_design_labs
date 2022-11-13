#ifndef SUB_TEST_HPP
#define SUB_TEST_HPP

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

TEST(SubTest,testingTwoIntegers) {

	double testValue1 = 5;
	double testValue2 = 27;

	Base* SubTest1 = new Sub(testValue1, testValue2);
	EXPECT_EQ(SubTest1->evaluate(),-22);

}

TEST(SubTest,testingTwoOpObjects) {

        Base* testValue3 = new Op(32.51);
        Base* testValue4 = new Op(20.79);

        Base* SubTest2 = new Sub(testValue3, testValue4);
        EXPECT_DOUBLE_EQ(SubTest2->evaluate(),11.72);

}

TEST(SubTest, testingDoubleAndObject) {
	Base* testValue5 = new Op(29.4);
	double testValue6 = 30.6;

	Base* SubTest3 = new Sub(testValue5, testValue6);

	EXPECT_NEAR(SubTest3->evaluate(),-1.2,0.00001 );
}

TEST(SubTest, testingSubingMultObjects) {
	Base* testValue7 = new Op(2.2);
	Base* testValue8 = new Op(3.3);
	Base* testValue9 = new Op(4.4);
	
	Base* testValue10 = new Sub(testValue7, testValue8);
	
	Base* SubTest4 = new Sub(testValue10, testValue9);

	EXPECT_DOUBLE_EQ(SubTest4->evaluate(), -5.5);
	

}

TEST(SubTest, testingTwoIntegerStringify) {
	double testValue11 = 91;
	double testValue12 = 82;

	Base* SubTest5 = new Sub(testValue11, testValue12);

	EXPECT_EQ(SubTest5->stringify(), "(91 - 82)");
}

TEST(SubTest, testingTwoObjectsStringify) {
 	Base* testValue13 = new Op(7.23);
        Base* testValue14 = new Op(1.94);

        Base* SubTest6 = new Sub(testValue13, testValue14);
        EXPECT_EQ(SubTest6->stringify(),"(7.23 - 1.94)");

}

TEST(SubTest, testingUsingOnlyAdds) {
	Base* testValue15 = new Sub(100.78, 50.78);
	Base* testValue16 = new Sub(testValue15, 25.39);
	
	Base* SubTest7 = new Sub(testValue16, 11.982);

	EXPECT_DOUBLE_EQ(SubTest7->evaluate(), 12.628);
	EXPECT_EQ(SubTest7->stringify(), "(((100.78 - 50.78) - 25.39) - 11.982)");	

}




#endif
