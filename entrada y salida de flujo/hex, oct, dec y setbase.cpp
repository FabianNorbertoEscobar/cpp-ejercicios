#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::hex;
using std::dec;
using std::oct;
using std::setbase;

int main()
{
    int n;

    cout << "Introduzca un numero decimal: ";
    cin >> n;
    cout << n << " en hexadecimal es: " << hex << n << endl
         << dec << n << " en octal es: " << oct << n << endl
         << setbase( 10 ) << n << " en decimal es: " << n << endl;

    return 0;
} // fin de la función main
