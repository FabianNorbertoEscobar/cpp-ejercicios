#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::ios;
using std::setiosflags;
using std::setw;

int main()
{
    cout << setiosflags( ios::internal | ios::showpos )
         << setw( 10 ) << 123 << endl << setw( 10 ) << -123 << endl;
    return 0;
} // fin de la función main
