#include <iostream>

using namespace std;

// manipuladores de campana (mediante el uso de la secuencia de escape \a)
ostream& campana( ostream& salida )
{
    return salida << '\a';
}

// manipulador de retorno (mediante el uso de la secuencia de escape \r)
ostream& ret( ostream& salida )
{
    return salida << '\r';
}

// manipulador tab (mediante el uso de la secuencia de escape \t)
ostream& tab( ostream& salida )
{
    return salida << '\t';
}

// manipulador finLinea (mediante el uso de la secuencia de escape \n
// y la función miembro flush)
ostream& finLinea( ostream& salida )
{
    return salida << '\a' << flush;
} // fin de la función fin línea

int main()
{
    cout << "Prueba del manipulador tab: " << finLinea
         << 'a' << tab << 'b' << tab << 'c' << finLinea << finLinea
         << "Prueba de los manipuladores ret y campana: "
         << finLinea << ".........." << campana
         << ret << "-----" << finLinea;
    return 0;
} // fin de la función main
