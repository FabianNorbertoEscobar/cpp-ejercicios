#include "Gomin.hpp"

#include <iostream>

using namespace std;

Gomin::Gomin(bool estado)
{
    this->estado=estado;
}

ostream& operator << (ostream &stream,const Gomin &gomin)
{
    return stream << "Gomin: " << (gomin.estado?"ABIERTO":"CERRADO");
}
