#include "bulto y producto.hpp"

using namespace std;

char* Bulto::duplicar_cadena(const char *cadena)
{
    char *copia;
    if(cadena&&*cadena!='\0')
    {
        try
        {
            copia=new char[strlen(cadena)+1];
            strcpy(copia,cadena);
        }
        catch(bad_alloc&)
        {
            copia=NULL;
            cout << endl << "No hay memoria \a\a" << endl;
        }
    }
    else
        copia=NULL;
    return copia;
}

Bulto::Bulto(const char *descripcion,const float alto,const float ancho,const float largo)
{
    if(descripcion&&*descripcion!='\0')
    {
        try
        {
            this->descripcion=new char[strlen(descripcion)+1];
            strcpy(this->descripcion,descripcion);
        }
        catch(bad_alloc&)
        {
            this->descripcion=NULL;
            cout << endl << endl << "No hay memoria \a\a" << endl;
        }
    }
    else
        this->descripcion=NULL;

    this->alto=alto;
    this->ancho=ancho;
    this->largo=largo;
}

Bulto::Bulto(const Bulto &bulto)
{
    if(bulto.descripcion&&*bulto.descripcion!='\0')
    {
        try
        {
            descripcion=new char[strlen(bulto.descripcion)+1];
            descripcion=duplicar_cadena(bulto.descripcion);
        }
        catch(bad_alloc&)
        {
            descripcion=NULL;
            cout << endl << endl << "No hay memoria \a\a" << endl;
        }
    }
    else
        descripcion=NULL;

    alto=bulto.alto;
    ancho=bulto.ancho;
    largo=bulto.largo;
}

Bulto::~Bulto()
{
    delete[] descripcion;
}

Bulto& Bulto:: operator = (const Bulto &bulto)
{
    descripcion=duplicar_cadena(bulto.descripcion);
    alto=bulto.alto;
    ancho=bulto.ancho;
    largo=bulto.largo;
    return *this;
}

Bulto& Bulto::operator + (const Producto &producto)
{
    char *aux;
    if(producto.get_descripcion()&&*producto.get_descripcion()!='\0')
    {
       try
        {
            aux=new char[strlen(descripcion)+1+strlen(producto.get_descripcion())+1];
            strcpy(aux,descripcion);
            strcat(aux,"|");
            strcat(aux,producto.get_descripcion());
        }
        catch(bad_alloc&)
        {
            aux=NULL;
            cout << endl << endl << "No hay memoria \a\a" << endl << endl;
        }
    }
    else
        aux=NULL;

    delete[]descripcion;
    descripcion=aux;

    alto+=producto.get_alto();
    ancho+=producto.get_ancho();
    largo+=producto.get_largo();
    return *this;
}

char* Bulto::get_descripcion()const
{
    return descripcion;
}

float Bulto::get_alto()const
{
    return alto;
}

float Bulto::get_ancho()const
{
    return ancho;
}

float Bulto::get_largo()const
{
    return largo;
}

float Bulto::get_volumen()const
{
    return alto*ancho*largo;
}

ostream& operator << (ostream &stream,const Bulto &bulto)
{
    stream << endl << "Descripción: \t" << bulto.descripcion;
    stream << endl << "Alto: \t\t" << bulto.alto;
    stream << endl << "Ancho: \t\t" << bulto.ancho;
    stream << endl << "Largo: \t\t" << bulto.largo;
    return stream;
}

istream& operator >> (istream &stream,Bulto &bulto)
{
    char aux[50];
    cout << endl << "Ingrese descripción: \t";
    stream.getline(aux,50);
    delete[]bulto.descripcion;
    strcpy(bulto.descripcion,aux);
    cout << endl << "Ingrese alto: \t\t";
    stream >> bulto.alto;
    cout << endl << "Ingrese ancho: \t\t";
    stream >> bulto.ancho;
    cout << endl << "Ingrese largo: \t\t";
    stream >> bulto.largo;
    return stream;
}
