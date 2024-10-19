#include "pch.h"
#include "CppUnitTest.h"

extern "C" { int getPerimeter(int* length, int* width);
void setLength(int input, int* length);
void setWidth(int input, int* width);
int getArea(int* length, int* width);
void printWelcomeMenu();
void printOptions();
int getIntInput(char message[]);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment2Test
{
	TEST_CLASS(Assignment2Test)
	{
	public:
		
		TEST_METHOD(Testing_getPerimeter_with_Natural_Numbers)
		{
			int l = 5;
			int w = 2;
			int result = getPerimeter(&l, &w);
			Assert::AreEqual(14, result);
		}
		TEST_METHOD(Testing_getArea_with_Natural_Numbers)
		{
			int l = 5;
			int w = 2;
			int result = getArea(&l, &w);
			Assert::AreEqual(10, result);
		}
		TEST_METHOD(Testing_setLength_with_any_NaturalNumbers_BetweenTheRange)
		{
			int l;
			
			setLength(5, &l);
			Assert::AreEqual(5, l);
		}
		TEST_METHOD(Testing_setLength_with_Minimum_limit)
		{
			int l;
			setLength(0, &l);
			Assert::AreEqual(0, l);
		}
		TEST_METHOD(Testing_setLength_with_Maximum_Limit)
		{
			int l;
			setLength(99,&l);
			Assert::AreEqual(100, l);
		}
		TEST_METHOD(Testing_setWidth_with_any_NaturalNumbers_BetweenTheRange)
		{
			int w;

			setWidth(5, &w);
			Assert::AreEqual(5, w);
		}
		TEST_METHOD(Testing_setWidth_with_Minimum_limit)
		{
			int w;
			setWidth(1, &w);
			Assert::AreEqual(1, w);
		}
		TEST_METHOD(Testing_setWidth_with_Maximum_Limit)
		{
			int w;
			setWidth(100, &w);
			Assert::AreEqual(100, w);
		}
	};
}
