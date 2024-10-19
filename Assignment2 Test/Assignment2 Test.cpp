#include "pch.h"
#include "CppUnitTest.h"


extern "C" int getPerimeter(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment2Test
{
	TEST_CLASS(Assignment2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int l = 5; 
			int w = 2;
			int result = getPerimeter(&l, &w);
			Assert::AreEqual(12, result);
		}
		
	};
}
