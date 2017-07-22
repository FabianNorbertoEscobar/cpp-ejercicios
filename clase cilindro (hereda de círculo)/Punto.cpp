#include "Punto.hpp"

#include <iostream>

using namespace std;

Punto::Punto(int x,int y)
{
    set_punto(x,y);
}

void Punto::set_punto(int x,int y)
{
    this->x=x;
    this->y=y;
}

int Punto::get_x()const
{
    return x;
}

int Punto::get_y()const
{
    return y;
}

ostream& operator << (ostream &stream,const Punto &punto)
{
    return stream << "(" << punto.x << ";" << punto.y << ")";
}
