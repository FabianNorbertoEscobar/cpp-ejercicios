#ifndef RUEDA_H
#define RUEDA_H

#include "Rayo.hpp"
#include "Cubierta.hpp"
#include "Gomin.hpp"

#include <iostream>

using namespace std;

class Rueda: public Rayo,public Cubierta,public Gomin
{
protected:
    bool plasticos_fluor;

public:
    Rueda(bool plasticos_fluor=true,unsigned cantidad_rayos=16,int cantidad_cubiertas=2,bool estado_cubiertas=true,bool estado=true);

    friend ostream& operator << (ostream &stream,const Rueda &rueda);
};

#endif // RUEDA_H
