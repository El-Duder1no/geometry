#include "intersection.h"

bool Intersection(Circle one, Circle two)
{
    double d = std::sqrt(pow(two.x - one.x, 2) + pow(two.y - one.y, 2));
    double buff = one.r + two.r;

    if (d == 0 && one.r == two.r) {
        return true;
    }
    if (buff >= d && (one.r + d) >= two.r && (two.r + d) >= one.r) {
        return true;
    } else {
        return false;
    }
}
