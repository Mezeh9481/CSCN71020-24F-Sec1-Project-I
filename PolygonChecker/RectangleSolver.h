#pragma once

#include <math.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
} Point;

void get_point(Point* p, int point_num);
double distance(Point p1, Point p2);
bool is_rectangle(Point points[4]);
double calculate_perimeter(Point points[4]);
double calculate_area(Point points[4]);
void clear_input_buffer();
