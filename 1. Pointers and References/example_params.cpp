#include <iostream>

// Paso por valor (copia)
void f(int x)
{
    x++;
}

void g(int *p)
{
    (*p)++;
}

// Paso por referencia
void h(int &r)
{
    r++;
}

int main()
{
    int a = 10;
    std::cout << "a = " << a << "\n";
    f(a);
    std::cout << "a = " << a << "\n";
    g(&a);
    std::cout << "a = " << a << "\n";
    h(a);
    std::cout << "a = " << a << "\n";
    return 0;
}
