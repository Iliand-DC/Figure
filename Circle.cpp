#include "Circle.h"

Circle::Circle():radius(0){}
Circle::Circle(double _radius):radius(_radius){}
double Circle::getSquare()
{
    return PI*radius*radius;
}
double Circle::getPerimeter()
{
    return 2*PI*radius;
}
string Circle::toString()
{
    return "Circle";
}