#include "pch.h"
#include "CppUnitTest.h"
#include "../lab61it/lab61it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr1[] = { -2, -4, -6, 1, 2, 3 };
			Assert::AreEqual(sum(arr1, 6), -12);
		}
	};
}
