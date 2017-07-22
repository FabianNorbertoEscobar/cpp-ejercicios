#include "Bicicleta.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t CLASE BICICLETA \a\a" << endl;

    Bicicleta MiBicicleta("Rojo");
    cout << endl << "MI BICICLETA" << endl << MiBicicleta << endl << endl;

    return 0;
}
