#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int TAMANIO = 80;
    char bufer[ TAMANIO ];

    cout << "Introduzca una frase: " << endl;
    cin.getline( bufer, TAMANIO );

    cout << endl << "La frase introducida es: " << endl << bufer << endl;
    return 0;
} // fin de la función main
