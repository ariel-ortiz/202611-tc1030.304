#include <iostream>

void fun(int a, int &b)
{
    a++;
    b++;
}

int main()
{
    int x = 5;
    int y = 5;
    std::cout << x << " " << y << "\n";
    fun(x, y);
    std::cout << x << " " << y << "\n";
    return 0;
}
