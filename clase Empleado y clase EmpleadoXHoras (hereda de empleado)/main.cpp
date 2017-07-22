#include "EmpleadoXHoras.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t CLASE EMPLEADO Y CLASE EMPLEADOXHORAS \a\a" << endl;

    cout << endl << "Redefinición de métodos de la clase base en la clase derivada" << endl;

    EmpleadoXHoras empleado("Juan","Perez",40,10);

    empleado.imprimir();

    return 0;
}
