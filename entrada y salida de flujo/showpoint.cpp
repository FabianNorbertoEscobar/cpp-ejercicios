#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::ios;

#include <cmath>

int main()
{
    cout << "Antes de establecer la bandera ios::showpoint" << endl
         << endl << "9.9900 se imprime como: " << 9.9900
         << endl << "9.9000 se imprime como: " << 9.9000
         << endl << "9.0000 se imprime como: " << 9.0000
         << endl <<  endl << "Despues de establecer la bandera ios::showpoint" << endl;
    cout.setf( ios::showpoint );
    cout << endl << "9.9900 se imprime como: " << 9.9900
         << endl << "9.9000 se imprime como: " << 9.9000
         << endl << "9.0000 se imprime como: " << 9.0000 << endl;

    return 0;
} // fin de la función main
