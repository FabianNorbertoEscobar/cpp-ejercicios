#include "Guardabarros.hpp"

#include <iostream>

using namespace std;

Guardabarros::Guardabarros(unsigned cantidad_guardabarros)
{
    this->cantidad_guardabarros=cantidad_guardabarros;
}

ostream& operator << (ostream &stream,const Guardabarros &guardabarros)
{
    return stream << "Cantidad de guardabarros: " << guardabarros.cantidad_guardabarros;
}
