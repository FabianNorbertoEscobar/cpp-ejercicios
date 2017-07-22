#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    double *ptr[ 50 ];

    for ( int i = 0; i < 500; i++ )
    {
        ptr[ i ] = new double[ 5000000 ];

        if ( ptr[ i ] == 0 )   // new falló al asignar la memoria
        {
            cout << "La asignación de memoria falló en ptr[ " << i << " ]" << endl;
            break;
        } // fin de if
        else
            cout << "5000000 doubles asignados en ptr[ " << i << " ]" << endl;
    } // fin de for

    return 0;
} // fin de la función main
