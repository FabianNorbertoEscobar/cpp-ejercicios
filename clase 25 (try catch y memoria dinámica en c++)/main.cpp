#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << endl << " TRY CATCH Y MEMORIA DINÁMICA EN C++ \a\a" << endl << endl;

    try
    {
        int *x=new int[6];
        int i;
        for(i=0;i<6;i++)
            cout << " " << x[i];
    }
    catch(bad_alloc&)
    {
        cout << endl << endl << "NO hay memoria \a\a" << endl << endl;
        exit(EXIT_FAILURE);
    }

    try
    {
        int *y=new int[99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999];
        cout << endl << endl << "Asigné mucha memoria... \a\a" << endl << endl;
    }
    catch(bad_alloc&)
    {
        cout << endl << endl << "NO hay memoria \a\a" << endl << endl;
        exit(EXIT_FAILURE);
    }

    cout << endl << endl << "\t\t\t\t\t Fin del programa... \a\a" << endl << endl;
    cin.get();
    return 0;
}
