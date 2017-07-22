#include "persona.hpp"

using namespace std;

char* Persona::duplicar_cadena(const char *cadena)
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

Persona::Persona(int dni,const char *nombre,const char *apellido,const Fecha &fecha_de_nacimiento)
{
    this->dni=dni;

    if(nombre)
        strcpy(this->nombre,nombre);
    else
        this->nombre[0]='\0';

    if(apellido)
    {
        try
        {
            this->apellido=new char[strlen(apellido)+1];
            strcpy(this->apellido,apellido);
        }
        catch(bad_alloc&)
        {
            this->apellido=NULL;
            cout << endl << "No hay memoria \a\a" << endl;
        }
    }
    else
        this->apellido=NULL;

    this->fecha_de_nacimiento=fecha_de_nacimiento;
}

Persona::Persona(const Persona &persona)
{
    dni=persona.dni;
    strcpy(nombre,persona.nombre);
    apellido=duplicar_cadena(persona.apellido);
    fecha_de_nacimiento=persona.fecha_de_nacimiento;
}

Persona::~Persona()
{
    delete[] apellido;
}

Persona& Persona:: operator = (const Persona &persona)
{
    dni=persona.dni;
    strcpy(nombre,persona.nombre);
    apellido=duplicar_cadena(persona.apellido);
    fecha_de_nacimiento=persona.fecha_de_nacimiento;
    return *this;
}

int Persona::get_dni()const
{
    return dni;
}

const char* Persona::get_nombre()const
{
    return nombre;
}

char* Persona::get_apellido()const
{
    return apellido;
}

Fecha Persona::get_fecha_de_nacimiento()const
{
    return duplicar_cadena(fecha_de_nacimiento);
}

void Persona::set_dni(int dni)
{
    this->dni=dni;
}

void Persona::set_nombre(const char *nombre)
{
    if(nombre)
        strcpy(this->nombre,nombre);
    else
        this->nombre[0]='\0';
}

void Persona::set_apellido(const char *apellido)
{
    delete[]this->apellido;
    if(apellido)
    {
        try
        {
            this->apellido=new char[strlen(apellido)+1];
            strcpy(this->apellido,apellido);
        }
        catch(bad_alloc&)
        {
            this->apellido=NULL;
            cout << endl << "No hay memoria \a\a" << endl;
        }
    }
    else
        this->apellido=NULL;
}

void Persona::set_fecha_de_nacimiento(const Fecha &fecha)
{
    this->fecha_de_nacimiento=fecha_de_nacimiento;
}

ostream& operator << (ostream &stream,const Persona &persona)
{
    stream << endl << "DNI: \t\t\t" << persona.dni;
    stream << endl << "Nombre: \t\t" << persona.nombre;
    stream << endl << "Apellido: \t\t" << persona.apellido;
    stream << endl << "Fecha de nacimiento: \t" << persona.fecha_de_nacimiento;
    return stream;
}

istream& operator >> (istream &stream,Persona &persona)
{
    char aux[50];
    cout << endl << "Ingrese DNI: \t\t\t";
    stream >> persona.dni;
    cout << endl << "Ingrese nombre: \t\t";
    stream.ignore(30,'\n');
    stream.getline(persona.nombre,30);
    cout << endl << "Ingrese apellido: \t\t";
    stream.getline(aux,50);
    delete[]persona.apellido;
    persona.apellido=Persona::duplicar_cadena(aux);
    cout << endl << "Ingrese fecha de nacimiento: \t";
    stream >> persona.fecha_de_nacimiento;
    return stream;
}

