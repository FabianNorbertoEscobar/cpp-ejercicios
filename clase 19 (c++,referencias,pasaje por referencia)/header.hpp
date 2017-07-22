#include <iostream>

#include<cstdlib>
#include<clocale>

using namespace std;

void intercambio_enteros_con_punteros(int*,int*);
void intercambio_enteros_con_referencias(int&,int&);

typedef struct
{
    int d,
        m,
        a;
}t_fecha;

void mostrar_fecha(const t_fecha&);

t_fecha &sumar_1_dia(const t_fecha&);
