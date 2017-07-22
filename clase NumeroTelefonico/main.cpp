#include "NumeroTelefonico.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t CLASE NÚMERO TELEFÓNICO" << endl;

    NumeroTelefonico numero;

    cout << endl << "Ingrese un número telefónico en formato (123) 1234-5678:" << endl << endl;
    cin >> numero;
    cout << endl << "El número ingresado es: " << numero << endl << endl;

    return 0;
}
