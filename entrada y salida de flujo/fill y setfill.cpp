#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::ios;
using std::setw;
using std::hex;
using std::dec;
using std::setfill;

int main()
{
    int x = 10000;

    cout << x << " impreso como un int justificado a izquierda y derecha" << endl
         << "y como hex con justificacion interna." << endl
         << "Uso del caracter predeterminado de relleno (espacio):" << endl;
    cout.setf( ios::showbase );
    cout << setw( 10 ) << x << endl;
    cout.setf( ios::left, ios::adjustfield );
    cout << setw( 10 ) << x << endl;
    cout.setf( ios::internal, ios::adjustfield );
    cout << setw( 10 ) << hex << x;

    cout << endl << endl << "Uso de distintos caracteres de relleno: " << endl;
    cout.setf( ios::right, ios::adjustfield );
    cout.fill( '*' );
    cout << setw( 10 ) << dec << x << endl;
    cout.setf( ios::left, ios::adjustfield );
    cout << setw( 10 ) << setfill( '%' ) << x << endl;
    cout.setf( ios::internal, ios::adjustfield );
    cout << setw( 10 ) << setfill( '^' ) << hex << x << endl;
    return 0;
} // fin de la función main
