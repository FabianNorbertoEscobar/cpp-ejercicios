#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::ios;
using std::setiosflags;
using std::setprecision;

#include <cmath>

int main()
{
    double raiz2 = sqrt( 2.0 );
    int posiciones;

    cout << setiosflags( ios::fixed)
         << "Raiz cuadrada de 2 con precisiones 0-9." << endl << endl
         << "Precision establecida por la "
         << "funcion miembro precision: " << endl;

    for ( posiciones = 0; posiciones <= 9; posiciones++ )
    {
        cout.precision( posiciones );
        cout << raiz2 << endl;
    } // fin de for

    cout << endl << "Precision establecida por el "
         << "manipulador setprecision: " << endl;

    for ( posiciones = 0; posiciones <= 9; posiciones++ )
        cout << setprecision( posiciones ) << raiz2 << endl;

    return 0;
}
