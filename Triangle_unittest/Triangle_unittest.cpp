#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Triangleunittest
{
	TEST_CLASS(Triangleunittest)
	{
	public:

		TEST_METHOD(Triangle_output_checker)
		{
			// Test Equilateral Triangle
			char* result = analyzeTriangle(10, 10, 10);
			Assert::AreEqual("Equilateral triangle", result);

			// Test Isosceles Triangle
			result = analyzeTriangle(10, 10, 5);
			Assert::AreEqual("Isosceles triangle", result);

			// Test Scalene Triangle
			result = analyzeTriangle(10, 8, 6);
			Assert::AreEqual("Scalene triangle", result);

			// Test Not a Triangle
			result = analyzeTriangle(1, 2, 10);
			Assert::AreEqual("Not a triangle", result);

			// Test with Zero or Negative Sides
			result = analyzeTriangle(-1, 5, 6);
			Assert::AreEqual("Not a triangle", result);

			result = analyzeTriangle(0, 5, 6);
			Assert::AreEqual("Not a triangle", result);
		}
	};
}
