#include "Cilindro.hpp"

#include <iostream>
#include <iomanip>
#include <clocale>

using namespace std;

void apuntadorViaVirtual( const Figura *ptrClaseBase );
void referenciaViaVirtual( const Figura &refClaseBase );

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t CLASE ABSTRACTA FIGURA - POLIMORFISMO Y FUNCIONES VIRTUALES \a\a" << endl << endl;

    cout << setiosflags( ios::fixed | ios::showpoint )
         << setprecision( 2 );

    ///Figura figura; no se pueden instanciar objetos de una clase abstracta -> hacerlo provoca un error de sintaxis

    ///instancias de clases concretas
    Punto punto( 7, 11 ); // instancia Punto
    Circulo circulo( 3.5, 22, 8 ); // instancia Circulo
    Cilindro cilindro( 10, 3.3, 10, 10 ); // instancia Cilindro

    punto.imprime_nombre_figura(); // vinculación estática
    punto.imprime(); // vinculación estática
    cout << endl;

    circulo.imprime_nombre_figura(); // vinculación estática
    circulo.imprime(); // vinculación estática
    cout << endl;

    cilindro.imprime_nombre_figura(); // vinculación estática
    cilindro.imprime(); // vinculación estática
    cout << endl << endl;

    Figura *arregloDeFiguras[ 3 ]; // arreglo de apuntadores a la clase base

    // arregloDeFiguras[0] apunta al objeto Punto de la clase derivada
    arregloDeFiguras[ 0 ] = &punto;

    // arregloDeFiguras[1] apunta al objeto Circulo de la clase derivada
    arregloDeFiguras[ 1 ] = &circulo;

    // arregloDeFiguras[2] apunta al objeto Cilindro de la clase derivada
    arregloDeFiguras[ 2 ] = &cilindro;

    // Ciclo a través de arregloDeFiguras y llamada a apuntadorViaVirtual
    // para imprimir el nombre de la forma, atributos, area, y volumen
    // de cada objeto mediante vinculación dinámica.
    cout << "Llamadas virtuales a funciones mediante "
         << "apuntadores a la clase base" << endl;

    for ( int i = 0; i < 3; i++ )
        apuntadorViaVirtual( arregloDeFiguras[ i ] );

    // Ciclo a través de arregloDeFiguras y llamada a referenciaViaVirtual
    // para imprimir el nombre de la forma, atributos, area, y volumen
    // de cada objeto mediante vinculación dinámica.
    cout << "Llamadas virtuales a funciones mediante "
         << "referencias a la clase base" << endl;

    for ( int j = 0; j < 3; j++ )
        referenciaViaVirtual( *arregloDeFiguras[ j ] );

    return 0;
}

// Hace llamada llamadas a funciones virtuales mediante un apuntador a la clase base
// con el uso de vinculación estática
void apuntadorViaVirtual( const Figura *ptrClaseBase )
{
    ptrClaseBase->imprime_nombre_figura();
    ptrClaseBase->imprime();
    cout << endl << "Área = " << ptrClaseBase->area()
         << endl << "Volumen = " << ptrClaseBase->volumen() << endl << endl;
} // fin de la función apuntadorViaVirtual

// Hace llamada llamadas a funciones virtuales mediante una referencia a la clase base
// con el uso de vinculación estática.
void referenciaViaVirtual( const Figura &refClaseBase )
{
    refClaseBase.imprime_nombre_figura();
    refClaseBase.imprime();
    cout << endl << "Área = " << refClaseBase.area()
         << endl << "Volumen = " << refClaseBase.volumen() << endl << endl;
} // fin de la función referenciaViaVirtual
