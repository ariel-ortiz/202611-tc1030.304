#include <iostream>

class Animal {
public:
    Animal(std::string nombre, int edad): nombre(nombre), edad(edad) {}
    virtual void hacer_sonido() const = 0;
    virtual void mostrar_informacion() const = 0;
protected:
    std::string nombre;
    int edad;
};

class Perro: public Animal {
public:
    Perro(std::string nombre, int edad, std::string raza): Animal(nombre, edad), raza(raza) {}
    void hacer_sonido() const
    {
        std::cout << "Guau\n";
    }
    void mostrar_informacion() const {
        std::cout << "Perro:\n";
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Edad: " << edad << "\n";
        std::cout << "Raza: " << raza << "\n";
    }
private:
    std::string raza;
};

class Gato: public Animal {
public:
    Gato(std::string nombre, int edad, std::string color): Animal(nombre, edad), color(color) {}
    void hacer_sonido() const
    {
        std::cout << "Miau\n";
    }
    void mostrar_informacion() const {
        std::cout << "Gato:\n";
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Edad: " << edad << "\n";
        std::cout << "Color: " << color << "\n";
    }
private:
    std::string color;
};

void demostrar_animal(const Animal& a)
{
    a.mostrar_informacion();
    a.hacer_sonido();
}

int main()
{
    Perro p("Firulais", 5, "Labrador");
    Gato g("Michi", 3, "Negro");

    demostrar_animal(p);
    std::cout << "\n";
    demostrar_animal(g);
    return 0;
}
