#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// los templates pueden realizarse para crear plantillas de funciones (pero también para crear plantillas de clases)

template < typename T >    /// ó template <class T> para las plantillas de clases
T maximo( T valor1, T valor2, T valor3 )
{
    T max = valor1;

    if ( valor2 > max )
        max = valor2;

    if ( valor3 > max )
        max = valor3;

    return max;
} // fin de la plantilla de función maximo

int main()
{
    cout << endl << "\t\t TEMPLATES - PLANTILLAS DE FUNCIONES" << endl;

    int int1, int2, int3;

    cout << endl << "Introduzca tres valores enteros: ";
    cin >> int1 >> int2 >> int3;
    cout << "El valor entero maximo es : "
         << maximo( int1, int2, int3 ) << endl; // versión int

    double doble1, doble2, doble3;

    cout << endl << "Introduzca tres valores double: ";
    cin >> doble1 >> doble2 >> doble3;
    cout << "El valor double maximo es: "
         << maximo( doble1, doble2, doble3 ) << endl; // versión double

    char char1, char2, char3;

    cout << endl << "Introduzca tres caracteres: ";
    cin >> char1 >> char2 >> char3;
    cout << "El valor caracter maximo es: "
         << maximo( char1, char2, char3 ) << endl; // versión char

    return 0;
} // fin de la función main
