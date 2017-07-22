#include "Freno.hpp"

#include <iostream>

using namespace std;

Freno::Freno(int cantidad_frenos)
{
    this->cantidad_frenos=cantidad_frenos;
}

ostream& operator << (ostream &stream,const Freno &freno)
{
    return stream << "Cantidad de frenos: " << freno.cantidad_frenos;
}
