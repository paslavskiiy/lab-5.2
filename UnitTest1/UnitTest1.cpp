#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.2/lab 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double l = A(1, 9, 2);
			Assert::AreNotEqual(l, 0.24);
		}
	};
}
