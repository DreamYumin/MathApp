#include "pch.h"
#include "../MathApp/doubleNum.cpp"
TEST(DoubleNumTest, positiveValues) {
	ASSERT_EQ(12, doubleNum(6));
}