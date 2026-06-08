#include <iostream>
#include <stdexcept>

void collywobbles(int x)
{
    std::cout << "a";
    if (x % 2 == 1) {
        throw std::runtime_error("b");
    }
    std::cout << "c";
    throw 10;
}

void crapulence(int y)
{
    try {
        std::cout << "d";
        collywobbles(y + 1);
        std::cout << "e";
    } catch (int) {
        std::cout << "f";
    }
    std::cout << "g";
}

int main()
{
    try {
        std::cout << "h";
        crapulence(1);
        std::cout << "i";
        crapulence(2);
        std::cout << "j";
    } catch (std::runtime_error e) {
        std::cout << e.what();
    }
    std::cout << "k";
    return 0;
}
