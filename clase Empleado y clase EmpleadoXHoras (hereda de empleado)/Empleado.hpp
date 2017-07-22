#ifndef EMPLEADO_HEADER
#define EMPLEADO_HEADER

#include <iostream>

using namespace std;

class Empleado
{
private:
    char *nombre;
    char *apellido;

public:
    Empleado(const char *nombre,const char *apellido);
    ~Empleado();
    void imprimir()const;
};

#endif // EMPLEADO_HEADER
