#include "NumeroTelefonico.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

ostream& operator << (ostream &stream,const NumeroTelefonico &numero)
{
    return stream << "(" << numero.area << ") " << numero.intercambio << "-" << numero.linea;
}

istream& operator >> (istream &stream,NumeroTelefonico &numero)
{
    stream.ignore();                            // ignora (
    stream >> setw(4) >> numero.area;           // fija el ancho de campo en 4 y lee el código de área
    stream.ignore(2);                           // ignora ) y el espacio
    stream >> setw(5) >> numero.intercambio;    // fija el ancho de campo en 5 y lee el código de intercambio
    stream.ignore();                            // ignora -
    stream >> setw(5) >> numero.linea;          // fija el ancho de campo en 5 y lee el código de línea
    return stream;
}
