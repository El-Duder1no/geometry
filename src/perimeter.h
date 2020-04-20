#ifndef PERIMETER_H
#define PERIMETER_H

template <typename T>
float Perimeter(Circle<T> one)
{
    float perimeter = 2 * 3.14 * one.r;
    return perimeter;
}

#endif 
