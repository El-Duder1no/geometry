#include "circle.h"
#include "geomCalc.h"
#include "intersection.h"
#include "parse.h"
#include "structFill.h"

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    Circle one, two;
    string text, text1;

    cout << "Input format: circle(x y, r)\n";

    cout << "\nEnter the coordinates of the first circle:  ";
    getline(std::cin, text);
    cout << "Enter the coordinates of the second circle: ";
    getline(std::cin, text1);

    bool first = structFill(one, text);
    bool second = structFill(two, text1);
    bool intersec = Intersection(one, two);

    if (first == false or second == false) {
        cout << "\nThe input data is invalid!";

        cout << "\nPress any key to exit\n";
        cin.get();
        return 0;
    }

    cout << "\n1." << text;
    cout << "\n  Area: " << Area(one) << "\n  Perimeter: " << Perimeter(one);
    if (intersec == true) {
        cout << "\nIntersects:\n  2. circle\n";
    } else {
        cout << "\nThe figure doesn't intersect anything\n";
    }

    cout << "\n2." << text1;
    cout << "\n  Area: " << Area(two) << "\n  Perimeter: " << Perimeter(two);
    if (intersec == true) {
        cout << "\nIntersects:\n  1. circle\n";
    } else {
        cout << "\nThe figure doesn't intersect anything\n";
    }

    cout << endl << "Press any key to exit\n";
    cin.get();
    return 0;
}
