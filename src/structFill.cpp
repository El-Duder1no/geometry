#include "structFill.h"

bool structFill(Circle& a, std::string text)
{
    std::string x, y, r, figure;
    float xF, yF, rF;
    const char* temp;

    enter(text, figure, x, y, r);

    if (figure != "circle") {
        return false;
    }

    temp = x.c_str();
    if (isdigit(temp[0])) {
        xF = std::stof(x);
        a.x = xF;
    } else {
        std::cout << "X" << std::endl;
        return false;
    }

    temp = y.c_str();
    if (isdigit(temp[0])) {
        yF = std::stof(y);
        a.y = yF;
    } else {
        std::cout << "Y" << std::endl;
        return false;
    }

    temp = r.c_str();
    if (isdigit(temp[0])) {
        rF = std::stof(r);
        a.r = rF;
    } else {
        std::cout << "R" << std::endl;
        return false;
    }

    return true;
}