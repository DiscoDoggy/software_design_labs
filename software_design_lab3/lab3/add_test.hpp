#ifndef ADD_TEST_HPP
#define ADD_TEST_HPP

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest,testingTwoIntegers) {

	double testValue1 = 5;
	double testValue2 = 27;

	Base* addTest1 = new Add(testValue1, testValue2);
	EXPECT_EQ(addTest1->evaluate(),32);

}

TEST(AddTest,testingTwoOpObjects) {

        Base* testValue3 = new Op(32.5);
        Base* testValue4 = new Op(20.79);

        Base* addTest2 = new Add(testValue3, testValue4);
        EXPECT_DOUBLE_EQ(addTest2->evaluate(),53.29);

}

TEST(AddTest, testingDoubleAndObject) {
	Base* testValue5 = new Op(29.4);
	double testValue6 = 30.6;

	Base* addTest3 = new Add(testValue5, testValue6);

	EXPECT_DOUBLE_EQ(addTest3->evaluate(),60 );
}

TEST(AddTest, testingAddingAddObjects) {
	Base* testValue7 = new Op(7.4);
	Base* testValue8 = new Op(10.39);
	Base* testValue9 = new Op(53.2);
	
	Base* testValue10 = new Add(testValue7, testValue8);
	
	Base* addTest4 = new Add(testValue10, testValue9);

	EXPECT_DOUBLE_EQ(addTest4->evaluate(), 70.99);
	

}

TEST(AddTest, testingTwoIntegerStringify) {
	double testValue11 = 90;
	double testValue12 = 82;

	Base* addTest5 = new Add(testValue11, testValue12);

	EXPECT_EQ(addTest5->stringify(), "(90 + 82)");
}

TEST(AddTest, testingTwoObjectsStringify) {
 	Base* testValue13 = new Op(75.23);
        Base* testValue14 = new Op(18.94);

        Base* addTest6 = new Add(testValue13, testValue14);
        EXPECT_EQ(addTest6->stringify(),"(75.23 + 18.94)");

}

TEST(AddTest, testingAddingAddObjectsStringify) {
 	Base* testValue15 = new Op(15.7);
        Base* testValue16 = new Op(27.9);
        Base* testValue17 = new Op(10.576);

        Base* testValue18 = new Add(testValue15, testValue16);

        Base* addTest7 = new Add(testValue18, testValue17);

        EXPECT_EQ(addTest7->stringify(), "((15.7 + 27.9) + 10.576)");

}

TEST(AddTest, testingConstructor4DoubleThenObject){
	Base* testValue19 = new Op(15.7);
        Base* testValue20 = new Op(27.9);
        Base* testValue21 = new Op(10.576);

        Base* testValue22 = new Add(testValue19, testValue20);

        Base* addTest8 = new Add(testValue21, testValue22);

        EXPECT_EQ(addTest8->stringify(), "(10.576 + (15.7 + 27.9))");

}

TEST(AddTest, testingUsingOnlyAdds) {
	Base* testValue23 = new Add(24.5, 52.257);
	Base* testValue24 = new Add(11.6, 15.824);
	
	Base* testValue25 = new Add(testValue23, testValue24);

	EXPECT_DOUBLE_EQ(testValue25->evaluate(), 104.181);
	EXPECT_EQ(testValue25->stringify(), "((24.5 + 52.257) + (11.6 + 15.824))");	

}





#endif
