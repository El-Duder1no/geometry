#include "circle.h"
#include "geomCalc.h"
#include "parse.h"
#include "structFill.h"

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    Circle one;
    string text;

    cout << "Input format: circle(x y, r)" << endl;
    cout << "Enter the figure coordinates:" << endl << endl;

    getline(std::cin, text);

    if (!structFill(one, text)) {
        cout << "The input is invalid!" << endl;

		cout << endl << "Press any key to exit" << endl;
        cin.get();
        return 0;
    } else {
        cout << endl << "1." << text << endl;
        cout << "  Area: " << Area(one) << "\n  Perimeter: " << Perimeter(one)
             << endl;
    }

    cout << endl << "Press any key to exit" << endl;
    cin.get();
    return 0;
}
