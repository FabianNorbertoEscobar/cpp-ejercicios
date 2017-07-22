#include "rectángulo.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

Rectangulo::Rectangulo(double longitud,double ancho)
{
    set_rectangulo(longitud,ancho);
}

double Rectangulo::perimetro()const
{
    return 2*longitud+2*ancho;
}

double Rectangulo::area()const
{
    return longitud*ancho;
}

void Rectangulo::set_rectangulo(double longitud,double ancho)
{
    this->longitud=(longitud>0.0&&longitud<20.0)?longitud:1.0;
    this->ancho=(ancho>0.0&&ancho<20.0)?ancho:1.0;
}

void Rectangulo::get_rectangulo(double &longitud,double &ancho)const
{
    longitud=this->longitud;
    ancho=this->ancho;
}

void Rectangulo::set_longitud(double longitud)
{
    this->longitud=(longitud>0.0&&longitud<20.0)?longitud:1.0;
}

double Rectangulo::get_longitud()const
{
    return longitud;
}

void Rectangulo::set_ancho(double ancho)
{
    this->ancho=(ancho>0.0&&ancho<20.0)?ancho:1.0;
}

double Rectangulo::get_ancho()const
{
    return ancho;
}

void Rectangulo::mostrar()const
{
    cout << setprecision(2) << endl << "\t Longitud: " << longitud << "\t Ancho: " << ancho << endl;
}
