#include "racional.hpp"

const int Racional::numerador_por_defecto=0;
const int Racional::denominador_por_defecto=1;

void Racional::simplificar()
{
    int mcd=get_mcd(numerador,denominador);
    numerador/=mcd;
    denominador/=mcd;
}

int Racional::get_mcd(int a,int b)
{
    int u=a,v=b,r;
     while(v!=0)
     {
          r=u%v;
          u=v;
          v=r;
     }
     return u;
}

int Racional::get_mcm(int a,int b)
{
    return a*b/get_mcd(a,b);
}

Racional::Racional(int numerador,int denominador)
{
    if(denominador==0)
    {
        system("cls");
        cout << endl << endl << "ERROR: El denominador NO puede ser cero" << endl << endl;
    }

    this->numerador=numerador;
    this->denominador=denominador;
    simplificar();
}

Racional::Racional(const Racional &racional)
{
    numerador=racional.numerador;
    denominador=racional.numerador;
}

void Racional::reset()
{
    numerador=numerador_por_defecto;
    denominador=denominador_por_defecto;
}

int Racional::get_numerador()const
{
    return numerador;
}

int Racional::get_denominador()const
{
    return denominador;
}

void Racional::get_numerador_y_denominador(int &numerador,int &denominador)const
{
    numerador=this->numerador;
    denominador=this->denominador;
}

void Racional::set_numerador(int numerador)
{
    this->numerador=numerador;
    simplificar();
}

void Racional::set_denominador(int denominador)
{
    if(denominador==0)
    {
        system("cls");
        cout << endl << endl << "ERROR: El denominador NO puede ser cero" << endl << endl;
    }

    this->denominador=denominador;
    simplificar();
}

void Racional::set_numerador_y_denominador(int numerador,int denominador)
{
    if(denominador==0)
    {
        system("cls");
        cout << endl << endl << "ERROR: El denominador NO puede ser cero" << endl << endl;
    }

    this->numerador=numerador;
    this->denominador=denominador;
    simplificar();
}

void Racional::mostrar()
{
    cout << numerador << "/" << denominador;
}

bool Racional:: operator > (const Racional &racional)const
{
    return (float)numerador/denominador > (float)racional.numerador/racional.denominador;
}

bool Racional:: operator < (const Racional &racional)const
{
    return (float)numerador/denominador < (float)racional.numerador/racional.denominador;
}

bool Racional:: operator >= (const Racional &racional)const
{
    return (float)numerador/denominador >= (float)racional.numerador/racional.denominador;
}

bool Racional:: operator <= (const Racional &racional)const
{
    return (float)numerador/denominador <= (float)racional.numerador/racional.denominador;
}

bool Racional:: operator == (const Racional &racional)const
{
    return (float)numerador/denominador == (float)racional.numerador/racional.denominador;
}

bool Racional:: operator != (const Racional &racional)const
{
    return (float)numerador/denominador != (float)racional.numerador/racional.denominador;
}

Racional Racional:: operator + (int x)const
{
    return Racional(numerador+x*denominador,denominador);
}

Racional Racional:: operator - (int x)const
{
    return Racional(numerador-x*denominador,denominador);
}

Racional Racional:: operator * (int x)const
{
    return Racional(numerador*x,denominador);
}

Racional Racional:: operator / (int x)const
{
    return Racional(numerador,denominador*x);
}

Racional Racional:: operator + (const Racional &racional)
{
    int mcm=get_mcm(denominador,racional.denominador);
    return Racional(mcm/denominador*numerador+mcm/racional.denominador*numerador,mcm);
}

Racional Racional:: operator - (const Racional &racional)
{
    int mcm=get_mcm(denominador,racional.denominador);
    return Racional(mcm/denominador*numerador-mcm/racional.denominador*numerador,mcm);
}

Racional Racional:: operator * (const Racional &racional)const
{
    return Racional(numerador*racional.numerador,denominador*racional.denominador);
}

Racional Racional:: operator / (const Racional &racional)const
{
    return Racional(numerador*racional.denominador,denominador*racional.numerador);
}

void Racional:: operator += (int x)
{
    numerador=numerador+x*denominador;
    simplificar();
}

void Racional:: operator -= (int x)
{
    numerador=numerador-x*denominador;
    simplificar();
}

void Racional:: operator *= (int x)
{
    numerador*=x;
    simplificar();
}

void Racional:: operator /= (int x)
{
    denominador*=x;
    simplificar();
}

void Racional:: operator += (const Racional &racional)
{
    int mcm=get_mcm(denominador,racional.denominador);
    set_numerador_y_denominador(mcm/denominador*numerador+mcm/racional.denominador*numerador,mcm);
}

void Racional:: operator -= (const Racional &racional)
{
    int mcm=get_mcm(denominador,racional.denominador);
    set_numerador_y_denominador(mcm/denominador*numerador-mcm/racional.denominador*numerador,mcm);
}

void Racional:: operator *= (const Racional &racional)
{
    set_numerador_y_denominador(numerador*racional.numerador,denominador*racional.denominador);
}

void Racional:: operator /= (const Racional &racional)
{
    set_numerador_y_denominador(numerador*racional.denominador,denominador*racional.numerador);
}

Racional operator + (int x,const Racional &racional)
{
    return Racional(racional.numerador+x*racional.denominador,racional.denominador);
}

Racional operator - (int x,const Racional &racional)
{
    return Racional(racional.numerador-x*racional.denominador,racional.denominador);
}

Racional operator * (int x,const Racional &racional)
{
    return Racional(racional.numerador*x,racional.denominador);
}

Racional operator / (int x,const Racional &racional)
{
    return Racional(racional.numerador,racional.denominador*x);
}

ostream& operator << (ostream &stream,const Racional &racional)
{
    return stream << racional.numerador << "/" << racional.denominador;
}

istream& operator >> (istream &stream,Racional &racional)
{
    char c;
    stream >> racional.numerador >> c >> racional.denominador;

    if(racional.denominador==0)
    {
        system("cls");
        cout << endl << endl << "ERROR: El denominador NO puede ser cero" << endl << endl;
    }
    return stream;
}
