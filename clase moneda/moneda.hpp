#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<clocale>
#include<string>

#define     MONEDA_ar       0
#define     MONEDA_usd      1
#define     MONEDA_rs       2
#define     MONEDA_uyu      3

#define     DATO_VALIDO(x,li,ls)    ((x)>=(li)&&(x)<=(ls))

using namespace std;

class Moneda
{
private:

    int tipo;
    float valor;

    static string simbolo_ar;
    static string simbolo_usd;
    static string simbolo_rs;
    static string simbolo_uyu;

    static float valor_ar;
    static float valor_usd;
    static float valor_rs;
    static float valor_uyu;

    static int seleccionar_tipo();

public:

    Moneda(float valor=0,int tipo=MONEDA_ar);
    Moneda(const Moneda &moneda);

    void convertir(int tipo);

    float get_valor()const;
    float get_valor(int tipo)const;

    static void set_valor_moneda(int tipo,float valor);
    static float get_valor_moneda(int tipo);

    static void set_simbolo(int tipo,string simbolo);
    static string get_simbolo(int tipo);

    bool operator > (const Moneda &moneda)const;
    bool operator < (const Moneda &moneda)const;

    bool operator >= (const Moneda &moneda)const;
    bool operator <= (const Moneda &moneda)const;

    bool operator == (const Moneda &moneda)const;
    bool operator != (const Moneda &moneda)const;

    Moneda operator + (float x)const;
    Moneda operator - (float x)const;

    Moneda operator + (const Moneda &moneda)const;
    Moneda operator - (const Moneda &moneda)const;

    void operator += (float x);
    void operator -= (float x);

    void operator += (const Moneda &moneda);
    void operator -= (const Moneda &moneda);

    friend Moneda operator + (float x,const Moneda &moneda);
    friend Moneda operator - (float x,const Moneda &moneda);

    friend ostream& operator << (ostream &stream,const Moneda &moneda);
    friend istream& operator >> (istream &stream,Moneda &moneda);
};
