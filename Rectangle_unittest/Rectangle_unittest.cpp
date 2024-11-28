#include "pch.h"
#include "CppUnitTest.h"


extern "C" {
#include "../PolygonChecker/RectangleSolver.h" 
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Rectangleunittest
{
    TEST_CLASS(check_for_rectangle_output)
    {
    public:

        TEST_METHOD(checking_points_of_rectangle) // this test is based on getting the correct results for coordinates
        {
            Point p;
            int point_num = 1; // 1 as first input
            get_point(&p, point_num);
            Assert::AreEqual(10, p.x, L"X-coordinate did not match expected value.");
            Assert::AreEqual(20, p.y, L"Y-coordinate did not match expected value.");
        }
    };
}

