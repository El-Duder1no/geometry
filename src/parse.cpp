#include "parse.h"

void enter(
        std::string text,
        std::string& figure,
        std::string& x,
        std::string& y,
        std::string& r)
{
    std::string obj, bracket;

    int lBracket, rBracket, data;
    lBracket = text.find("(");
    rBracket = text.find(")");

    int firstDelim, secondDelim;
    int xData, yData, rData;
    firstDelim = text.find(" ");
    secondDelim = text.find(", ", firstDelim);

    xData = firstDelim - lBracket - 1;
    yData = secondDelim - firstDelim - 1;
    rData = rBracket - secondDelim - 2;

    figure = text.substr(0, lBracket);

    x = text.substr(lBracket + 1, xData);
    y = text.substr(firstDelim + 1, yData);
    r = text.substr(secondDelim + 2, rData);
}