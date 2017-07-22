#include "fecha.h"  /////////////lleva .h porque no tiene ningun espacio de nombre definido

const char Fecha :: FORM_JAP = 'J';
const char Fecha :: FORM_ING ='I';

 ///constructores

/*Fecha :: Fecha(int d, int m, int a) //////////pasar dia, mes, y anio, despues de validar la fecha
{
    /////1: validacion de fecha
    if(esFechaValida(d, m, a))
        diaRel = diaMesAnioANum(d, m, a);
    else         //////////se puede poner diaRel en uno, o se devuelve un error(todavia no)
        diaRel = 1;
}
*/

/*Fecha :: Fecha(const Fecha & fch)
{
    this->diaRelfch.diaRel;
}
no es necesario definirlo ya que lo hace C::B por defecto*/  ////constructor por copia: lo define C::B

Fecha :: Fecha(long diaRel, char formato):formato(formato) ///////hacer
{
    this->diaRel = diaRel;
}

Fecha :: Fecha(int d, int m, int a, char form):formato(form)
{
    if(esFechaValida(d, m, a))
        diaRel = diaMesAnioANum(d, m, a);
    else         //////////se puede poner diaRel en uno, o se devuelve un error(todavia no)
        diaRel = 1;
}

///metodos de la clase

long Fecha :: diaMesAnioANum(int d, int m, int a)////////clase a la que pertenece :: nombre del metodo
{
    int ca = a - 1601;
    return 365 * ca + ca / 4 + ca / 100 + ca / 400 + diaJuliano(d, m, a);
}

int Fecha :: cantidadDiasMes(int m, int a)
{
    int meses[12] = {31, 28, 31, 30,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31};
    if(m == 2 && (ESBISIESTO(a)))
        return 29;
    return meses[m-1];

}

long Fecha :: diaJuliano(int d, int m, int a)
{
    int diasQuePasaron = 0, i;
    for(i = 1; i < m; i++)
        diasQuePasaron += cantidadDiasMes(i, a);
    return d + diasQuePasaron;
}

bool Fecha :: esFechaValida(int d, int m, int a)
{
    if(a >= 1601)
        if(m >= 1 && (ESBISIESTO(a)))
            if(d >= 1 && d <= cantidadDiasMes(m, a))
                return true;
    return false;
}

void Fecha ::  mostrarDiaRel()
{
    /////Fecha fch = *this;
    ////cout << fch.diaRel;
    cout << this->diaRel;
    cout << diaRel;
}

void Fecha :: getDMA(int & d, int & m, int & a)const
{
    getJuliano(d, a);
    julAGregoriano(d, m, a);
}

void Fecha :: getJuliano(int & d, int & a)const
{
    int ca = diaRel / 365; ////// n años
    int dd = 365 * ca + ca / 4 + ca / 100 + ca / 400; ///////cantidad de dias de n años
    while(diaRel < dd)
    {
        ca--;
        dd = 365 * ca + ca / 4 + ca / 100 + ca / 400;
    }
    a = ca + 1601;
    d =diaRel - dd;
}

void Fecha :: julAGregoriano(int & d, int & m, int & a)
{
    int cd;
    m=1;
    while(d > (cd = Fecha::cantidadDiasMes(m, a)))
    {
        m++;
        d-=cd;
    }
}

///sobrecarga de operadores

Fecha Fecha :: operator  + (int d) const
{
    return Fecha (this->diaRel + d);
}

Fecha& Fecha :: operator = (const Fecha & fch)
{
    diaRel = fch.diaRel;
    return *this;
}

/*bool Fecha :: operator >= (const Fecha & fch)
{

}*/

long Fecha :: operator - (const Fecha & fch)const
{
    return this->diaRel - fch.diaRel;
}

Fecha Fecha :: operator - (int d)
{
    return this->diaRel -= d;
}

Fecha & Fecha :: operator ++()
{
    this->diaRel++;
    return *this;
}

Fecha Fecha :: operator ++(int)
{
    Fecha fch (this->diaRel, 'E');
    this->diaRel++;
    return fch;
}

///funciones friend

Fecha operator +(int d, const Fecha& fch)
{
    return Fecha(fch.diaRel + d);
}

ostream & operator <<(ostream & sal, const Fecha & fch)
{
    int d, m, a;
    fch.getDMA(d, m, a);
    ////la salida se debe hacer de acuerdo al formato de fch
    sal << d << '/' << m << '/' << a;
    return sal;

}

istream & operator >>(istream & ent, Fecha & fch)
{
    int d, m, a; char c; ////el char es un auxiliar unicamente
    ent >> d >> c >> m >> c >> a;
    fch.diaRel = Fecha :: diaMesAnioANum(d, m, a); //se debe utilizar :: porque la funcion es static
    return ent;
}
