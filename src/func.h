#ifndef FUNC_H
#define FUNC_H

struct Circle {
    int x;
    int y;
    int r;
};

float Area(Circle one);

void GetCoord(Circle one);

int Intersection(Circle one, Circle two);

float Perimeter(Circle one);

#endif