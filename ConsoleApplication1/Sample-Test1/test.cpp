#include "pch.h"
#include <string>
#include "../ConsoleApplication1/Message.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(testMessage, test1) {
	Message testClass;

	std::string answer = "Hello World!";
	std::string output = testClass.print();

	EXPECT_TRUE(answer.compare(output));


}