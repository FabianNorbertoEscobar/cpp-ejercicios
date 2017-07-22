#include "Cubierta.hpp"

#include <iostream>

using namespace std;

Cubierta::Cubierta(int cantidad_cubiertas,bool estado_cubiertas)
{
    this->cantidad_cubiertas=cantidad_cubiertas;
    this->estado_cubiertas=estado_cubiertas;
}

ostream& operator << (ostream &stream,const Cubierta &cubierta)
{
    return stream << "Cantidad de cubiertas: " << cubierta.cantidad_cubiertas
           << endl << "Estado de cubiertas: " << (cubierta.estado_cubiertas?"SANAS":"ROTAS");
}
