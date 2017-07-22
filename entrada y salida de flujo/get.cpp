#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int TAMANIO = 80;
    char bufer1[ TAMANIO ], bufer2[ TAMANIO ];

    cout << "Introduzca una frase: " << endl;
    cin >> bufer1;
    cout << endl << "La cadena leida con cin fue: " << endl << bufer1 << endl << endl;

    cin.get( bufer2, TAMANIO );
    cout << "La cadena leida con cin.get fue: " << endl << bufer2 << endl;

    return 0;
} // fin de la función main
