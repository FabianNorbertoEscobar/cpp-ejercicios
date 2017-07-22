#ifndef PUNTO_H
#define PUNTO_H

#include "Figura.hpp"

#include <iostream>

using namespace std;

// clase concreta

class Punto: public Figura
{
private:
    int x;
    int y;

public:
    Punto(int x=0,int y=0);

    void set_punto(int x,int y);
    int get_x()const;
    int get_y()const;

    //funciones virtuales
    virtual void imprime_nombre_figura()const;
    virtual void imprime()const;
};

#endif // PUNTO_H
