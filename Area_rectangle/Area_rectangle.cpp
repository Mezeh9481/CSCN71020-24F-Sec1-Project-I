#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../PolygonChecker/RectangleSolver.h" 
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Arearectangle
{
	TEST_CLASS(Arearectangle)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Point rectangle[4] = {
                {0.0, 0.0},
                {4.0, 0.0},
                {4.0, 3.0},
                {0.0, 3.0}
            };

         
            double expectedArea = 4.0 * 3.0; // Area = length * breadtgh

            
            double calculatedArea = calculate_area(rectangle);

        
            Assert::AreEqual(expectedArea, calculatedArea, L"Area calculation failed!"); // checking for expected and actual
        }

        TEST_METHOD(CalculatingSquareArea)
        {
           
            Point square[4] = { // second result for square shapes
                {0.0, 0.0},
                {5.0, 0.0},
                {5.0, 5.0},
                {0.0, 5.0}
            };

           
            double expectedArea = 5.0 * 5.0; // Area = side * side
            double calculatedArea = calculate_area(square);
            Assert::AreEqual(expectedArea, calculatedArea, L"Square area calculation failed!");
		}
	};
}
