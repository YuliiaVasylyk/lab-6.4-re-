#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-6.4(re)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4 };
			int t;
			t = Max(a, 4, 1, a[0]);
			Assert::AreEqual(4, t);

		}
	};
}
