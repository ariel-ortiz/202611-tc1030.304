#pragma once

#include <iostream>
#include <string>

class Figure {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual std::string to_string() const;
};

std::ostream& operator << (
    std::ostream& os,
    const Figure& figure);
