#include "Rayo.hpp"

#include <iostream>

using namespace std;

Rayo::Rayo(unsigned cantidad_rayos)
{
    this->cantidad_rayos=cantidad_rayos;
}

ostream& operator << (ostream &stream,const Rayo &rayo)
{
    return stream << "Cantidad de rayos: " << rayo.cantidad_rayos;
}
