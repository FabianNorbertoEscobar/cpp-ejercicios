#include "rectángulo.hpp"

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool Rectangulo::esquinas_consistentes()const
{
    return rango_valido(x_esq1)&&rango_valido(y_esq1)&&
           rango_valido(x_esq2)&&rango_valido(y_esq2)&&
           rango_valido(x_esq3)&&rango_valido(y_esq3)&&
           rango_valido(x_esq4)&&rango_valido(y_esq4)&&
           diagonal_1()==diagonal_2();
}

void Rectangulo::esquinas_por_defecto()
{
    x_esq1=0.0;
    y_esq1=0.0;

    x_esq2=1.0;
    y_esq2=0.0;

    x_esq3=1.0;
    y_esq3=1.0;

    x_esq4=0.0;
    y_esq4=1.0;
}

double Rectangulo::diagonal_1()const
{
    return distancia(x_esq1,y_esq1,x_esq3,y_esq3);
}

double Rectangulo::diagonal_2()const
{
    return distancia(x_esq2,y_esq2,x_esq4,y_esq4);
}

double Rectangulo::distancia(double x1,double y1,double x2,double y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

bool Rectangulo::rango_valido(double coordenada)
{
    return coordenada>=0.0&&coordenada<=20.0;
}

Rectangulo::Rectangulo(double x_esq1,double y_esq1,double x_esq2,double y_esq2,
                       double x_esq3,double y_esq3,double x_esq4,double y_esq4)
{
    set_esquinas(x_esq1,y_esq1,x_esq2,y_esq2,x_esq3,y_esq3,x_esq4,y_esq4);
}

double Rectangulo::longitud()const
{
    double lado_1=distancia(x_esq1,y_esq1,x_esq2,y_esq2);
    double lado_2=distancia(x_esq3,y_esq3,x_esq2,y_esq2);

    return (lado_1>lado_2)?lado_1:lado_2;
}

double Rectangulo::ancho()const
{
    double lado_1=distancia(x_esq1,y_esq1,x_esq2,y_esq2);
    double lado_2=distancia(x_esq3,y_esq3,x_esq2,y_esq2);

    return (lado_1<lado_2)?lado_1:lado_2;
}

double Rectangulo::perimetro()const
{
    return 2*longitud()+2*ancho();
}

double Rectangulo::area()const
{
    return longitud()*ancho();
}

void Rectangulo::set_esquinas(double x_esq1,double y_esq1,double x_esq2,double y_esq2,
                              double x_esq3,double y_esq3,double x_esq4,double y_esq4)
{
    this->x_esq1=x_esq1;
    this->y_esq1=y_esq1;

    this->x_esq2=x_esq2;
    this->y_esq2=y_esq2;

    this->x_esq3=x_esq3;
    this->y_esq3=y_esq3;

    this->x_esq4=x_esq4;
    this->y_esq4=y_esq4;

    if(!esquinas_consistentes())
        esquinas_por_defecto();
}

void Rectangulo::get_esquinas(double &x_esq1,double &y_esq1,double &x_esq2,double &y_esq2,
                              double &x_esq3,double &y_esq3,double &x_esq4,double &y_esq4)const
{
    x_esq1=this->x_esq1;
    y_esq1=this->y_esq1;

    x_esq2=this->x_esq2;
    y_esq2=this->y_esq2;

    x_esq3=this->x_esq3;
    y_esq3=this->y_esq3;

    x_esq4=this->x_esq4;
    y_esq4=this->y_esq4;
}

bool Rectangulo::cuadrado()const
{
    return longitud()==ancho()&&diagonal_1()==diagonal_2();
}
