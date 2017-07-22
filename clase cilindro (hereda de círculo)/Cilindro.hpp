#ifndef CILINDRO_H
#define CILINDRO_H

#include "Circulo.hpp"

#include <iostream>

using namespace std;

class Cilindro: public Circulo
{
protected:
    double altura;

public:
    Cilindro(double altura=0.0,double radio=0.0,int x=0,int y=0);

    void set_altura(double altura);
    double get_altura()const;
    double area()const;
    double volumen()const;

    friend ostream& operator << (ostream &stream,const Cilindro &cilindro);
};

#endif // CILINDRO_H
