#include "circle.h"
#include "area.h"

float Area(Circle one)
{
    float area = 3.14 * one.r * one.r;
    return area;
}