// Para compilar:
//      g++ *.cpp -o main && ./main

#include <iostream>
#include <vector>
#include "circle.h"
#include "rectangle.h"
#include "square.h"

double add_area_and_perimiter(const Figure& f)
{
    return f.area() + f.perimeter();
}

int main()
{
    Rectangle r(10, 5);
    Circle c(5);
    Square s(15);

    std::cout << r << "\n";
    std::cout << c << "\n";
    std::cout << s << "\n";
    s.spongify();

    std::vector<Figure*> figs = {&r, &c, &s, &r};

    std::cout << "Inicia for...\n";
    double area_sum = 0;
    for (Figure* f : figs) {
        // f es una variable polimórfica
        area_sum += f->area(); // area_sum = area_sum + f->area();
        std::cout << f->to_string() << "\n";

        // sp apunta a un Square si efectivamente es válido
        // o a nullptr si la conversión no es válida
        Square *sp = dynamic_cast<Square*>(f);
        if (sp != nullptr) {
            sp->spongify();
        }
    }
    std::cout << "Suma de áreas = " << area_sum << "\n";

    std::cout << add_area_and_perimiter(r) << "\n";
    std::cout << add_area_and_perimiter(c) << "\n";

    return 0;
}
