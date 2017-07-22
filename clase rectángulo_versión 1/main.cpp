#include <iostream>
#include <iomanip>
#include <clocale>

#include "rectángulo.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << endl << "\t CLASE RECTÁNGULO" << endl;

    Rectangulo rectangulo;
    rectangulo.mostrar();

    rectangulo.set_rectangulo(6,5);
    rectangulo.mostrar();

    double longitud,ancho;
    rectangulo.get_rectangulo(longitud,ancho);
    cout << setprecision(2) << endl << "\t Longitud: " << longitud << "\t Ancho: " << ancho << endl;

    rectangulo.set_longitud(4);
    rectangulo.set_ancho(3);
    cout << setprecision(2) << endl << "\t Longitud: " << rectangulo.get_longitud() << "\t Ancho: " << rectangulo.get_ancho() << endl;

    cout << setprecision(2) << endl << "\t Perímetro: " << rectangulo.perimetro() << "\t Área: " << rectangulo.area() << endl;

    cin.get();
    return 0;
}
