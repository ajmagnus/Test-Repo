#include "pch.h"
#include "../ConsoleApplication1/Message.h"
#include <iostream>

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(HelloWorldTest, test1) {
	std::string output;
	std::string answer;
	Message source = Message::Message();

	output = source.print();
	answer = "Hello World!";
	EXPECT_EQ(output, answer);
}

