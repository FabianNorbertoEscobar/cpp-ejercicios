#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setiosflags;
using std::ios;
using std::hex;

int main()
{
    cout << setiosflags( ios::uppercase )
         << "Impresion de letras mayusculas con notacion cientifica" << endl
     << "con exponentes y valores hexadecimales:" << endl
         << 4.345e10 << endl << hex << 123456789 << endl;
    return 0;
} // fin de la función main
