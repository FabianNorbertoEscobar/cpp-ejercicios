#include "Rueda.hpp"

#include <iostream>

using namespace std;

Rueda::Rueda(bool plasticos_fluor,unsigned cantidad_rayos,int cantidad_cubiertas,bool estado_cubiertas,bool estado)

    :Rayo(cantidad_rayos),Cubierta(cantidad_cubiertas,estado_cubiertas),Gomin(estado)
{
    this->plasticos_fluor=plasticos_fluor;
}

ostream& operator << (ostream &stream,const Rueda &rueda)
{
    return stream << "Plásticos flúor en las ruedas: " << (rueda.cantidad_rayos?"SI":"NO") << endl
           << static_cast<Rayo>(rueda) << endl
           << static_cast<Cubierta>(rueda) << endl
           << static_cast<Gomin>(rueda);
}
