#include "Cilindro.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "CLASE CILINDRO (hereda de Círculo (hereda de Punto)) \a\a" << endl;

    // se instancia un objeto de la clase cilindro
    Cilindro cilin( 5.7, 2.5, 12, 23 );

    // utiliza funciones obtener para desplegar el Cilindro
    cout << endl << "La coordenada X es " << cilin.get_x()
         << endl << "La coordenada Y es " << cilin.get_y()
         << endl << "El radio es " << cilin.get_radio()
         << endl << "La altura es " << cilin.get_altura() << endl << endl;

    // utiliza funciones establecer para modificar los atributos del Cilindro
    cilin.set_altura( 10 );
    cilin.set_radio( 4.25 );
    cilin.set_punto( 2, 2 );
    cout << "La nueva ubicacion, radio, y altura de cilin es: " << endl
         << cilin << endl;

    cout << "El area de cilin es: " << endl
         << cilin.area() << endl;

    // despliega el Cilindro como un Punto
    Punto &pRef = cilin; // pRef “piensa” que es un punto
    cout << endl << "El Cilindro impreso como un punto es:"
         << pRef << endl << endl;

    // despliega el Cilindro como un Circulo
    Circulo &refCirculo = cilin; // refCirculo piensa que es un Circulo
    cout << "El Cilindro impreso como un Circulo es: " << endl << refCirculo
         << endl << "Area: " << refCirculo.area() << endl;

    return 0;
} // fin de la función main
