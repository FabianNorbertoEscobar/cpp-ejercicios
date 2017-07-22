#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<clocale>

using namespace std;

class Racional
{
private:

    int numerador;
    int denominador;

    static const int numerador_por_defecto;
    static const int denominador_por_defecto;

    void simplificar();
    int get_mcd(int a,int b);
    int get_mcm(int a,int b);

public:

    Racional(int numerador=numerador_por_defecto,int denominador=denominador_por_defecto);
    Racional(const Racional &racional);

    void reset();

    int get_numerador()const;
    int get_denominador()const;
    void get_numerador_y_denominador(int &numerador,int &denominador)const;

    void set_numerador(int numerador);
    void set_denominador(int denominador);
    void set_numerador_y_denominador(int numerador,int denominador);

    void mostrar();

    bool operator > (const Racional &racional)const;
    bool operator < (const Racional &racional)const;

    bool operator >= (const Racional &racional)const;
    bool operator <= (const Racional &racional)const;

    bool operator == (const Racional &racional)const;
    bool operator != (const Racional &racional)const;

    Racional operator + (int x)const;
    Racional operator - (int x)const;

    Racional operator * (int x)const;
    Racional operator / (int x)const;

    Racional operator + (const Racional &racional);
    Racional operator - (const Racional &racional);

    Racional operator * (const Racional &racional)const;
    Racional operator / (const Racional &racional)const;

    void operator += (int x);
    void operator -= (int x);

    void operator *= (int x);
    void operator /= (int x);

    void operator += (const Racional &racional);
    void operator -= (const Racional &racional);

    void operator *= (const Racional &racional);
    void operator /= (const Racional &racional);

    friend Racional operator + (int x,const Racional &racional);
    friend Racional operator - (int x,const Racional &racional);

    friend Racional operator * (int x,const Racional &racional);
    friend Racional operator / (int x,const Racional &racional);

    friend ostream& operator << (ostream &stream,const Racional &racional);
    friend istream& operator >> (istream &stream,Racional &racional);
};
