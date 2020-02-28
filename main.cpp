#include <iostream>
#include <math.h>
using namespace std;

void GetCoord(int x, int y, int r)
{
    cout << "circle(" << x << " " << y << ", " << r << ")" << endl;
}

float Perimeter(int r)
{
    float perimeter = 2 * 3.14 * r;
    return perimeter;
}

float Area(int r)
{
    float area = 3.14 * r * r;
    return area;
}

int Intersection(int x, int y, int r, int x1, int y1, int r1)
{
    double d = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
    if (d == 0 && r == r1)
        return 1;
    if (r + r1 >= d && r + d >= r1 && r1 + d >= r)
        return 1;
    else
        return 0;
}

int main()
{
    int x, y, r, x1, y1, r1;
    cout << "Enter coordinates of first circle: ";
    cin >> x >> y >> r;
    cout << "Enter coordinates of second circle: ";
    cin >> x1 >> y1 >> r1;

    cout << "1. ";
    GetCoord(x, y, r);
    cout << "\nArea: " << Area(r) << "\nPerimeter: " << Perimeter(r) << endl;
    if (Intersection(x, y, r, x1, y1, r1))
        cout << "intersects:\n\t2. circle" << endl;

    cout << "2. ";
    GetCoord(x1, y1, r1);
    cout << "\nArea: " << Area(r1) << "\nPerimeter: " << Perimeter(r1) << endl;
    if (Intersection(x, y, r, x1, y1, r1))
        cout << "intersects:\n\t1. circle" << endl;

    return 0;
}
