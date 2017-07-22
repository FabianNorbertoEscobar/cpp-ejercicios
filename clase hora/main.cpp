#include "hora.h"

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");
    cout<<endl<<"\t\t CLASE HORA \a\a"<<endl<<endl;

    Hora hora;
    Hora hora1(4);
    Hora hora2(13,3);
    Hora hora3(20,21,16);
    Hora hora4(24,3,3);
    Hora hora5(hora);
    hora.imprimir_hora_formato_24_hs();
    hora.imprimir_hora_formato_12_hs();
    hora1.imprimir_hora_formato_24_hs();
    hora1.imprimir_hora_formato_12_hs();
    hora2.imprimir_hora_formato_24_hs();
    hora2.imprimir_hora_formato_12_hs();
    hora3.imprimir_hora_formato_24_hs();
    hora3.imprimir_hora_formato_12_hs();
    hora4.imprimir_hora_formato_24_hs();
    hora4.imprimir_hora_formato_12_hs();
    hora5.imprimir_hora_formato_24_hs();
    hora5.imprimir_hora_formato_12_hs();

    hora5.sumar_dos_horarios(hora4);
    hora5.imprimir_hora_formato_12_hs();
    hora5.restar_horas(6);
    hora5.imprimir_hora_formato_24_hs();
    hora5.sumar_minutos(5);
    hora5.restar_segundos(1562);

    hora5.imprimir_hora_formato_24_hs();
    cout<<endl<<hora.get_uso_horario_por_defecto()<<endl;
    hora.set_uso_horario_por_defecto(6);
    cout<<endl<<hora1.get_uso_horario_por_defecto()<<endl;
    cout<<endl<<hora2.get_uso_horario_por_defecto()<<endl;

    cout<<endl<<"La hora 23:55:66 es "<<((Hora::es_hora_valida(23,55,66))?"válida":"inválida")<<endl;

    Hora h1(8,1,3),h2(2,4,6),h3;
    h1.imprimir_hora_formato_24_hs();
    h3=h1+10;       //también podría invocarla así: h3=h1.operator+(10);
    h3.imprimir_hora_formato_24_hs();
    h3=h1+h2;
    h3.imprimir_hora_formato_24_hs();
    h3=h1-10;
    h3.imprimir_hora_formato_24_hs();
    h3=h1-h2;
    h3.imprimir_hora_formato_24_hs();

    cout<<endl<<"h1:"<<endl;
    h1.imprimir_hora_formato_24_hs();
    cout<<endl<<"h2:"<<endl;
    h2.imprimir_hora_formato_24_hs();

    cout<<endl;

    cout<<"h1"<<((h1<h2)?" es ":" no es ")<<"menor a h2"<<endl;
    cout<<"h1"<<((h1>h2)?" es ":" no es ")<<"mayor a h2"<<endl;

    cout<<"h1"<<((h1<=h2)?" es ":" no es ")<<"menor o igual a h2"<<endl;
    cout<<"h1"<<((h1>=h2)?" es ":" no es ")<<"mayor o igual a h2"<<endl;

    cout<<"h1"<<((h1==h2)?" es ":" no es ")<<"igual a h2"<<endl;
    cout<<"h1"<<((h1!=h2)?" es ":" no es ")<<"distinta a h2"<<endl;

    cout<<endl;

    h3=++h1;
    cout<<endl<<"h1:"<<endl;
    h1.imprimir_hora_formato_24_hs();
    cout<<endl<<"h3:"<<endl;
    h3.imprimir_hora_formato_24_hs();

    h3=h1++;
    cout<<endl<<"h1:"<<endl;
    h1.imprimir_hora_formato_24_hs();
    cout<<endl<<"h3:"<<endl;
    h3.imprimir_hora_formato_24_hs();

    h3=--h1;
    cout<<endl<<"h1:"<<endl;
    h1.imprimir_hora_formato_24_hs();
    cout<<endl<<"h3:"<<endl;
    h3.imprimir_hora_formato_24_hs();

    h3=h1--;
    cout<<endl<<"h1:"<<endl;
    h1.imprimir_hora_formato_24_hs();
    cout<<endl<<"h3:"<<endl;
    h3.imprimir_hora_formato_24_hs();

    //también se puede hacer lo siguiente
    h3=10+h1;
    h3.imprimir_hora_formato_24_hs();
    h3=10-h1;
    h3.imprimir_hora_formato_24_hs();

    cout<<endl<<"Ingrese la hora en formato \"hh:mm:ss\":"<<endl;
    cin>>h1;
    cout<<"La fecha ingresada es: \t"<<h1<<endl;

    cout<<endl<<endl<<"\t\t\t\t\t Fin del programa... \a\a"<<endl<<endl;
    cin.get();
    return 0;
}
