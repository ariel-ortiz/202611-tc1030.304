#include <iostream>

int main()
{
    int x = 5;
    int y = 10;
    int *p = &x;
    int **q = nullptr;
    std::cout << " x = " << x << "\n";
    x++;
    std::cout << "  x = " << x << "\n";
    std::cout << " &x = " << &x << "\n";
    std::cout << "  y = " << y << "\n";
    std::cout << " &y = " << &y << "\n";
    std::cout << "  p = " << p << "\n";
    std::cout << " &p = " << &p << "\n";
    std::cout << " *p = " << *p << "\n";
    std::cout << "  q = " << q << "\n";
    // No hagan esto en casa:
    // std::cout << " *q = " << *q << "\n";
    q = &p;
    std::cout << "  q = " << q << "\n";
    std::cout << " *q = " << *q << "\n";
    std::cout << "**q = " << **q << "\n";
    return 0;
}
