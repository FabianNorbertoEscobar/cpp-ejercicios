#include "fecha.h"

const int Fecha::dias_rel_max=3076971;

const int Fecha::inic_calend_greg=1600;

void Fecha::normalizar()
{
    dias_rel%=dias_rel_max;
    if(dias_rel==0)
        dias_rel=dias_rel_max;
}

Fecha::Fecha(int d,int m,int a)
{
    int cant_anios=a-inic_calend_greg-1;
    dias_rel=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400+dias_julianos(d,m,a);
    normalizar();
}

Fecha::Fecha(const Fecha &fecha)
{
    dias_rel=fecha.dias_rel;
}

int Fecha::get_dias_relativos()const
{
    return dias_rel;
}

void Fecha::julianos_a_gregorianos(int j,int &d,int &m,int a)
{
    int i=1,cant_dias=cant_dias_mes(i,a);
    while(j>cant_dias)
    {
        j-=cant_dias;
        i++;
        cant_dias=cant_dias_mes(i,a);
    }
    d=j;
    m=i;
}

int Fecha::get_dia()
{
    int d,cant_anios=dias_rel/365,cant_dias=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400;
    while(cant_dias>=dias_rel)
    {
        cant_anios--;
        cant_dias=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400;
    }
    julianos_a_gregorianos(dias_rel-cant_dias,d,cant_anios,cant_anios+inic_calend_greg+1);
    return d;
}

int Fecha::get_mes()
{
    int m,cant_anios=dias_rel/365,cant_dias=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400;
    while(cant_dias>=dias_rel)
    {
        cant_anios--;
        cant_dias=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400;
    }
    julianos_a_gregorianos(dias_rel-cant_dias,cant_anios,m,cant_anios+inic_calend_greg+1);
    return m;
}

int Fecha::get_anio()
{
    int cant_anios=dias_rel/365,cant_dias=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400;
    while(cant_dias>=dias_rel)
    {
        cant_anios--;
        cant_dias=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400;
    }
    return cant_anios+inic_calend_greg+1;
}

void Fecha::get_dia_mes_anio(int &d,int &m,int &a)
{
    int cant_anios=dias_rel/365,cant_dias=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400;
    while(cant_dias>=dias_rel)
    {
        cant_anios--;
        cant_dias=cant_anios*365+cant_anios/4-cant_anios/100+cant_anios/400;
    }
    a=cant_dias+inic_calend_greg+1;
    julianos_a_gregorianos(dias_rel-cant_dias,d,m,a);
}

Fecha Fecha::get_fecha_anterior()const
{
    Fecha nueva(*this);
    nueva.dias_rel++;
    nueva.normalizar();
    return nueva;
}

Fecha Fecha::get_fecha_siguiente()const
{
    Fecha nueva(*this);
    nueva.dias_rel--;
    nueva.normalizar();
    return nueva;
}

void Fecha::sumar_un_dia()
{
    dias_rel++;
    normalizar();
}

void Fecha::restar_un_dia()
{
    dias_rel--;
    normalizar();
}

void Fecha::sumar_dias(int d)
{
    dias_rel+=d;
    normalizar();
}

void Fecha::restar_dias(int d)
{
    dias_rel-=d;
    normalizar();
}

Fecha Fecha::get_fecha_del_sistema()
{
    Fecha aux;
    int d,m,a;
    time_t tiempo=time(0);
    struct tm *t_local=localtime(&tiempo);
    char output[128];
    strftime(output,128,"%d/%m/%Y",t_local);
    sscanf(output,"%d/%d/%d",&d,&m,&a);
    aux.dias_rel=dias_gregorianos(d,m,a);
    return aux;
}

int Fecha::dias_julianos(int d,int m,int a)
{
    int i,julianos=d;
    for(i=1;i<m;i++);
    julianos+=cant_dias_mes(i,a);
    return julianos;
}

int Fecha::dias_gregorianos(int d,int m,int a)
{
    int dia=1,mes=1,anio=inic_calend_greg,dif_anios=a-anio,dias_bisiestos=0,i,greg;
    for(i=anio;i<a;i++)
        if(Fecha::es_bisiesto(i))
            dias_bisiestos++;
    greg=dif_anios*365+dias_bisiestos;
    greg+=Fecha::dias_julianos(d,m,a)-Fecha::dias_julianos(dia,mes,anio);
    return greg;
}

int Fecha::cant_dias_mes(int m,int a)
{
    int dias[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    return dias[m-1]+(m==2)?(es_bisiesto(a)?1:0):0;
}

bool Fecha::es_fecha_valida(int d,int m,int a)
{
    return a>=inic_calend_greg&&m>=0&&m<=12&&d>=0&&d<=cant_dias_mes(m,a);
}

bool Fecha::es_bisiesto(int a)
{
    return (a%4==0&&a%100!=0)||a%400==0;
}

int Fecha::calcular_edad(int d_nac,int m_nac,int a_nac)
{
    int edad,d_act,m_act,a_act;
    Fecha act=Fecha::get_fecha_del_sistema();
    act.get_dia_mes_anio(d_act,m_act,a_act);
    edad=a_act-a_nac;
    if(m_act<m_nac||(m_act==m_nac&&d_act<d_nac))
        edad--;
    return edad;
}

Fecha Fecha::operator+(int d)const
{
    return Fecha(dias_rel+d);
}

Fecha Fecha::operator+(const Fecha &fecha)const
{
    return Fecha(dias_rel+fecha.dias_rel);
}

Fecha Fecha::operator-(int d)const
{
    return Fecha(dias_rel-d);
}

Fecha Fecha::operator-(const Fecha &fecha)const
{
    return Fecha(dias_rel-fecha.dias_rel);
}

bool Fecha::operator<(const Fecha &fecha)const
{
    return dias_rel<fecha.dias_rel;
}

bool Fecha::operator>(const Fecha &fecha)const
{
    return dias_rel>fecha.dias_rel;
}

bool Fecha::operator<=(const Fecha &fecha)const
{
    return dias_rel<=fecha.dias_rel;
}

bool Fecha::operator>=(const Fecha &fecha)const
{
    return dias_rel>=fecha.dias_rel;
}

bool Fecha::operator==(const Fecha &fecha)const
{
    return dias_rel==fecha.dias_rel;
}

bool Fecha::operator!=(const Fecha &fecha)const
{
    return dias_rel!=fecha.dias_rel;
}

Fecha& Fecha::operator+=(int d)
{
    dias_rel+=d;
    normalizar();
    return *this;
}

Fecha& Fecha::operator+=(const Fecha &fecha)
{
    dias_rel+=fecha.dias_rel;
    normalizar();
    return *this;
}

Fecha& Fecha::operator-=(int d)
{
    dias_rel-=d;
    normalizar();
    return *this;
}

Fecha& Fecha::operator-=(const Fecha &fecha)
{
    dias_rel-=fecha.dias_rel;
    normalizar();
    return *this;
}

Fecha& Fecha::operator++()      //preincremento
{
    dias_rel++;
    normalizar();
    return *this;
}

Fecha Fecha::operator++(int)        //posincremento
{
    Fecha aux(*this);
    dias_rel++;
    normalizar();
    return aux;
}

Fecha& Fecha::operator--()      //predecremento
{
    dias_rel--;
    normalizar();
    return *this;
}

Fecha Fecha::operator--(int)        //posdecremento
{
    Fecha aux(*this);
    dias_rel--;
    normalizar();
    return *this;
}

Fecha operator+(int d,const Fecha &fecha)
{
    return Fecha(fecha.dias_rel+d);
}

Fecha operator-(int d,const Fecha &fecha)
{
    return Fecha(fecha.dias_rel-d);
}

ostream& operator<<(ostream &stream,Fecha &fecha)
{
    int d,m,a;
    fecha.get_dia_mes_anio(d,m,a);
    return stream<<d<<"/"<<m<<"/"<<a;
}

istream& operator>>(istream &stream,Fecha &fecha)
{
    int d,m,a;
    char c;
    stream>>d>>c>>m>>c>>a;
    Fecha aux(d,m,a);
    fecha=aux;
    return stream;
}
