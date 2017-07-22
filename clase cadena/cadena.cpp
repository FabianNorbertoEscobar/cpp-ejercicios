#include "cadena.h"

using namespace std;

char* Cadena::duplicar_cadena(const char *cad)
{
    char *aux;

    if(cad&&*cad!='\0')
    {
        try
        {
            aux=new char[strlen(cad)+1];
            strcpy(aux,cad);
        }
        catch(bad_alloc&)
        {
            cout << endl << "No hay memoria \a\a" << endl;
            aux=NULL;
        }
    }
    else
        aux=NULL;

    return aux;
}

Cadena::Cadena(const char *cadena)
{
    if(cadena&&*cadena!='\0')
    {
        try
        {
            cad=new char[strlen(cadena)+1];
            strcpy(cad,cadena);
        }
        catch(bad_alloc&)
        {
            cout << endl << "No hay memoria \a\a" << endl;
            cad=NULL;
        }
    }
    else
        cad=NULL;
}

Cadena::Cadena(const Cadena &cadena)
{
    if(cadena.cad&&*cadena.cad!='\0')
    {
        try
        {
            cad=new char[strlen(cadena.cad)+1];
            cad=duplicar_cadena(cadena.cad);
        }
        catch(bad_alloc&)
        {
            cout << endl << "No hay memoria \a\a" << endl;
            cad=NULL;
        }
    }
    else
        cad=NULL;
}

Cadena::~Cadena()
{
    delete[] cad;
}

void Cadena:: operator = (const Cadena &cadena)
{
    delete[] cad;

    if(cadena.cad&&*cadena.cad!='\0')
    {
        try
        {
            cad=new char[strlen(cadena.cad)+1];
            cad=duplicar_cadena(cadena.cad);
        }
        catch(bad_alloc&)
        {
            cout << endl << "No hay memoria \a\a" << endl;
            cad=NULL;
        }
    }
    else
        cad=NULL;
}

bool Cadena:: operator == (const char *cad)const
{
    return strcmp(this->cad,cad)==0;
}

bool Cadena:: operator != (const Cadena &cadena)const
{
    return strcmp(cad,cadena.cad)!=0;
}

Cadena Cadena:: operator + (const Cadena &cadena)const
{
    char *aux;

    if(cadena.cad&&*cadena.cad!='\0')
    {
        try
        {
            aux=new char[strlen(cad)+strlen(cadena.cad)+1];
            strcpy(aux,cad);
            strcat(aux," ");
            strcat(aux,cadena.cad);
        }
        catch(bad_alloc&)
        {
            cout << endl << "No hay memoria \a\a" << endl;
        }
    }

    return Cadena(aux);
}

void Cadena:: operator += (const char *cad)
{
    char copia[100];
    strcpy(copia,this->cad);

    if(cad&&*cad!='\0')
    {
        try
        {
            this->cad=new char[strlen(this->cad)+strlen(cad)+1];
            strcpy(this->cad,copia);
            strcat(this->cad," ");
            strcat(this->cad,cad);
        }
        catch(bad_alloc&)
        {
            cout << endl << "No hay memoria \a\a" << endl;
        }
    }
}

Cadena operator + (const char *cad,const Cadena &cadena)
{
    Cadena nueva;

    if(cad&&*cad!='\0')
    {
        try
        {
            nueva.cad=new char[strlen(cad)+strlen(cadena.cad)+1];
            strcpy(nueva.cad,cad);
            strcat(nueva.cad," ");
            strcat(nueva.cad,cadena.cad);
        }
        catch(bad_alloc&)
        {
            cout << endl << "No hay memoria \a\a" << endl;
        }
    }

    return nueva;
}

ostream& operator << (ostream &stream,const Cadena &cadena)
{
    return stream << cadena.cad;
}

istream& operator >> (istream &stream,Cadena &cadena)
{
    char aux[50];
    stream.getline(aux,50);
    cadena.cad=Cadena::duplicar_cadena(aux);
    return stream;
}
