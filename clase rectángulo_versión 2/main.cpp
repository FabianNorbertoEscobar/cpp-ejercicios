#include <iostream>
#include <iomanip>
#include <clocale>

#include "rectángulo.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t CLASE RECTÁNGULO" << endl;

    Rectangulo rectangulo1;
    cout << endl << " RECTÁNGULO 1" << endl;
    cout << endl << " Longitud: " << rectangulo1.longitud() << "\t Ancho: " << rectangulo1.ancho();
    cout << endl << " Perímetro: " << rectangulo1.perimetro() << "\t Área: " << rectangulo1.area();
    cout << endl << " El rectángulo " << ((rectangulo1.cuadrado())?"es":"no es") << " un cuadrado" << endl;

    Rectangulo rectangulo2(0,0,2,0,2,4,0,4);
    cout << endl << " RECTÁNGULO 2" << endl;
    cout << endl << " Longitud: " << rectangulo2.longitud() << "\t Ancho: " << rectangulo2.ancho();
    cout << endl << " Perímetro: " << rectangulo2.perimetro() << "\t Área: " << rectangulo2.area();
    cout << endl << " El rectángulo " << ((rectangulo2.cuadrado())?"es":"no es") << " un cuadrado" << endl;

    cin.get();
    return 0;
}
