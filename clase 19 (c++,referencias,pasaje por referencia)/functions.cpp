#include "header.hpp"

void intercambio_enteros_con_punteros(int *e1,int *e2)
{
    int aux=*e1;
    *e1=*e2;
    *e2=aux;
}
//en estta función recibo la dirección y declaro un puntero a esa dirección

void intercambio_enteros_con_referencias(int &e1,int &e2)
{
    int aux=e1;
    e1=e2;
    e2=aux;
}
//en esta función recibo la variable y declaro una referencia a esa variable

//las referencias también pueden ser constantes
void mostrar_fecha(const t_fecha &f)
{
    cout<<"Fecha: \t"<<f.d<<"/"<<f.m<<"/"<<f.a<<endl;
}
//para acceder a los miembros de una estructura se accede con punto, como si estuviese usando la variable struct original

t_fecha &sumar_1_dia(const t_fecha &f)
{
    t_fecha sig;
    sig=f;
    sig.d++;
    return sig;
}
//NO TIENE SENTIDO RETORNAR UNA REFERENCIA PORQUE SE ESTARÍA RETORNANDO UNA REFERENCIA A UNA VARIBLE LOCAL
//QUE OBVIAMENTE DESAPARECERÍA DE CUANDO TERMINA LA EJECUCIÓN DE LA FUNCIÓN
//SI BIEN EN ESTE CASO FUNCIONA Y SIRVE PARA CONCATENAR, SUELE NO FUNCIONAR Y ES UN ERROR DE CONCEPTO
//NO HACERLO-->tira warning
