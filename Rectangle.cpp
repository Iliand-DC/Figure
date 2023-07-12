#include "Rectangle.h"

Rectangle::Rectangle() : width(0), height(0){};
Rectangle::Rectangle(double _wight, double _height) : width(_wight), height(_height){};
double Rectangle::getSquare()
{
    return width * height;
}
double Rectangle::getPerimeter()
{
    return width * 2 + height * 2;
}
string Rectangle::toString()
{
    return "Rectangle";
}