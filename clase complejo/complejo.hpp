#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<clocale>
#include<cmath>

using namespace std;

class Complejo
{
private:

    int real;
    int imaginario;

    static const int real_por_defecto;
    static const int imaginario_por_defecto;

public:

    Complejo(int real=real_por_defecto,int imaginario=imaginario_por_defecto);
    Complejo(const Complejo &complejo);

    void reset();

    int get_parte_real()const;
    int get_parte_imaginaria()const;
    void get_parte_real_y_parte_imaginaria(int &real,int &imaginario)const;

    void set_parte_real(int real);
    void set_parte_imaginaria(int imaginario);
    void set_parte_real_y_parte_imaginaria(int real,int imaginario);

    float get_modulo()const;

    Complejo get_opuesto()const;
    Complejo get_conjugado()const;

    void set_opuesto();
    void set_conjugado();

    bool operator > (const Complejo &complejo)const;
    bool operator < (const Complejo &complejo)const;

    bool operator >= (const Complejo &complejo)const;
    bool operator <= (const Complejo &complejo)const;

    bool operator == (const Complejo &complejo)const;
    bool operator != (const Complejo &complejo)const;

    Complejo operator + (int x)const;
    Complejo operator + (const Complejo &complejo)const;

    Complejo operator - (int x)const;
    Complejo operator - (const Complejo &complejo)const;

    Complejo operator * (int x)const;
    Complejo operator * (const Complejo &complejo)const;

    Complejo operator / (int x)const;
    Complejo operator / (const Complejo &complejo)const;

    void operator += (int x);
    void operator -= (int x);

    void operator *= (int x);
    void operator /= (int x);

    void operator += (const Complejo &complejo);
    void operator -= (const Complejo &complejo);

    void operator *= (const Complejo &complejo);
    void operator /= (const Complejo &complejo);

    friend Complejo operator + (int x,const Complejo &complejo);
    friend Complejo operator - (int x,const Complejo &complejo);

    friend Complejo operator * (int x,const Complejo &complejo);
    friend Complejo operator / (int x,const Complejo &complejo);

    friend ostream& operator << (ostream &stream,const Complejo &complejo);
    friend istream& operator >> (istream &stream,Complejo &complejo);
};
