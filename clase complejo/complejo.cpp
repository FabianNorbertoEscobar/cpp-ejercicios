#include "complejo.hpp"

const int Complejo::real_por_defecto=0;
const int Complejo::imaginario_por_defecto=0;

Complejo::Complejo(int real,int imaginario)
{
    this->real=real;
    this->imaginario=imaginario;
}

Complejo::Complejo(const Complejo &complejo)
{
    real=complejo.real;
    imaginario=complejo.imaginario;
}

void Complejo::reset()
{
    real=real_por_defecto;
    imaginario=imaginario_por_defecto;
}

int Complejo::get_parte_real()const
{
    return real;
}

int Complejo::get_parte_imaginaria()const
{
    return imaginario;
}

void Complejo::get_parte_real_y_parte_imaginaria(int &real,int &imaginario)const
{
    real=this->real;
    imaginario=this->imaginario;
}

void Complejo::set_parte_real(int real)
{
    this->real=real;
}

void Complejo::set_parte_imaginaria(int imaginario)
{
    this->imaginario=imaginario;
}

void Complejo::set_parte_real_y_parte_imaginaria(int real,int imaginario)
{
    this->real=real;
    this->imaginario=imaginario;
}

float Complejo::get_modulo()const
{
    return sqrt(real*real+imaginario*imaginario);
}

Complejo Complejo::get_opuesto()const
{
    return Complejo(real*-1,imaginario*-1);
}

Complejo Complejo::get_conjugado()const
{
    return Complejo(real,imaginario*-1);
}

void Complejo::set_opuesto()
{
    real*=-1;
    imaginario*=-1;
}

void Complejo::set_conjugado()
{
    imaginario*=-1;
}

bool Complejo:: operator > (const Complejo &complejo)const
{
    return this->get_modulo() > complejo.get_modulo();
}

bool Complejo:: operator < (const Complejo &complejo)const
{
    return this->get_modulo() < complejo.get_modulo();
}

bool Complejo:: operator >= (const Complejo &complejo)const
{
    return this->get_modulo() >= complejo.get_modulo();
}

bool Complejo:: operator <= (const Complejo &complejo)const
{
    return this->get_modulo() <= complejo.get_modulo();
}

bool Complejo:: operator == (const Complejo &complejo)const
{
    return this->get_modulo() == complejo.get_modulo();
}

bool Complejo:: operator != (const Complejo &complejo)const
{
    return this->get_modulo() != complejo.get_modulo();
}

Complejo Complejo:: operator + (int x)const
{
    return Complejo(real+x,imaginario+x);
}

Complejo Complejo:: operator + (const Complejo &complejo)const
{
    return Complejo(real+complejo.real,imaginario+complejo.real);
}

Complejo Complejo:: operator - (int x)const
{
    return Complejo(real-x,imaginario-x);
}

Complejo Complejo:: operator - (const Complejo &complejo)const
{
    return Complejo(real-complejo.real,imaginario-complejo.imaginario);
}

Complejo Complejo:: operator * (int x)const
{
    return Complejo(real*x,imaginario*x);
}

Complejo Complejo:: operator * (const Complejo &complejo)const
{
    return Complejo(real*complejo.real-imaginario*complejo.imaginario,real*complejo.imaginario+imaginario*complejo.real);
}

Complejo Complejo:: operator / (int x)const
{
    return Complejo(real/x,imaginario/x);
}

Complejo Complejo:: operator / (const Complejo &complejo)const
{
    return Complejo((real*complejo.real+imaginario*complejo.imaginario)/(complejo.real*complejo.real+complejo.imaginario*complejo.imaginario),\
                    (imaginario*complejo.real-real*complejo.imaginario)/(complejo.real*complejo.real+complejo.imaginario*complejo.imaginario));
}

void Complejo:: operator += (int x)
{
    real+=x;
    imaginario+=x;
}

void Complejo:: operator -= (int x)
{
    real-=x;
    imaginario-=x;
}

void Complejo:: operator *= (int x)
{
    real*=x;
    imaginario*=x;
}

void Complejo:: operator /= (int x)
{
    real/=x;
    imaginario/=x;
}

void Complejo:: operator += (const Complejo &complejo)
{
    real+=complejo.real;
    imaginario+=complejo.imaginario;
}

void Complejo:: operator -= (const Complejo &complejo)
{
    real-=complejo.real;
    imaginario-=complejo.imaginario;
}

void Complejo:: operator *= (const Complejo &complejo)
{
    real=real*complejo.real-imaginario*complejo.imaginario;
    imaginario=real*complejo.imaginario+imaginario*complejo.real;
}

void Complejo:: operator /= (const Complejo &complejo)
{
    int x=(real*complejo.real+imaginario*complejo.imaginario)/(complejo.real*complejo.real+complejo.imaginario*complejo.imaginario);
    int y=(imaginario*complejo.real-real*complejo.imaginario)/(complejo.real*complejo.real+complejo.imaginario*complejo.imaginario);
    real=x;
    imaginario=y;
}

Complejo operator + (int x,const Complejo &complejo)
{
    return Complejo(x+complejo.real,x+complejo.imaginario);
}

Complejo operator - (int x,const Complejo &complejo)
{
    return Complejo(x-complejo.real,x-complejo.imaginario);
}

Complejo operator * (int x,const Complejo &complejo)
{
    return Complejo(x*complejo.real,x*complejo.imaginario);
}

Complejo operator / (int x,const Complejo &complejo)
{
    return Complejo(x/complejo.real,x/complejo.imaginario);
}

ostream& operator << (ostream &stream,const Complejo &complejo)
{
    return stream << complejo.real << ((complejo.imaginario<0)?" - ":" + ") << ((complejo.imaginario<0)?complejo.imaginario*-1:complejo.imaginario) << 'i';
}

istream& operator >> (istream &stream,Complejo &complejo)
{
    cout << endl << "Ingrese parte real: \t";
    stream >> complejo.real;
    cout << endl << "Ingrese parte imaginaria: \t";
    stream >> complejo.imaginario;
    return stream;
}
