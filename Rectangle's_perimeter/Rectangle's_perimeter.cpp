#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../PolygonChecker/RectangleSolver.h" // Ensure this path is correct for your project structure
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Rectanglesperimeter
{
	TEST_CLASS(Rectanglesperimeter)
	{
	public:
		TEST_METHOD(Calculating_for_perimeter)
		{
			// Define points for a rectangle
			Point rectangle[4] = {
				{0.0, 0.0},
				{2.0, 0.0},
				{2.0, 3.0},
				{0.0, 3.0}
			};
		
			// Expected perimeter of the rectangle
			double expectedPerimeter = 2 * (2.0 + 3.0); // = 10

			// Call the calculate_perimeter function
			double calculatedPerimeter = calculate_perimeter(rectangle);

			// Assert the result
			Assert::AreEqual(expectedPerimeter, calculatedPerimeter, L"Perimeter calculation failed!");
		}
	};
}
