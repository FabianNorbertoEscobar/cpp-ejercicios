#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<clocale>
#include<ctime>

using namespace std;

class Fecha
{
private:
    int dias_rel;
    static const int dias_rel_max;
    static const int inic_calend_greg;

    void normalizar();

public:
    Fecha(int d=1,int m=1,int a=1601);
    Fecha(const Fecha &fecha);

    int get_dias_relativos()const;
    void julianos_a_gregorianos(int j,int &d,int &m,int a);

    int get_dia();
    int get_mes();
    int get_anio();
    void get_dia_mes_anio(int &d,int &m,int &a);

    Fecha get_fecha_anterior()const;
    Fecha get_fecha_siguiente()const;

    void sumar_un_dia();
    void restar_un_dia();

    void sumar_dias(int d);
    void restar_dias(int d);

    static Fecha get_fecha_del_sistema();

    static int dias_julianos(int d,int m,int a);
    static int dias_gregorianos(int d,int m,int a);

    static int cant_dias_mes(int m,int a);
    static bool es_fecha_valida(int d,int m,int a);

    static bool es_bisiesto(int a);
    static int calcular_edad(int d_nac,int m_nac,int a_nac);

    Fecha operator+(int d)const;
    Fecha operator+(const Fecha &fecha)const;

    Fecha operator-(int d)const;
    Fecha operator-(const Fecha &fecha)const;

    bool operator<(const Fecha &fecha)const;
    bool operator>(const Fecha &fecha)const;

    bool operator<=(const Fecha &fecha)const;
    bool operator>=(const Fecha &fecha)const;

    bool operator==(const Fecha &fecha)const;
    bool operator!=(const Fecha &fecha)const;

    Fecha& operator+=(int d);
    Fecha& operator+=(const Fecha &fecha);

    Fecha& operator-=(int d);
    Fecha& operator-=(const Fecha &fecha);

    Fecha& operator++();
    Fecha operator++(int);

    Fecha& operator--();
    Fecha operator--(int);

    friend Fecha operator+(int d,const Fecha &fecha);
    friend Fecha operator-(int d,const Fecha &fecha);

    friend ostream& operator<<(ostream &stream,Fecha &fecha);
    friend istream& operator>>(istream &stream,Fecha &fecha);
};
