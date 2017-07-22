#ifndef CILINDRO_H
#define CILINDRO_H

#include "Circulo.hpp"

#include <iostream>

using namespace std;

//clase concreta

class Cilindro: public Circulo
{
private:
    double altura;

public:
    Cilindro(double altura=0.0,double radio=0.0,int x=0,int y=0);

    void set_altura(double altura);
    double get_altura()const;

    //funciones virtuales

    virtual double area()const;
    virtual double volumen()const;

    virtual void imprime_nombre_figura()const;
    virtual void imprime()const;
};

#endif // CILINDRO_H
