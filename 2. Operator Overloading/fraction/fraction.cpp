#include <numeric>
#include <stdexcept>
#include "fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero!");
    }

    int sign = 1;
    if (numerator * denominator < 0) {
        sign = -1;
    }

    numerator = std::abs(numerator);
    denominator = std::abs(denominator);

    int factor = std::gcd(numerator, denominator);

    _numerator = (numerator / factor) * sign;
    _denominator = denominator / factor;
}

std::string Fraction::to_string() const
{
    if (_denominator == 1) {
        return std::to_string(_numerator);
    }
    return std::to_string(_numerator)
        + "/"
        + std::to_string(_denominator);
}

std::ostream& operator<<(std::ostream& os, const Fraction& r)
{
    return os << r.to_string();
}
