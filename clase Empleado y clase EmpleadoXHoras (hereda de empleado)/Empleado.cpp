#include "Empleado.hpp"

#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

Empleado::Empleado(const char *nombre,const char *apellido)
{
    this->nombre = new char[strlen(nombre)+1];
    assert(this->nombre);
    strcpy(this->nombre,strdup(nombre));

    this->apellido = new char[strlen(apellido)+1];
    assert(this->apellido);
    strcpy(this->apellido,strdup(apellido));
}

Empleado::~Empleado()
{
    delete [] nombre;
    delete [] apellido;
}

void Empleado::imprimir()const
{
    cout << nombre << " " << apellido;
}
