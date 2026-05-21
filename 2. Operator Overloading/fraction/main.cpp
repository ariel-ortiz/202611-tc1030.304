#include <iostream>
#include "fraction.h"

int main()
{
    Fraction a(3, 6);
    Fraction b(5);
    Fraction c;
    Fraction d(6, -8);

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << d << "\n";

    return 0;
}
