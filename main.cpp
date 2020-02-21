#include <iostream>
#include <string.h>
using namespace std;

class Circle {
private:
    int x, y;
    float r;
    string data;

public:
    void SetCoord(int circle_x, int circle_y, float circle_r)
    {
        x = circle_x;
        y = circle_y;
        r = circle_r;
    }

    void GetCoord()
    {
        cout << "circle(" << x << " " << y << ", " << r << ")" << endl;
    }

    float Perimeter()
    {
        float perimeter = 2 * 3.14 * r;
        return perimeter;
    }

    float Area()
    {
        float area = 3.14 * r * r;
        return area;
    }
};

int main()
{
    Circle one;

    one.SetCoord(0, 0, 1.5);
    one.GetCoord();

    cout << "Area: " << one.Area() << " Perimeter: " << one.Perimeter() << endl;

    return 0;
}
