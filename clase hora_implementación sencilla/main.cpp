#include <iostream>
#include <clocale>

#include "hora.hpp"

using namespace std;

// Controlador para probar la clase simple Hora
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    Hora h; // instancia el objeto h de la clase Hora

    cout << endl << "\t\t CLASE HORA" << endl;

    cout << endl << "La hora militar inicial es ";
    h.imprimeMilitar();
    cout << endl << "La hora estándar inicial es ";
    h.imprimeEstandar();

    h.estableceHora( 13, 27, 6 );
    cout << endl << endl << "La hora militar después de estableceHora es ";
    h.imprimeMilitar();
    cout << endl << "La hora estándar después de estableceHora es ";
    h.imprimeEstandar();

    h.estableceHora( 99, 99, 99 ); // intenta establecer valores inválidos
    cout << endl << endl << "Después de intentar establecer valores inválidos:"
         << endl << "Hora militar:";
    h.imprimeMilitar();
    cout << endl << "Hora estándar:";
    h.imprimeEstandar();
    cout << endl;
    return 0;
} // fin de la función main
