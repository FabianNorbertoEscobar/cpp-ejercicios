#include "Entero.hpp"

#include <iostream>

using namespace std;

Entero::Entero(int valor):valor(valor)
{
    cout << endl << "Constructor para Entero: " << valor << endl;
}

Entero::~Entero()
{
    cout << endl << "Destructor para Entero: " << valor << endl;
}

void Entero::set_entero(int valor)
{
    this->valor=valor;
}

int Entero::get_entero() const
{
    return valor;
}
