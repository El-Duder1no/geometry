#ifndef INTERSECTION_H
#define INTERSECTION_H

template <typename T>
int Intersection(Circle<T> one, Circle<T> two)
{
    double d = sqrt(pow(two.x - one.x, 2) + pow(two.y - one.y, 2));
    double buff = static_cast<double>(one.r) + static_cast<double>(two.r);
    if (d == 0 && one.r == two.r)
        return 1;
    if (buff >= d && (one.r + d) >= two.r && (two.r + d) >= one.r)
        return 1;
    else
        return 0;
}

#endif