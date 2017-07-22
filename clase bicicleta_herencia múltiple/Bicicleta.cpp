#include "Bicicleta.hpp"

#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

Bicicleta::Bicicleta(const char *color,bool plasticos_fluor,unsigned cantidad_rayos,int cantidad_cubiertas,
          bool estado_cubiertas,bool estado,bool plastico,bool acolchonado,bool canastita,
          bool engrasado,unsigned cantidad_guardabarros,int cantidad_frenos,bool cambio)

    :Rueda(plasticos_fluor,cantidad_rayos,cantidad_cubiertas,estado_cubiertas,estado),Pedal(plastico),
     Asiento(acolchonado),Manubrio(canastita),Engranaje(engrasado),Guardabarros(cantidad_guardabarros),
     Freno(cantidad_frenos),Cambio(cambio)
{
    this->color = new char[strlen(color)+1];
    assert(this->color);
    strcpy(this->color,strdup(color));
}

ostream& operator << (ostream &stream,const Bicicleta &bicicleta)
{
    return stream << endl << "Color de la bicicleta: " << bicicleta.color
           << endl << static_cast<Rueda>(bicicleta)
           << endl << static_cast<Pedal>(bicicleta)
           << endl << static_cast<Asiento>(bicicleta)
           << endl << static_cast<Manubrio>(bicicleta)
           << endl << static_cast<Engranaje>(bicicleta)
           << endl << static_cast<Guardabarros>(bicicleta)
           << endl << static_cast<Freno>(bicicleta)
           << endl << static_cast<Cambio>(bicicleta) << endl;
}
