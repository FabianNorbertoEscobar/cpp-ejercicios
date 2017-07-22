#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char c;

    cout << "Antes de la entrada, cin.eof() es " << cin.eof()
     << endl << "Introduzca una frase seguida por fin-de-archivo: " << endl;

    while ( ( c = cin.get() ) != EOF )
        cout.put( c );

    cout << endl << "En este sistema, EOF es: " << c;
    cout << endl << "Despues de la salida, cin.eof() es " << cin.eof() << endl;
    return 0;
} // fin de la función main
