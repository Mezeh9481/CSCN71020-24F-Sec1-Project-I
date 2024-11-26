#include <stdio.h>
#include <math.h>
#define	M_PI		3.141592653589793238462643

#include "checkTriangle.h"

 void checkTriangle() {
	double sideA, sideB, sideC;

	printf("Enter three side lengths: \n");
	scanf_s("%lf %lf %lf", &sideA, &sideB, &sideC);

	if ((sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA))
	{
		double angleA = acos((pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * sideB * sideC)) * (180 / M_PI);
		double angleB = acos((pow(sideA, 2) + pow(sideC, 2) - pow(sideB, 2)) / (2 * sideA * sideC)) * (180 / M_PI);
		double angleC = 180 - (angleA + angleB);
		printf(" The angles are %lf degrees, %lf degrees %lf degrees", angleA, angleB, angleC);
	

	}
	else {
		printf("Not a triangle\n");
	}

}
