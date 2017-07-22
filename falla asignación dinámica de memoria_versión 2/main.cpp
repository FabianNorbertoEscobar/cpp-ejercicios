#include <iostream>
#include <new>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    double *ptr[ 50 ];

    try
    {
        for ( int i = 0; i < 500; i++ )
        {
            ptr[ i ] = new double[ 5000000 ];
            cout << "5000000 doubles asignados en ptr[ " << i << " ]" << endl;
        } // fin de for
    } // fin de try
    catch ( bad_alloc exception )
    {
        cout << "Ocurrió una excepción: " << exception.what() << endl;
    } // fin de catch

    return 0;
} // fin de la función main
