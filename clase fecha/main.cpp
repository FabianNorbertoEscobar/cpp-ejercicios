#include "fecha.h"

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");
    cout<<endl<<"\t\t CLASE FECHA \a\a"<<endl<<endl;

    Fecha fecha();
    cout << fecha << endl;

    cout<<endl<<endl<<"\t\t\t\t\t Fin del programa... \a\a"<<endl<<endl;
    cin.get();
    return 0;
}
