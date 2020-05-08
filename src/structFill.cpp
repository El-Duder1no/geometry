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
        xF = stof(x);
        a.x = xF;
    } else {
        return false;
    }

    temp = y.c_str();
    if (isdigit(temp[0])) {
        yF = stof(y);
        a.y = yF;
    } else {
        return false;
    }

    temp = r.c_str();
    if (isdigit(temp[0])) {
        rF = stof(r);
        if (rF < 0)
            return false;
        a.r = rF;
    } else {
        return false;
    }

    return true;
}