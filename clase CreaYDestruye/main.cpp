// Demostración del orden en el que se llama a los constructores y a los destructores.
#include <iostream>

using std::cout;
using std::endl;

#include "CreaYDestruye.hpp"

void crea( void ); // prototipo

CreaYDestruye primero( 1 ); // objeto global

int main()
{
    cout << " (global creado antes de main)" << endl;

    CreaYDestruye segundo( 2 ); // objeto local
    cout << " (local automatico en main)" << endl;

    static CreaYDestruye tercero( 3 ); // objeto local
    cout << " (local estatico en main)" << endl;

    crea(); // llamada a función para crear objetos

    CreaYDestruye cuarto( 4 ); // objeto local
    cout << " (local automatico en main)" << endl;
    return 0;
} // fin de la función main

// Función para crear objetos
void crea( void )
{
    CreaYDestruye quinto( 5 );
    cout << " (local automatico en crea)" << endl;

    static CreaYDestruye sexto( 6 );
    cout << " (local estatico en crea)" << endl;

    CreaYDestruye septimo( 7 );
    cout << " (local automatico en crea)" << endl;
} // fin de la función crea
