#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"
#define PI 3.14
using std::string;

class Circle: public Figure{
private:
    double radius;
    
public:
    Circle();
    Circle(double);
    double getSquare();
    double getPerimeter();
    string toString();
};


#endif