#pragma once

#include <iostream>

class Fraction {

public:

    Fraction(int numerator=0, int denominator=1);
    std::string to_string() const;
    Fraction operator + (const Fraction& other) const;
    Fraction operator - () const;
    Fraction operator - (const Fraction& other) const;
    operator double() const;
    bool operator == (const Fraction& other) const;
    bool operator != (const Fraction& other) const;
    
private:

    int _numerator = 0;
    int _denominator = 1;
};

std::ostream& operator<<(std::ostream& os, const Fraction& r);
