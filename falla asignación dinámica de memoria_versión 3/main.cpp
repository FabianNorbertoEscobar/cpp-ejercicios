#include <iostream>
#include <new>
#include <cstdlib>
#include <clocale>

using namespace std;

void personalizaNuevoManip()
{
    cerr << "se llamó a personalizaNuevoManip";
    abort();
} // fin de la función personalizaNuevoManip

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    double *ptr[ 50 ];
    set_new_handler( personalizaNuevoManip );

    for ( int i = 0; i < 500; i++ )
    {
        ptr[ i ] = new double[ 50000000 ];

        cout << "5000000 doubles asignados en ptr[ " << i << " ]" << endl;
    } // fin de for

    return 0;
} // fin de la función main
