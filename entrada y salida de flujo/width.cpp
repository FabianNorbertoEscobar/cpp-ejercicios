#include <iostream>

using namespace std;

int main()
{
    int w = 4;
    char cadena[ 10 ];

    cout << "Introduzca frases y vea lo que ocurre: " << endl;
    cin.width( 5 );

    while ( cin >> cadena )
    {
        cout.width( w++ );
        cout << cadena << endl;
        cin.width( 5 );
    } // fin de while

    return 0;
}
