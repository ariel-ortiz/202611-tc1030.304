#pragma once

#include <iostream>

class Fraction {

public:

    Fraction(int numerator=0, int denominator=1);
    std::string to_string() const;
private:

    int _numerator = 0;
    int _denominator = 1;
};

std::ostream& operator<<(std::ostream& os, const Fraction& r);
