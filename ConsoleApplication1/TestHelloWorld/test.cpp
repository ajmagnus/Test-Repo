#include "pch.h"
#include <string>
#include "../ConsoleApplication1/Message.h"

TEST(MessageTest, ReturnMessage) {
	ASSERT_TRUE(0 == 0);
}

TEST(TestMessage, Return) {
	Message source;
	std::string answer = "Hello World!";
	std::string output = source.print();

	ASSERT_TRUE(answer.compare(output));
}