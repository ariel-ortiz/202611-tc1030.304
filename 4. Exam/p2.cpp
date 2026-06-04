#include <iostream>

int main()
{
    int i = 5;
    int &r = i;
    int *p = &i;
    i++;
    r++;
    (*p)++;
    std::cout << i << " " << r << " " << *p << "\n";
    return 0;
}
