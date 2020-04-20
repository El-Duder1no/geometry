#ifndef AREA_H
#define AREA_H

template <typename T>
float Area(Circle<T> one)
{
    float area = 3.14 * one.r * one.r;
    return area;
}

#endif