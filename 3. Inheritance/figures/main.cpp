// Para compilar:
//      g++ *.cpp -o main && ./main

#include <iostream>
#include "rectangle.h"

int main()
{
    Rectangle a(10, 5);
    Figure *f = &a;
    
    std::cout << f->area() << "\n";

    return 0;
}
