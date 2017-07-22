#ifndef EMPLEADOXHORAS_HEADER
#define EMPLEADOXHORAS_HEADER

#include "Empleado.hpp"

#include <iostream>

using namespace std;

class EmpleadoXHoras: public Empleado
{
private:
    double pago;
    double horas;

public:
    EmpleadoXHoras(const char *nombre,const char *apellido,double pago,double horas);
    void imprimir()const;
    double get_salario_diario()const;
};

#endif // EMPLEADOXHORAS_HEADER
