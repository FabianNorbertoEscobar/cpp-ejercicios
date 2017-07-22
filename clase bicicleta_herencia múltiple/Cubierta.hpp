#ifndef CUBIERTA_H
#define CUBIERTA_H

#include <iostream>

using namespace std;

class Cubierta
{
protected:
    int cantidad_cubiertas;
    bool estado_cubiertas;

public:
    Cubierta(int cantidad_cubiertas=2,bool estado_cubiertas=true);

    friend ostream& operator << (ostream &stream,const Cubierta &cubierta);
};

#endif // CUBIERTA_H
