#include "hora.h"

const int Hora::seg_rel_max=86400;
int Hora::uso_horario_por_defecto=-3;

void Hora::normalizar()
{
    while(seg_rel<0)
        seg_rel+=seg_rel_max;
    seg_rel%=seg_rel_max;
}

int Hora::hora_formato_12_hs(int h)const
{
    return (h>=1&&h<=12)?h:(h==0)?12:h-12;
}

Hora::Hora()
{
    seg_rel=0;
}

Hora::Hora(int h,int m,int s)
{
    seg_rel=h*3600+m*60+s;
    normalizar();
}

Hora::Hora(const Hora &hora)
{
    seg_rel=hora.seg_rel;
}

void Hora::sumar_segundos(int s)
{
    seg_rel+=s;
    normalizar();
}

void Hora::restar_segundos(int s)
{
    seg_rel-=s;
    normalizar();
}

void Hora::sumar_minutos(int m)
{
    seg_rel+=m*60;
    normalizar();
}

void Hora::restar_minutos(int m)
{
    seg_rel-=m*60;
    normalizar();
}

void Hora::sumar_horas(int h)
{
    seg_rel+=h*3600;
    normalizar();
}

void Hora::restar_horas(int h)
{
    seg_rel-=h*3600;
    normalizar();
}

void Hora::sumar_dos_horarios(const Hora &hora)
{
    seg_rel+=hora.seg_rel;
    normalizar();
}

void Hora::restar_dos_horarios(const Hora &hora)
{
    seg_rel-=hora.seg_rel;
    normalizar();
}

void Hora::imprimir_hora_formato_24_hs()const
{
    cout<<endl<<seg_rel/3600<<":"<<seg_rel%3600/60<<":"<<seg_rel%60<<endl;
}

void Hora::imprimir_hora_formato_12_hs()const
{
    cout<<endl<<hora_formato_12_hs(seg_rel/3600)<<":"<<seg_rel%3600/60<<":"<<seg_rel%60<<((seg_rel<seg_rel_max/2)?" a.m.":" p.m.")<<endl;
}

bool Hora::es_hora_valida(int h,int m,int s)
{
    return h>=0&&h<=23&&m>=0&&m<=59&&s>=0&&s<=59;
}

void Hora::set_uso_horario_por_defecto(int uso)
{
    uso_horario_por_defecto=uso;
}

int Hora::get_uso_horario_por_defecto()
{
    return uso_horario_por_defecto;
}

Hora Hora::operator+(int n)const
{
    return Hora(0,0,seg_rel+n);
}

Hora Hora::operator+(const Hora &hora)const
{
    return Hora(0,0,seg_rel+hora.seg_rel);
}

Hora Hora::operator-(int n)const
{
    return Hora(0,0,seg_rel-n);
}

Hora Hora::operator-(const Hora &hora)const
{
    return Hora(0,0,seg_rel-hora.seg_rel);
}

bool Hora::operator<(const Hora &hora)const
{
    return seg_rel<hora.seg_rel;
}

bool Hora::operator>(const Hora &hora)const
{
    return seg_rel>hora.seg_rel;
}

bool Hora::operator<=(const Hora &hora)const
{
    return seg_rel<=hora.seg_rel;
}

bool Hora::operator>=(const Hora &hora)const
{
    return seg_rel>=hora.seg_rel;
}

bool Hora::operator==(const Hora &hora)
{
    return seg_rel==hora.seg_rel;
}

bool Hora::operator!=(const Hora &hora)
{
    return seg_rel!=hora.seg_rel;
}

Hora Hora::operator+=(const Hora &hora)
{
    seg_rel+=hora.seg_rel;
    normalizar();
    return *this;
}

Hora Hora::operator-=(const Hora &hora)
{
    seg_rel-=hora.seg_rel;
    normalizar();
    return *this;
}

Hora& Hora::operator++()    //preincremento
{
    seg_rel++;
    normalizar();
    return *this;
}

Hora Hora::operator++(int)  //posincremento
{
    Hora aux(*this);
    seg_rel++;
    normalizar();
    return aux;
}

Hora& Hora::operator--()    //predecremento
{
    seg_rel--;
    normalizar();
    return *this;
}

Hora Hora::operator--(int)  //posdecremento
{
    Hora aux(*this);
    seg_rel--;
    normalizar();
    return aux;
}

Hora operator+(int n,const Hora &hora)
{
    return Hora(0,0,hora.seg_rel+n);
}

Hora operator-(int n,const Hora &hora)
{
    return Hora(0,0,hora.seg_rel-n);
}

ostream& operator<<(ostream &stream,const Hora &hora)
{
    return stream<<(hora.seg_rel/3600)<<":"<<((hora.seg_rel%3600)/60)<<":"<<(hora.seg_rel%60);
}

istream& operator>>(istream &stream,Hora &hora)
{
    int h,m,s;
    char c;
    stream>>h>>c>>m>>c>>s;
    Hora aux(h,m,s);
    hora=aux;
    return stream;
}
