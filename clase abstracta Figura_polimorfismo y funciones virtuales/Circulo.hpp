#ifndef CIRCULO_H
#define CIRCULO_H

#include "Punto.hpp"

#include <iostream>

using namespace std;

//clase concreta

class Circulo: public Punto
{
private:
    double radio;

protected:
    static double pi;

public:
    Circulo(double radio=0.0,int x=0,int y=0);

    void set_radio(double radio);
    double get_radio()const;

    //funciones virtuales

    virtual double area()const;

    virtual void imprime_nombre_figura()const;
    virtual void imprime()const;
};

#endif // CIRCULO_H
