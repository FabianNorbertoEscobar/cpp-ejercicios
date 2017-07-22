#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int TAMANIO = 80;
    char bufer[ TAMANIO ];

    cout << "Introduzca una frase: " << endl;
    cin.read( bufer, 20 );
    cout << endl << "La frase introducida fue: " << endl;
    cout.write( bufer, cin.gcount() );
    cout << endl;
    return 0;
} // fin de la función main
