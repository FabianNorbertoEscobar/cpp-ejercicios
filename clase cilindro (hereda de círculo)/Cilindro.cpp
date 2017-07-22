#include "Cilindro.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

Cilindro::Cilindro(double altura,double radio,int x,int y): Circulo(radio,x,y)
{
    set_altura(altura);
}

void Cilindro::set_altura(double altura)
{
    this->altura=altura;
}

double Cilindro::get_altura()const
{
    return altura;
}

double Cilindro::area()const
{
    return 2*Circulo::area()+pi*2*radio*altura;
}

double Cilindro::volumen()const
{
    return Circulo::area()*altura;
}

ostream& operator << (ostream &stream,const Cilindro &cilindro)
{
    return stream <<static_cast<Circulo>(cilindro) << "; Altura: " << cilindro.altura;
}
