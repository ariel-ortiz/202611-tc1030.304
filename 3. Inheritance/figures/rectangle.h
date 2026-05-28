#pragma once

#include "figure.h"

class Rectangle: public Figure {
public:
    Rectangle(double width, double height):
        _width(width), _height(height) {}
    double area() const override;
    double perimeter() const override;
private:
    double _width;
    double _height;
};
