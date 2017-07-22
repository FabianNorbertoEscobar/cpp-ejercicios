#include "Circulo.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t CLASE PUNTO Y CLASE CÍRCULO (hereda de punto) \a\a" << endl;

    cout << endl << "Conversión entre apuntadores de la clasen base y la clase derivada" << endl;

    Punto *punto=NULL,p(30,50);
    Circulo *circulo=NULL,c(2.7,120,89);

    cout << endl << "Punto p: " << p << endl << "Círculo c: " << c << endl;

    // Trata a Circulo como un Punto (solamente ve la parte de la clase base)
    punto=&c; // asigna la dirección de Circulo a ptrPunto
    cout << endl << "Círculo c (vía *punto): " << *punto << endl;

    // Trata a Circulo como un Circulo (con alguna conversión)
    // convierte un apuntador de clase base en un apuntador de clase derivada
    circulo=static_cast<Circulo*>(punto);
    cout << endl << "Círculo c (mediante *circulo):" << endl << *circulo
         << endl << "Área de c (mediante circulo): "
         << circulo->area() << endl;

    // PELIGRO: trata a un Punto como un Circulo
    punto=&p; // asigna la dirección de Punto a ptrPunto

    // convierte el apuntador de clase base en un apuntador de clase derivada
    circulo=static_cast<Circulo*>(punto);
    cout << endl << "Punto p (mediante *circulo):" << endl << *circulo
         << endl <<"Área del objeto circulo apunta a: "
         << circulo->area() << endl;

    return 0;
}
