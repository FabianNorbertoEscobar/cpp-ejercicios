#include <iostream>

using namespace std;

int main()
{
    char *cadena="prueba";

    cout << endl << "Contenido de la cadena: " << cadena << endl << "Direccion de la cadena: " << static_cast<void*>(cadena) << endl;

    return 0;
}
