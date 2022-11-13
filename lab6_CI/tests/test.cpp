#include "gtest/gtest.h"

#include "../header/rectangle.hpp"


TEST(rectangleAreaTests, normalCase) {
	Rectangle test1Rect(10, 5);
	
	int test1Area = test1Rect.area();
	
	EXPECT_EQ(test1Area, 50);
}

TEST(rectangleAreaTests, zeroEdgeCase) {
	Rectangle test2Rect(7, 0);

	int test2Area =  test2Rect.area();
	
	EXPECT_EQ(test2Area, 0);
}

TEST(rectangleAreaTests, invalidTestCase) {
	Rectangle test3Rect(-90, 16);

	int test3Area = test3Rect.area();
	
	EXPECT_EQ(test3Area, -1);

}

TEST(rectanglePerimeterTests, normalCase) {
	Rectangle test4Rect(10,15);

	int test1Perimeter = test4Rect.perimeter();

	EXPECT_EQ(test1Perimeter, 50);

}

TEST(rectanglePerimeterTests, zeroEdgeCase) {
	Rectangle test5Rect(0,20);

	int test2Perimeter = test5Rect.perimeter();

	EXPECT_EQ(test2Perimeter, 40);

}
TEST(rectanglePerimeterTests, invalidTestCase) {
	Rectangle test6Rect(-20,-90);

	int test3Perimeter = test6Rect.perimeter(); 
	
	EXPECT_EQ(test3Perimeter, -1);
	
}

TEST(rectangleConstructorTests, is_Correct_Width_Height) {
	Rectangle test7Rect(30,20);

	int test1Constructor = test7Rect.getWidth();
	int test2Constructor = test7Rect.getHeight();
	
	EXPECT_EQ(test1Constructor, 30);
	EXPECT_EQ(test2Constructor, 20);	
}

TEST(rectangleConstructorTests, width_And_Height_Set_Correctly) {
	Rectangle test8Rect(2,5);

	test8Rect.set_width(10);
	test8Rect.set_height(20);

	EXPECT_EQ(test8Rect.getWidth(), 10);
	EXPECT_EQ(test8Rect.getHeight(), 20);

}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
