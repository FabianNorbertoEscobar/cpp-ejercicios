#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<clocale>
#include<string.h>

using namespace std;

class Producto;

class Bulto
{
private:

    char *descripcion;
    float alto;
    float ancho;
    float largo;

    static char* duplicar_cadena(const char *cadena);

public:

    Bulto(const char *descripcion,const float alto,const float ancho,const float largo);
    Bulto(const Bulto &bulto);

    ~Bulto();

    Bulto& operator = (const Bulto &bulto);

    Bulto& operator + (const Producto &producto);

    char* get_descripcion()const;
    float get_alto()const;
    float get_ancho()const;
    float get_largo()const;
    float get_volumen()const;

    friend ostream& operator << (ostream &stream,const Bulto &bulto);
    friend istream& operator >> (istream &stream,Bulto &bulto);
};

class Producto
{
private:

    char descripcion[50];
    float alto;
    float ancho;
    float largo;

public:

    Producto(const char *descripcion,const float alto,const float ancho,const float largo);
    Producto(const Producto &producto);

    Bulto operator + (const Producto &producto);

    char* get_descripcion()const;
    float get_alto()const;
    float get_ancho()const;
    float get_largo()const;

    friend ostream& operator << (ostream &stream,const Producto &producto);
    friend istream& operator >> (istream &stream,Producto &producto);
};
