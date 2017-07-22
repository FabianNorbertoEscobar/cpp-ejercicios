#include "Circulo.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

double Circulo::pi=3.14159;

Circulo::Circulo(double radio,int x,int y): Punto(x,y)
{
    set_radio(radio);
}

void Circulo::set_radio(double radio)
{
    this->radio=radio;
}

double Circulo::get_radio()const
{
    return radio;
}

double Circulo::area()const
{
    return pi*radio*radio;
}

void Circulo::imprime_nombre_figura()const
{
    cout << "Círculo: ";
}

void Circulo::imprime()const
{
    Punto::imprime();
    cout << "; Radio: " << setprecision(2) << setiosflags(ios::fixed|ios::showpoint) << radio;
}
