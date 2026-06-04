#include <iostream>
#include <vector>

class Delta {
public:
    Delta(int x = 0)
    {
        _x = x;
    }
    int operator+() const {
        return _x + 1;
    }
    int operator+(const Delta &other) const {
        return (_x + other._x) * 2;
    }
private:
    int _x;
};

int main()
{
    Delta d(3);
    int r = +d * (d + d);
    std::cout << r << "\n";

    Delta a, b(4);
    r = a + b;
    std::cout << r << "\n";

    return 0;
}
