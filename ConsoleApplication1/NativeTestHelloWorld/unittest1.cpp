#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/Message.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeTestHelloWorld
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Message mess;
			std::string line = "Hello World!";

			Assert::AreEqual(line, mess.print());
		}

	};
}