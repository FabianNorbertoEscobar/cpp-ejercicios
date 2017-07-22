#include "Asiento.hpp"

#include <iostream>

using namespace std;

Asiento::Asiento(bool acolchonado)
{
    this->acolchonado=acolchonado;
}

ostream& operator << (ostream &stream,const Asiento &asiento)
{
    return stream << "Asiento acolchonado: " << (asiento.acolchonado?"SI":"NO");
}
