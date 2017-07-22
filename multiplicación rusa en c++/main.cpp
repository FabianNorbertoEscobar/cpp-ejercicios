#include<iostream>
#include<locale.h>
using namespace std;
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int num1,num2,resultado=0;
    cout<<"\n\t ***MULTIPLICACIÓN RUSA*** \n";
    do
        {
        cout<<"\n Ingrese el primer número: \n\n\t\t";
        cin>>num1;
        }
    while(num1<0);
    do
        {
        cout<<"\n Ingrese el segundo número: \n\n\t\t";
        cin>>num2;
        }
    while(num2<0);
    while(num1>=1)
        {
        if(num1%2!=0)
            resultado+=num2;
        num1/=2;
        num2*=2;
        }
    cout<<"\n\t Resultado: \t\t";
    cout<<resultado;
    cout<<"\n\n";
    return 0;
    }
