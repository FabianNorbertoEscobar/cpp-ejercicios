#include <iostream>
#include <memory>
#include <clocale>

#include "Entero.hpp"

using namespace std;
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "CLASE AUTO_PTR Y ASIGNACIÓN DINÁMICA DE MEMORIA PARA INSTANCIAR CLASE ENTERO" << endl;

    cout << endl << "Instanciando un objeto auto_ptr que apunta hacia un Entero" << endl;
    auto_ptr < Entero > ptrHaciaEntero( new Entero( 7 ) );

    cout << endl << "Utilizando auto_ptr para manipular el Entero" << endl;
    ptrHaciaEntero->set_entero( 99 );

    cout << "Entero después de set_entero: " << ( *ptrHaciaEntero ).get_entero()

         << endl << "Terminando programa" << endl;
    return 0;
}
