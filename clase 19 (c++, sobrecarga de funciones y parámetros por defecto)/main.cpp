#include "header.hpp"

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    cout<<endl<<"SOBRECARGA DE FUNCIONES \a\a"<<endl<<endl;

    cout<<"C++ permite que funciones con el mismo nombre convivan"<<endl;
    cout<<"pero sus parámetros deben tener:"<<endl<<"al menos un tipo de dato diferente, orden o cantidad"<<endl;

    cout<<endl<<"Ejemplo:\t"<<endl;
    fc(9);
    fc(3.65,'a',5);
    char cadena[]="aasknfijdanfijda";
    fc(cadena,'f');
    fc();
    fc(9,6,7);
    fc(3.3,4);

    cout<<endl<<"\t\t PARÁMETROS POR DEFECTO"<<endl;
//    cuando no se invoca a la función con todos los parámetros, se está invocando a alguna de las funciones que se genera
//    con la sobrecarga de funciones
//    cout<<endl;
//    float sueldo=2.0;
//    mostrar_datos(39154213,"djkfbkjsdf");
//    cout<<endl;
//    mostrar_datos(24356712,"Sa,Lia");
//    cout<<endl;
//    mostrar_datos(345,"Perez,Juan",'M');
//    cout<<endl;
//    mostrar_datos(456,"XX.Y",'F',100.00);
//    cout<<endl;
    t_fecha fecha={12,3,2014};
    mostrar_datos(567,"WW,ZZ",'M',fecha,1000.0);

    cout<<endl<<endl<<"\t\t\t\t\t Fin del programa..."<<endl;
    cin.get();
    return 0;
}
