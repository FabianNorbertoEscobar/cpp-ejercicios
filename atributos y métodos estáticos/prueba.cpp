#include "prueba.hpp"

#include <iostream>

using namespace std;

int Prueba::objetos_instanciados=0;

Prueba::Prueba()
{
    cout << endl << endl << "Constructor ejecutado" << endl;
    objetos_instanciados++;
}

Prueba::~Prueba()
{
    cout << endl << endl << "Destructor ejecutado" << endl;
    objetos_instanciados--;
}

int Prueba::get_objetos_instanciados()
{
    return objetos_instanciados;
}
