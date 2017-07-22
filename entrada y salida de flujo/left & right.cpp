#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::ios;
using std::setw;
using std::setiosflags;
using std::resetiosflags;

int main()
{
    int x = 12345;

    cout << "La justificacion derecha es la predeterminada: " << endl
         << setw(10) << x << endl << endl << "USO DE LAS FUNCIONES MIEMBRO"
         << endl << "Utilice setf para establecer ios::left: " << setw(10);

    cout.setf( ios::left, ios::adjustfield );
    cout << endl << x << endl << "Utilice unsetf para restablecer el valor predeterminado: " << endl;
    cout.unsetf( ios::left );
    cout << setw( 10 ) << x
         << endl << endl << "USO DE LOS MANIPULADORES PARAMETRIZADOS DE FLUJO"
         << endl << "Utilice setiosflags para establecer ios::left: " << endl
         << setw( 10 ) << setiosflags( ios::left ) << x
         << endl << "Utilice resetiosflags para restablecer el valor predeterminado: " << endl
         << setw( 10 ) << resetiosflags( ios::left )
         << x << endl;
    return 0;
} // fin de la función main
