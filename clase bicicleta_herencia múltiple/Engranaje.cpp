#include "Engranaje.hpp"

#include <iostream>

using namespace std;

Engranaje::Engranaje(bool engrasado)
{
    this->engrasado=engrasado;
}

ostream& operator << (ostream &stream,const Engranaje &engranaje)
{
    return stream << "Engranaje engrasado: " << (engranaje.engrasado?"SI":"NO");
}
