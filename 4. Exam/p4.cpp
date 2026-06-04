#include <iostream>
#include <vector>

class Alpha {
public:
    virtual void flimflam()
    {
        std::cout << "alpha\n";
    }
};

class Beta : public Alpha {
public:
    void flimflam() override
    {
        std::cout << "beta\n";
    }
};

class Gamma : public Alpha {
public:
    void bamboozle()
    {
        std::cout << "gamma\n";
    }
};

int main()
{
    Alpha a;
    Gamma g;
    Beta b;
    std::vector<Alpha*> vec = {&a, &g, &b};

    for (Alpha* p: vec) {
        p->flimflam();
        Gamma* q = dynamic_cast<Gamma*>(p);
        if (q) {
            q->bamboozle();
        }
    }

    return 0;
}
