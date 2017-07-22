#ifndef CIRCULO_H
#define CIRCULO_H

#include "Punto.hpp"

#include <iostream>

using namespace std;

class Circulo: public Punto
{
protected:
    double radio;
    static double pi;

public:
    Circulo(double radio=0,int x=0,int y=0);

    void set_radio(double radio);
    double get_radio()const;

    double area()const;

    friend ostream& operator << (ostream &stream,const Circulo &circulo);
};

#endif // CIRCULO_H
