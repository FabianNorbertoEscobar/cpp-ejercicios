#include "header.hpp"

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    cout<<endl<<"\t\t FUNCIONES INLINE"<<endl<<endl;

    cout<<"Las funciones inline sugieren al compilador una optimización"<<endl;
    cout<<"El compilador es quien decide si toma el consejo o no"<<endl;
    cout<<"Las funciones inline son híbridos, deben ser cortas en cuanto a código"<<endl;
    cout<<"para evitar generar un ejecutable de tamaño considerable"<<endl;
    cout<<"En vez de generarsen una porción de código se reemplazan como macros"<<endl;
    cout<<"Esto ocurre en tiempo de compilación"<<endl;
    cout<<"Ha diferencia de las macro hacen verificación de tipo"<<endl;
    cout<<"Incrementan el program counter y apilan en el stack pointer"<<endl;
    cout<<"Las funciones inline se pueden depurar"<<endl;

    cout<<"Ejemplo:"<<endl;
    char c='f';
    cout<<endl<<"Caracter: \t"<<c<<"\t ---a mayúscula---> \t"<<a_mayuscula(c)<<endl;

    cout<<endl<<endl<<"\t\t\t\t\t Fin del programa...\a\a"<<endl<<endl;
    cin.get();
    return 0;
}
