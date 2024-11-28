#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../PolygonChecker/RectangleSolver.h" 
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Rectanglesperimeter
{
	TEST_CLASS(Rectanglesperimeter)
	{
	public:
		TEST_METHOD(Calculating_for_perimeter)
		{
			
			Point rectangle[4] = { // setting points for input 
				{0.0, 0.0},
				{2.0, 0.0},
				{2.0, 3.0},
				{0.0, 3.0}
			};
		
			
			double expectedPerimeter = 2 * (2.0 + 3.0); // = 10 ; expected value for this input would be 10

			
			double calculatedPerimeter = calculate_perimeter(rectangle); // This will calculate perimeter of the rectangle
			
			Assert::AreEqual(expectedPerimeter, calculatedPerimeter, L"Perimeter calculation failed!"); // checking expected as well as actual perimeter
		}
	};
}
