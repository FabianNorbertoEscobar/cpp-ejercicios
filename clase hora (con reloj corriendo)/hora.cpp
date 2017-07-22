#include "hora.h"

using namespace std;

int Hora::seg_rel_max=86400;

void Hora::normalizar()
{
    while(seg_rel>=seg_rel_max)
        seg_rel-=seg_rel_max;
    while(seg_rel<0)
        seg_rel+=seg_rel_max;
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

Hora Hora::get_hora_maxima()
{
    return Hora(23,59,59);
}

bool Hora::operator >= (const Hora &hora)const
{
    return seg_rel >= hora.seg_rel;
}

bool Hora::operator < (const Hora &hora)const
{
    return seg_rel < hora.seg_rel;
}

Hora Hora::operator ++ (int x)
{
    Hora copia(*this);
    seg_rel++;
    normalizar();
    return copia;
}

Hora Hora::operator + (const Hora &hora)const
{
    return Hora(0,0,seg_rel+hora.seg_rel);
}

void Hora::operator += (int seg)
{
    seg_rel+=seg;
    normalizar();
}

Hora operator + (int seg,const Hora &hora)
{
    return Hora(0,0,seg+hora.seg_rel);
}

ostream& operator << (ostream &stream,const Hora &hora)
{
    return stream << hora.seg_rel/3600 << ":" << hora.seg_rel%3600/60 << ":" << hora.seg_rel%60;
}

istream& operator >> (istream &stream,Hora &hora)
{
    char c;
    int h,m,s;

    stream >> h >> c >> m >> c >> s;
    hora= Hora(h,m,s);

    return stream;
}
