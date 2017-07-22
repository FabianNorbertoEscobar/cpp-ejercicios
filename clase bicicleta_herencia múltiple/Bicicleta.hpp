#ifndef BICICLETA_H
#define BICICLETA_H

#include "Rueda.hpp"
#include "Pedal.hpp"
#include "Asiento.hpp"
#include "Manubrio.hpp"
#include "Engranaje.hpp"
#include "Guardabarros.hpp"
#include "Freno.hpp"
#include "Cambio.hpp"

#include <iostream>

using namespace std;

class Bicicleta: public Rueda,public Pedal,public Asiento,public Manubrio,public Engranaje,public Guardabarros,public Freno,public Cambio
{
protected:
    char *color;

public:
    Bicicleta(const char *color="Negro",bool plasticos_fluor=true,unsigned cantidad_rayos=16,int cantidad_cubiertas=2,bool estado_cubiertas=true,bool estado=true,bool plastico=true,bool acolchonado=true,bool canastita=true,bool engrasado=true,unsigned cantidad_guardabarros=2,int cantidad_frenos=2,bool cambio=true);

    friend ostream& operator << (ostream &stream,const Bicicleta &bicicleta);
};

#endif // BICICLETA_H
