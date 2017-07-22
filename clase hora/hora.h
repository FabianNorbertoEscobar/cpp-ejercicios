#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<clocale>

using namespace std;

class Hora
{
private:
    int seg_rel;
    static const int seg_rel_max;
    static int uso_horario_por_defecto;

    void normalizar();
    int hora_formato_12_hs(int h)const;

public:
    Hora();//constructor por defecto
    Hora(int h,int m=0,int s=0);//constructor parametrizado
    Hora(const Hora &hora);//constructor por copia

    void sumar_segundos(int s);
    void restar_segundos(int s);

    void sumar_minutos(int m);
    void restar_minutos(int m);

    void sumar_horas(int h);
    void restar_horas(int h);

    void sumar_dos_horarios(const Hora &hora);
    void restar_dos_horarios(const Hora &hora);

    void imprimir_hora_formato_24_hs()const;
    void imprimir_hora_formato_12_hs()const;

    static bool es_hora_valida(int h,int m,int s);

    static void set_uso_horario_por_defecto(int uso);
    static int get_uso_horario_por_defecto();

    Hora operator+(int n)const;
    Hora operator+(const Hora &hora)const;

    Hora operator-(int n)const;
    Hora operator-(const Hora &hora)const;

    bool operator<(const Hora &hora)const;
    bool operator>(const Hora &hora)const;

    bool operator<=(const Hora &hora)const;
    bool operator>=(const Hora &hora)const;

    bool operator==(const Hora &hora);
    bool operator!=(const Hora &hora);

    Hora operator+=(const Hora &hora);
    Hora operator-=(const Hora &hora);

    Hora& operator++();
    Hora operator++(int);

    Hora& operator--();
    Hora operator--(int);

    friend Hora operator+(int n,const Hora &hora);
    friend Hora operator-(int n,const Hora &hora);

    friend ostream& operator<<(ostream &stream,const Hora &hora);
    friend istream& operator>>(istream &stream,Hora &hora);
};
