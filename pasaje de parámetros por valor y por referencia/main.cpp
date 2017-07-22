#include <iostream>
#include <clocale>

using std::cout;
using std::endl;

int triplePorValor( int );
void triplePorReferencia( int & );

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t PASAJE DE PARÁMETROS POR VALOR Y POR REFERENCIA" << endl << endl;

    int x = 2, z = 4;

    cout << "x = " << x << " antes de triplePorValor" << endl
         << "Valor devuelto por triplePorValor: "
         << triplePorValor( x ) << endl
         << "x = " << x << " después de triplePorValor\n" << endl;

    cout << "z = " << z << " después de triplePorReferencia" << endl;
    triplePorReferencia( z );
    cout << "z = " << z << " después de triplePorReferencia" << endl;

    return 0;
} // fin de la función main

int triplePorValor( int a )
{
    return a = a * a *a; // argumento de la llamada no modificada
} // fin de la función triplePorValor

void triplePorReferencia( int &cRef )
{
    cRef = cRef * cRef * cRef; // argumento de la llamada modificada
} // fin de la función triplePorReferencia
