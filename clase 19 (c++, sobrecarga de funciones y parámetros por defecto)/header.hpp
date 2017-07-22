#include <iostream>

#include<cstdlib>
#include<clocale>

using namespace std;

void fc(int);
void fc(float,char,int);
void fc(char*,char);
void fc(void);
void fc(int,int,int);
void fc(float,int);

typedef struct
{
    int d,
        m,
        a;
}t_fecha;

void mostrar_datos(int,char*,char,t_fecha,float);
//void mostrarDatos(int legajo,char *categoria); // No puedo sobrecargar la funcion ya que no se puede interpretar el tipo de uno y otro
