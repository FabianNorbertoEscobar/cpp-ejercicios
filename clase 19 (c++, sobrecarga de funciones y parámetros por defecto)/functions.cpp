#include "header.hpp"

//gracias a la sobrecarga de funciones pueden convivir todas estas funciones
void fc(int x)
{
    cout<<"Hola mundo"<<endl;
}

void fc(float x,char y,int z)
{
    cout<<"Hola mundo"<<endl;
}

void fc(char *x,char y)
{
    cout<<"Hola mundo"<<endl;
}

void fc(void)
{
    cout<<"Hola mundo"<<endl;
}

void fc(int x,int y,int z)
{
    cout<<"Hola mundo"<<endl;
}

void fc(float x,int y)
{
    cout<<"Hola mundo"<<endl;
}


//---------------------------

//función con parámetros por defecto

void mostrar_datos(int dni,char *apyn="indeterminado",char sexo='I',t_fecha fing={31,12,9999},float sueldo=0.0)
{
    cout<<dni<<endl<<apyn<<endl<<sueldo<<endl<<sexo<<endl<<fing.d<<"/"<<fing.m<<"/"<<fing.a<<endl;
}
