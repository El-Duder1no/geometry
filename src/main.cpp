#include <iostream>
#include <math.h>

#include "circle.h"
#include "getCoord.h"
#include "perimeter.h"
#include "area.h"
#include "intersection.h"
using namespace std;

int main()
{
    Circle one, two;
    int x, y, r, x1, y1, r1;
    cout << "Enter coordinates of first circle:  ";
    cin >> one.x >> one.y >> one.r;
    cout << "Enter coordinates of second circle: ";
    cin >> two.x >> two.y >> two.r;

    cout << endl << "1. ";
    GetCoord(one);
    cout << "  Area: " << Area(one) << "\n  Perimeter: " << Perimeter(one) << endl;
    if (Intersection(one, two))
        cout << "  intersects:\n\t2. circle" << endl;

    cout << endl << "2. ";
    GetCoord(two);
    cout << "  Area: " << Area(two) << "\n  Perimeter: " << Perimeter(two) << endl;
    if (Intersection(one, two))
        cout << "  intersects:\n\t1. circle" << endl;

	system("PAUSE");
    return 0;
}
