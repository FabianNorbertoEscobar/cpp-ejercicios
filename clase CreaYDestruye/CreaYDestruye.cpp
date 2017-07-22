// Definiciones de las funciones miembro para la clase CreaYDestruye
#include <iostream>

using namespace std;

#include "CreaYDestruye.hpp"

CreaYDestruye::CreaYDestruye(int valor)
{
    datos=valor;
    cout << "Objeto " << datos << " constructor";
} // fin del constructor CreaYDestruye

CreaYDestruye::~CreaYDestruye()
{
    cerr << "Objeto " << datos << " destructor " << endl;
}// fin del desstructor CreaYDestruye
