#include "bulto y producto.hpp"

using namespace std;

Producto::Producto(const char *descripcion,const float alto,const float ancho,const float largo)
{
    if(descripcion)
        strcpy(this->descripcion,descripcion);
    else
        this->descripcion[0]='\0';

    this->alto=alto;
    this->ancho=ancho;
    this->largo=largo;
}

Producto::Producto(const Producto &producto)
{
    if(producto.descripcion&&*producto.descripcion!='\0')
        strcpy(descripcion,producto.descripcion);
    else
        descripcion[0]='\0';

    alto=producto.alto;
    ancho=producto.ancho;
    largo=producto.largo;
}

Bulto Producto::operator + (const Producto &producto)
{
    char *aux;

    if(producto.descripcion&&*producto.descripcion!='\0')
    {
       try
        {
            aux=new char[strlen(descripcion)+1+strlen(producto.descripcion)+1];
            strcpy(aux,descripcion);
            strcat(aux,"|");
            strcat(aux,producto.descripcion);
        }
        catch(bad_alloc&)
        {
            aux=NULL;
            cout << endl << endl << "No hay memoria \a\a" << endl << endl;
        }
    }
    else
        aux=NULL;

    return Bulto(aux,alto+producto.alto,ancho+producto.ancho,largo+producto.largo);
}

char* Producto::get_descripcion()const
{
    return (char*)descripcion;
}

float Producto::get_alto()const
{
    return alto;
}

float Producto::get_ancho()const
{
    return ancho;
}

float Producto::get_largo()const
{
    return largo;
}

ostream& operator << (ostream &stream,const Producto &producto)
{
    stream << endl << "Descripción: \t" << producto.descripcion;
    stream << endl << "Alto: \t\t" << producto.alto;
    stream << endl << "Ancho: \t\t" << producto.ancho;
    stream << endl << "Largo: \t\t" << producto.largo;
    return stream;
}

istream& operator >> (istream &stream,Producto &producto)
{
    cout << endl << "Ingrese descripción: \t";
    stream.ignore(30,'\n');
    stream.getline(producto.descripcion,30);
    cout << endl << "Ingrese alto: \t\t";
    stream >> producto.alto;
    cout << endl << "Ingrese ancho: \t\t";
    stream >> producto.ancho;
    cout << endl << "Ingrese largo: \t\t";
    stream >> producto.largo;
    return stream;
}
