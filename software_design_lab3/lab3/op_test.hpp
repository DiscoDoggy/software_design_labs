#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpStringifyDoubleValue) {
    Op* test2 = new Op(9.1);
    EXPECT_EQ(test2->stringify(), "9.1");
}

TEST(OpTest, OpEvaluateADouble) {
    Op* test3 = new Op(105.7);
    EXPECT_EQ(test3->evaluate(), 105.7);
}

TEST(OpTest, OpStringifyNoDecimal) {
    Op* test4 = new Op(8);
    EXPECT_EQ(test4->stringify(),"8" );
}

TEST(OpTest, OpEvaluateNegativeDouble ) {
    Op* test5 = new Op(-8.9762);
    EXPECT_EQ(test5->evaluate(), -8.9762);
}
TEST(OpTest, OpStringifyDoubleToInt) {
    Op* test6 = new Op(5.0);
    EXPECT_EQ(test6->stringify(),"5" );
}
TEST(OpTest, OpStringifyNegativeValue) {
    Op* test7 = new Op(-8.9762);
    EXPECT_EQ(test7->stringify(), "-8.9762"); 
}

#endif //__OP_TEST_HPP__
