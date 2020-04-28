#include <iostream>
#include <math.h>

#include "func.h"

using namespace std;

int main()
{
    Circle one, two;
    cout << "Enter coordinates of first circle:  ";
    cin >> one.x >> one.y >> one.r;
    cout << "Enter coordinates of second circle: ";
    cin >> two.x >> two.y >> two.r;

    cout << endl << "1. ";
    GetCoord(one);
    cout << "  Area: " << Area(one) << "\n  Perimeter: " << Perimeter(one)
         << endl;

    cout << endl << "2. ";
    GetCoord(two);
    cout << "  Area: " << Area(two) << "\n  Perimeter: " << Perimeter(two)
         << endl;

    return 0;
}
