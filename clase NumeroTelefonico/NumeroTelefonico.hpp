#ifndef NUMEROTELEFONICO_H
#define NUMEROTELEFONICO_H

#include <iostream>

using namespace std;

class NumeroTelefonico
{
private:
    char area[4];           // código de área de 3 dígitos y \0
    char intercambio[5];    // código de intercambio de 4 dígitos y \0
    char linea[5];          // código de línea de 4 dígitos y \0

public:
    //sobrecarga de los operadores de inserción y extracción de flujo
    friend ostream& operator << (ostream &stream,const NumeroTelefonico &numero);
    friend istream& operator >> (istream &stream,NumeroTelefonico &numero);
};

#endif // NUMEROTELEFONICO_H
