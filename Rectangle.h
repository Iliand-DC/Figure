#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"
using std::string;

class Rectangle: public Figure
{
public:
    Rectangle();
    Rectangle(double, double);
    double getSquare();
    double getPerimeter();
    string toString();
private:
    double width;
    double height;
};

#endif