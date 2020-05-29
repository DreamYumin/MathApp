#include "pch.h"
#include "../MathApp/doubleNum.cpp"
TEST(DoubleNumTest, positiveValues) {
	ASSERT_EQ(12, doubleNum(6));
	ASSERT_EQ(4, doubleNum(2));
	ASSERT_EQ(40, doubleNum(20));
}

TEST(DoubleNumTest, negativeValues) {
	ASSERT_EQ(-12, doubleNum(-6));
	ASSERT_EQ(-4, doubleNum(-2));
	ASSERT_EQ(-40, doubleNum(-20));
}