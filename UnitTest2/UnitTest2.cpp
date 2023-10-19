#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(0, 2.0, 1.0);
			Assert::AreEqual(t,0.6);
		}
	};
}