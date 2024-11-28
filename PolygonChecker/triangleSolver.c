#include <stdio.h>
#include <stdbool.h>
#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
    // Validate that all sides are positive
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        return "Not a triangle";
    }

    // Check the triangle inequality theorem
    if ((side1 + side2 <= side3) || (side2 + side3 <= side1) || (side1 + side3 <= side2)) {
        return "Not a triangle";
    }

    // Check for Equilateral triangle
    if (side1 == side2 && side2 == side3) {
        return "Equilateral triangle";
    }

    // Check for Isosceles triangle
    if ((side1 == side2 && side1 != side3) ||
        (side2 == side3 && side2 != side1) ||
        (side1 == side3 && side1 != side2)) {
        return "Isosceles triangle";
    }

    // Otherwise, it's a Scalene triangle
    return "Scalene triangle";
}
