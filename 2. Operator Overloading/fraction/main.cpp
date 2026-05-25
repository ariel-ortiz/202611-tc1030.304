#include <iostream>
#include <iomanip>
#include "fraction.h"

int main()
{
    Fraction a(1, 2), b(3, 4), c;

    c = a + b;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";

    c = -a;
    std::cout << "c = " << c << "\n";

    c = a - b;
    std::cout << "c = " << c << "\n";

    std::cout << "static_cast<double>(b) = " << static_cast<double>(b) << "\n";

    std::cout << std::boolalpha;
    std::cout << "a == b = " << (a == b) << "\n";
    std::cout << "a == a = " << (a == a) << "\n";
    std::cout << "a != b = " << (a != b) << "\n";
    std::cout << "a != a = " << (a != a) << "\n";

    return 0;
}
