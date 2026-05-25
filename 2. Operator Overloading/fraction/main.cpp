#include <iostream>
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
    
    return 0;
}
