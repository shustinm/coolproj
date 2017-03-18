#include <stdio.h>
#include "a.h"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST (testFoo, testNegatives)
{
	ASSERT_EQ(foo(-3), 9);
}

int main(int argc, char **argv) 
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}