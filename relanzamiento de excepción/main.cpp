#include <iostream>
#include <exception>
#include <clocale>

using namespace std;

void lanzar_excepcion();

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "RELANZAMIENTO DE EXCEPCIÓN" << endl;

    try
    {
        lanzar_excepcion();
    }
    catch(exception e)
    {
        cout << endl << "Excepción capturada y manipulada en el main \a\a" << endl;
    }

    cout << endl << "Continúa el control de la ejecución del programa luego del bloque try/catch" << endl;

    return 0;
}

void lanzar_excepcion()
{
    try
    {
        cout << endl << "Función lanzar_excepcion en ejecución" << endl;
        throw exception();  // lanza la excepción
    }
    catch(exception e)
    {
        cout << endl << "Excepción capturada y manipulada en la función lanzar_excepcion \a\a" << endl;
        throw;  // relanza la excepción
    }
}
