#include <iostream>
#include "cadena.h"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    cout << endl << endl << "\t\t CLASE CADENA \a\a" << endl;

    Cadena c1, c2("Esta es la segunda cadena."), c3;

    cout << endl << "Cadena 2: "<< c2 << endl;

    c1 = "Esta es la primer cadena.";

    cout << endl << "Cadena 1: "<< c1 << endl;
    c3 = c1 + c2;

    cout << endl << "Cadena 3 (c1+c2): "<< c3 << endl;

    if (c1 == "Esta es la primer cadena.")
        cout << endl << "c1 es igual a \"Esta es la primer cadena.\"" << endl;
    if (c1!=c2)
        cout << endl << "c1 es distinto a c2";

    cout << endl << endl << "Ingrese una cadena: ";
    cin >> c3;

    c3+= "<- Ingresado por el usuario.";
    cout << endl << c3 << endl;

    c3 = "la cadena 1 a la derecha -> " + c1;
    cout << endl << c3;

    cout << endl << endl << "\t\t\t\t\t Fin del programa... \a\a" << endl;
    cin.get();
    return 0;
}
