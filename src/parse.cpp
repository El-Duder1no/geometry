#include "func.h"
#include <iostream>
#include <string>

void enter(std::string text)
{
    // circle(0 0, 1.5)
    std::cout << "¬ведите фигуру:" << std::endl;
    std::cin >> text;

    std::string temp = text;
    std::string obj;

    int n = 0;
    n = temp.find("(");

    obj = temp.substr(0, n);
    std::cout << obj << std::endl;
}