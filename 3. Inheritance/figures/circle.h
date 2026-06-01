#pragma once

#include "figure.h"

class Circle : public Figure {
public:
    Circle(double radius) : _radius(radius) {}
    double area() const override;
    double perimeter() const override;
    std::string to_string() const override;
private:
    double _radius;
};
