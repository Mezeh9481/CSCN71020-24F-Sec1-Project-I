#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "RectangleSolver.h"

<<<<<< Unit_test
void get_point(Point* p, int point_num) {
    bool i = true;
    while (i == true) {
        printf("Enter the x and y coordinates for Point %d (format: x y): ", point_num);
        if (scanf_s("%d %d", &p->x, &p->y) == 2) {
            i = false;
        }
        else {
            printf("Invalid input. Please enter integer values.\n");
            break;
        }
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Consume characters until a newline or EOF
>>>>>> master
    }
}

void get_point(Point* p, int point_num)
{
    bool i = true;
    while (i == true)
    {
       printf("Enter the x and y coordinates for Point %d (format: x y): ", point_num);
            if (scanf("%d %d", &p->x, &p->y) == 2)
            {
                i = false;
            }
            else
            {
                printf("Invalid input. Please enter integer values.\n");
                clear_input_buffer();
            }
    }
}

double distance(Point p1, Point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

bool is_rectangle(Point points[4])
{
    double dists[4] = {
        distance(points[0], points[1]),
        distance(points[1], points[2]),
        distance(points[2], points[3]),
        distance(points[3], points[0])
    };
    double diagonals[2] = {
        distance(points[0], points[2]),
        distance(points[1], points[3])
    };

    return dists[0] == dists[2] && dists[1] == dists[3] && diagonals[0] == diagonals[1];
}

double calculate_perimeter(Point points[4])
{
    double perimeter = 0.0;
    for (int i = 0; i < 4; i++)
    {
        perimeter += distance(points[i], points[(i + 1) % 4]);
    }
    return perimeter;
}

double calculate_area(Point points[4])
{
    double length = distance(points[0], points[1]);
    double width = distance(points[1], points[2]);
    return length * width;
}

