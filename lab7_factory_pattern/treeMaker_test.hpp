#ifndef TREEMAKER_TEST_HPP
#define TREEMAKER_TEST_HPP

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


TEST(treeMakerTest,testinTwoIntegers) {
        char aa[] = "./test";
        char a[] = "12";
        char b[] = "+";
        char c[] = "24";
        char* argv[] = { aa,a,b,c };
        int argc = 4;
        treeMaker* treeFactory = new treeMaker();
        Base* expTree = treeFactory->Parse(argv, argc);

        EXPECT_EQ(expTree->evaluate(),36);

}

TEST(treeMakerTest,testinThreeIntegers) {
        char aa[] = "./test";
        char a[] = "12";
        char b[] = "+";
        char c[] = "24";
	char d[] = "*";
	char e[] = "5";
        char* argv[] = { aa,a,b,c,d,e };
        int argc = 6;
        treeMaker* treeFactory = new treeMaker();
        Base* expTree = treeFactory->Parse(argv, argc);

        EXPECT_EQ(expTree->evaluate(),180);

}
TEST(treeMakerTest,testinThreeIntegersstringify) {
        char aa[] = "./test";
        char a[] = "1";
        char b[] = "+";
        char c[] = "2";
        char d[] = "*";
        char e[] = "5";
        char* argv[] = { aa,a,b,c,d,e };
        int argc = 6;
        treeMaker* treeFactory = new treeMaker();
        Base* expTree = treeFactory->Parse(argv, argc);

        EXPECT_EQ(expTree->stringify(),"((1 + 2) * 5)");

}

TEST(treeMakerTest,testinThreeIntegersPow) {
        char aa[] = "./test";
        char a[] = "1";
        char b[] = "+";
        char c[] = "2";
        char d[] = "\*\*";
        char e[] = "3";
        char* argv[] = { aa,a,b,c,d,e };
        int argc = 6;
        treeMaker* treeFactory = new treeMaker();
        Base* expTree = treeFactory->Parse(argv, argc);

        EXPECT_EQ(expTree->evaluate(),27);

}



#endif
