#ifndef GETCOORD_H
#define GETCOORD_H

template <typename T>
void GetCoord(Circle<T> one)
{
    std::cout << "circle(" << one.x << " " << one.y << ", " << one.r << ")"
              << std::endl;
}

#endif