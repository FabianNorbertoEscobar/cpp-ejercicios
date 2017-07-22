#include <iostream>

using std::cout;
using std::endl;
using std::ios;

int main()
{
    double x = .001234567, y = 1.946e9;

    cout << "Desplegados con formato predeterminado:" << endl
         << x << '\t' << y << endl;
    cout.setf( ios::scientific, ios::floatfield );
    cout << "Desplegados con formato cientifico:" << endl
         << x << '\t' << y << endl;
    cout.unsetf( ios::scientific );
    cout << "Desplegados con formato predeterminado despues de unsetf:" << endl
         << x << '\t' << y << endl;
    cout.setf( ios::fixed, ios::floatfield );
    cout << "Desplegados con formato fijo:" << endl
         << x << '\t' << y << endl;
    return 0;
} // fin de la función main
