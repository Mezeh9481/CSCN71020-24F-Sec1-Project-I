#include <stdio.h>
#include <math.h>

#include "checkTriangle.h"

 void checkTriangle() {
	double sideA, sideB, sideC;

	printf("Enter three side lengths:\n");
	scanf_s("%1f %1f %1f", &sideA, &sideB, &sideC);

	if ((sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA))
	{

	}
	else {
		printf("Not a triangle\n");
	}
}