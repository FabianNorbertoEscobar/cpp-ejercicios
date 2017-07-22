#include "moneda.hpp"

using namespace std;

string Moneda::simbolo_ar="AR$";
string Moneda::simbolo_usd="US$";
string Moneda::simbolo_rs="RS$";
string Moneda::simbolo_uyu="UYU$";

float Moneda::valor_ar=1;
float Moneda::valor_usd=1;
float Moneda::valor_rs=1;
float Moneda::valor_uyu=1;

int Moneda::seleccionar_tipo()
{
    int tipo;
    bool flag=false;
    do
    {
        if(flag==true)
            cout << endl << "Tipo incorrecto \a\a" << endl;
        cout << endl << "Seleccione uno de estos tipos: \a\a" <<endl;
        cout << "1- Peso argentino" << endl << "2- Dólar" << endl << "3- Real" << endl << "4- Peso Uruguayo" << endl;
        cin >> tipo;
        flag=true;
    }
    while(!DATO_VALIDO(tipo,1,4));
    return tipo-1;
}

Moneda::Moneda(float valor,int tipo)
{
    this->valor=valor;
    this->tipo=tipo;
}

Moneda::Moneda(const Moneda &moneda)
{
    this->valor=moneda.valor;
    this->tipo=moneda.tipo;
}

void Moneda::convertir(int tipo)
{
    valor=valor*get_valor_moneda(this->tipo)/get_valor_moneda(tipo);
    this->tipo=tipo;
}

float Moneda::get_valor()const
{
    return valor;
}

float Moneda::get_valor(int tipo)const
{
    if(this->tipo==tipo)
        return valor;
    return valor*get_valor_moneda(this->tipo)/get_valor_moneda(tipo);
}

void Moneda::set_valor_moneda(int tipo,float valor)
{
    switch(tipo)
    {
    case MONEDA_ar:
        valor_ar=valor;
        break;

    case MONEDA_usd:
        valor_usd=valor;
        break;

    case MONEDA_rs:
        valor_rs=valor;
        break;

    case MONEDA_uyu:
        valor_uyu=valor;
        break;
    }
}

float Moneda::get_valor_moneda(int tipo)
{
    switch(tipo)
    {
    case MONEDA_ar:
        return valor_ar;

    case MONEDA_usd:
        return valor_usd;

    case MONEDA_rs:
        return valor_rs;

    case MONEDA_uyu:
        return valor_uyu;

    default:
        return 0;
    }
}

void Moneda::set_simbolo(int tipo,string simbolo)
{
    switch(tipo)
    {
    case MONEDA_ar:
        simbolo_ar=simbolo;
        break;

    case MONEDA_usd:
        simbolo_usd=simbolo;
        break;

    case MONEDA_rs:
        simbolo_rs=simbolo;
        break;

    case MONEDA_uyu:
        simbolo_uyu=simbolo;
        break;
    }
}

string Moneda::get_simbolo(int tipo)
{
    switch(tipo)
    {
    case MONEDA_ar:
        return simbolo_ar;

    case MONEDA_usd:
        return simbolo_usd;

    case MONEDA_rs:
        return simbolo_rs;

    case MONEDA_uyu:
        return simbolo_ar;

    default:
        return "";
    }
}

bool Moneda:: operator > (const Moneda &moneda)const
{
    return valor > moneda.get_valor(tipo);
}

bool Moneda:: operator < (const Moneda &moneda)const
{
    return valor < moneda.get_valor(tipo);
}

bool Moneda:: operator >= (const Moneda &moneda)const
{
    return valor >= moneda.get_valor(tipo);
}

bool Moneda:: operator <= (const Moneda &moneda)const
{
    return valor <= moneda.get_valor(tipo);
}

bool Moneda:: operator == (const Moneda &moneda)const
{
    return valor == moneda.get_valor(tipo);
}

bool Moneda:: operator != (const Moneda &moneda)const
{
    return valor != moneda.get_valor(tipo);
}

Moneda Moneda:: operator + (float x)const
{
    return Moneda(valor+x,tipo);
}

Moneda Moneda:: operator - (float x)const
{
    return Moneda(valor-x,tipo);
}

Moneda Moneda:: operator + (const Moneda &moneda)const
{
    return Moneda(valor+moneda.get_valor(tipo),tipo);
}

Moneda Moneda:: operator - (const Moneda &moneda)const
{
    return Moneda(valor-moneda.get_valor(tipo),tipo);
}

void Moneda:: operator += (float x)
{
    valor+=x;
}

void Moneda:: operator -= (float x)
{
    valor-=x;
}

void Moneda:: operator += (const Moneda &moneda)
{
    valor+=moneda.get_valor(tipo);
}

void Moneda:: operator -= (const Moneda &moneda)
{
    valor-=moneda.get_valor(tipo);
}

Moneda operator + (float x,const Moneda &moneda)
{
    return Moneda(moneda.get_valor()+x/Moneda::get_valor_moneda(moneda.tipo),moneda.tipo);
}

Moneda operator - (float x,const Moneda &moneda)
{
    return Moneda(moneda.get_valor()-x/Moneda::get_valor_moneda(moneda.tipo),moneda.tipo);
}

ostream& operator << (ostream &stream,const Moneda &moneda)
{
    return stream << fixed << setprecision(2) << Moneda::get_simbolo(moneda.tipo) << " " <<moneda.get_valor();
}

istream& operator >> (istream &stream,Moneda &moneda)
{
    moneda.tipo=Moneda::seleccionar_tipo();
    cout << endl << "Ingrese el valor: \t \a\a";
    stream >> moneda.valor;
    return stream;
}
