#include <gtest/gtest.h>
#include <iostream>

using namespace std;

namespace {
	TEST(TestTest, TestsTesting) {
		cout << "test" << endl;
		ASSERT_EQ(1 + 1, 2);
	}
	
	int main(int argc, char **argv) {
		cout << "main" << endl;
		::testing::InitGoogleTest(&argc, argv);
		return RUN_ALL_TESTS();
	}
}