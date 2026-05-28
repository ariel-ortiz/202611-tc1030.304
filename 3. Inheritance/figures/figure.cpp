#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "figure.h"

std::string Figure::to_string() const
{
    std::ostringstream s;
    s << std::fixed << std::setprecision(2);
    s << "My area is "
        << area()
        << ", my permimeter is "
        << perimeter();
    return s.str();
}

std::ostream& operator << (
    std::ostream& os,
    const Figure& figure)
{
   return os << figure.to_string();
}

