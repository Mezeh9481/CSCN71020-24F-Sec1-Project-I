#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "RectangleSolver.h"

void get_point(Point* p, int point_num)
{
	bool i = true;
	while (i == true) {
		printf("Enter the x and y coordinates for Point %d (format: x y): ", point_num);
		if (scanf_s("%d %d", &p->x, &p->y) == 2) {
			i = false;
		}
		else {
			printf("Invalid input. Please enter integer values.\n");
		}
	}
}
