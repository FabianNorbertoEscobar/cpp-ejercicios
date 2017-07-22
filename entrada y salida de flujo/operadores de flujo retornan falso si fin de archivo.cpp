#include <iostream>

using namespace std;

int main()
{
    int calificacion, califMasAlta = -1;

    cout << "Introduzca la calificacion (introduzca fin de archivo para terminar): ";
    while ( cin >> calificacion )
    {
        if ( calificacion > califMasAlta )
            califMasAlta = calificacion;

        cout << "Introduzca la calificacion (introduzca fin de archivo para terminar): ";
    } // fin de while

    cout << endl << "La calificacion mas alta es: " << califMasAlta << endl;

    return 0;
} // fin de la función main
