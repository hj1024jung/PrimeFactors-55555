#include "pch.h"
#include "../Project2/prime_factor.cpp"

TEST(TestSuiteBase, AlwaysPass)
{
	EXPECT_EQ(1, 1);
}

TEST(TC_Prime, Of1)
{
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
