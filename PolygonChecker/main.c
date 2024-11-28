#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "main.h"
#include "triangleSolver.h"
#include "checkTriangle.h"
#include "RectangleSolver.h"
int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();
	
		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);

			checkTriangle();
			break;

		case 2:
			printf_s("Rectangle selected.\n");
			printf_s("Enter the points in this format (Bottom Left, Top Left, Top Right, Bottom Right).\n");
			Point points[4];
			// Collect the four points from the user
			for (int i = 0; i < 4; i++) {
				get_point(&points[i], i + 1);
			}

			if (is_rectangle(points)) {
				double area = calculate_area(points);
				double perimeter = calculate_perimeter(points);
				printf("The points form a rectangle with perimeter: %.2f and area: %.2f\n", perimeter, area);
			}
			else {
				printf("The points do not form a rectangle.");
			}

		case 0:
			continueProgram = false;
			break;

		default:
			printf_s("Invalid value entered.\n");
			clear_input_buffer();
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}
