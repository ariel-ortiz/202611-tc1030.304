#include "rectangle.h"

double Rectangle::area() const
{
    return _width * _height;
}

double Rectangle::perimeter() const
{
    return 2 * (_width + _height);
}
