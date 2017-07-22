#include "Cambio.hpp"

#include <iostream>

using namespace std;

Cambio::Cambio(bool cambio)
{
    this->cambio=cambio;
}

ostream& operator << (ostream &stream,const Cambio &cambio)
{
    return stream << "Cambio: " << (cambio.cambio?"SI":"NO");
}
