#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<clocale>
#include<string.h>

#include "fecha.h"

using namespace std;

class Persona
{
private:

    int dni;
    char nombre[30];
    char *apellido;
    Fecha fecha_de_nacimiento;

    static char* duplicar_cadena(const char *cadena);

public:

    Persona(int dni=0,const char *nombre=NULL,const char *apellido=NULL,const Fecha &fecha_de_nacimiento=Fecha());
    Persona(const Persona &persona);

    ~Persona();

    Persona &operator = (const Persona &persona);

    int get_dni()const;
    const char* get_nombre()const;
    char* get_apellido()const;
    Fecha get_fecha_de_nacimiento()const;

    void set_dni(int dni);
    void set_nombre(const char *nombre);
    void set_apellido(const char *apellido);
    void set_fecha_de_nacimiento(const Fecha &fecha_de_nacimiento);

    friend ostream& operator << (ostream &stream,const Persona &persona);
    friend istream& operator >> (istream &stream,Persona &persona);
};
