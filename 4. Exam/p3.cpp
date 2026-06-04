#include <iostream>

class A {
public:
    virtual void m() = 0;
};

class B : public A {
public:
    void m() override {}
};

int main()
{
    B b;
    b.m();
    return 0;
}
