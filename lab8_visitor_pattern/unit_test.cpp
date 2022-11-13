#include "gtest/gtest.h"

#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "sub.hpp"
#include "visitor.hpp"
#include "printLatexVisitor.hpp"
#include "iterator.hpp"


TEST(LatekTest, simpleAdd) {
	LatexVisitor* v = new LatexVisitor();
	Base* myAdd1 = new Add (1, 15);

	string simpleCase1  = "";

	simpleCase1 = v->PrintLaTex(myAdd1);

	EXPECT_EQ(simpleCase1, "${({1}+{15})}$");


}

TEST(LatekTest, simpleSub) {
	LatexVisitor* v1 = new LatexVisitor();
        Base* mySub2 = new Sub (99, 6.6);

        string simpleCase2  = "";

        simpleCase2 = v1->PrintLaTex(mySub2);

        EXPECT_EQ(simpleCase2, "${({99}-{6.6})}$");


}

TEST(LatekTest, simpleMult) {
	LatexVisitor* v2 = new LatexVisitor();
	Base* myMult3 = new Mult(24, 16.2);

	string simpleCase3 = v2->PrintLaTex(myMult3);

	EXPECT_EQ(simpleCase3, "${({24}\\cdot{16.2})}$");

}

TEST(LatekTest, simpleDiv) {
	LatexVisitor* v3 = new LatexVisitor();
	Base* myDiv4 = new Div (16, 8);

	string simpleCase4 = v3 -> PrintLaTex(myDiv4);

	EXPECT_EQ(simpleCase4, "${\\frac{16}{8}}$");
}

TEST(LatekTest, simplePow) {
	LatexVisitor* v4 = new LatexVisitor();
	Base* myPow5 = new Pow(2,4);

	string simpleCase5 = v4->PrintLaTex(myPow5);

	EXPECT_EQ(simpleCase5, "${({2}^{4})}$");

}


TEST(LatekTest, complexTest1) {
	LatexVisitor* v5 = new LatexVisitor();
	
	Base* multCT1 = new Mult(2,5);
	Base* powCT1 = new Pow(5 , 2);

	Base* divCT1 = new Div(multCT1, powCT1);
	
	string complexTest1 = v5->PrintLaTex(divCT1);

	EXPECT_EQ(complexTest1, "${\\frac{({2}\\cdot{5})}{({5}^{2})}}$");

}






























int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
