#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <iostream>
#define ESBISIESTO(x) ((x)%4 == 0 && (x) % 100 != 0)||(x) % 400 == 0? 1:0

using namespace std;

class Fecha
{
private:

    ///atributos de la clase - privados

    long diaRel; //////dias relativos como un entero largo

    const char formato;   ////indica como se tiene que mostrar la fecha.

    ///metodos privados

    static long diaMesAnioANum(int d, int m, int a); //////se puede hacer tambien pr referencia constante

    static long diaJuliano(int d, int m, int a);

    static int cantidadDiasMes(int m, int a);

    ///constructor privado

    Fecha(long diaRel, char formato = 'E');


public:

    static const char FORM_JAP;

    static const char FORM_ING;

    ///constructores
    /*
         Fecha():formato('E')//////////constructor por defecto: no tiene ningun parametro
         {
             diaRel = 1;
         }
         */

    /*Fecha(const char formato = 'E'):formato(formato)  ///// formato(formato) : inicializador
    {
        diaRel = 1;
    }*/

    /*Fecha(int d, int m, int a);*/

    Fecha(const Fecha & fch); ///////constructor por copia

    Fecha(int d = 1, int m = 1, int a= 1601, char formato = 'E');

    /*Fecha(char form = 'E'):formato(form)
    {
        diaRel = 1;
    }*/

    /*Fecha(int d=1, int m = 1, int a = 1601); ////constructor por copia y por defecto. Es 2*1 :D*/

    ///metodos

    static bool esFechaValida(int d, int m, int a);

    void mostrarDiaRel();

    void getDMA(int & d, int & m, int & a)const;

    void getJuliano(int & d, int & a)const;

    void sumarDias(int d);

    void imprimirFecha()const;

    static void julAGregoriano(int & d, int & m, int & a);

    ///sobrecarga de operadores

    Fecha operator + (int d)const;

    Fecha & operator = (const Fecha & fch);

    bool operator >= (const Fecha & fch)const;

    long operator - (const Fecha & fch)const; //////// resta dos fechas -> diferencia de fechas entre dos dias, por eso devuelve un long

    Fecha operator - (int d);//////// resta un numero a una fecha -> resta dias a una fecha, por eso devuelve una fecha

    Fecha & operator ++();///////-> prefijo

    Fecha operator ++(int); ////////->diferencia postfijo de prefijo -> postfijo

    ///Funciones friend

    friend Fecha operator +(int d, const Fecha&fch); ////operator+(50, fch)

    friend ostream & operator <<(ostream&, const Fecha & fch);

    friend istream & operator >>(istream & ent, Fecha & fch);
};

/*ostream& operator <<(ostream & sal, const Fecha & fch)
{
    int d, m, a;
    fch.getDMA(d, m, a);
    sal << d << '/' << m << '/' << a;
    return sal;
}*/

#endif // FECHA_H_INCLUDED
