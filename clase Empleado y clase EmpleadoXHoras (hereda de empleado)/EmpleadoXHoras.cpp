#include "EmpleadoXHoras.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

EmpleadoXHoras::EmpleadoXHoras(const char *nombre,const char *apellido,double pago,double horas): Empleado(nombre,apellido)
{
    this->pago=pago;
    this->horas=horas;
}

void EmpleadoXHoras::imprimir()const
{
    cout << endl;
    Empleado::imprimir();   // se debe utilizar el operador de resolución de alcance para no caer en una recursividad infinita
    cout << " es un empleado por horas, con salario diario: $" << setprecision(2) << setiosflags(ios::fixed|ios::showpoint) << get_salario_diario() << endl;
}

double EmpleadoXHoras::get_salario_diario()const
{
    return pago*horas;
}
