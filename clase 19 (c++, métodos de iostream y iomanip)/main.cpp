#include<iostream>
#include<iomanip>

#include<cstdlib>
#include<clocale>

using namespace std;

int main()
{
    system("COLOR 5F");
    setlocale(LC_CTYPE,"Spanish");
/*
    float x=5.5489;
    cout<<setprecision(0)<<x<<endl;//esta se comporta como la siguiente
    cout<<setprecision(1)<<x<<endl;
    cout<<setprecision(2)<<x<<endl;
    cout<<setprecision(3)<<x<<endl;
    cout<<setprecision(4)<<x<<endl;
    cout<<setprecision(5)<<x<<endl;
    cout<<setprecision(6)<<x<<endl;
    //las últimas redondean ponen hasta la cantidad de dígitos que hay

    cout<<endl;
    cout<<fixed<<x<<endl;
    cout<<fixed<<setprecision(2)<<x<<endl;

    char c;
    cout<<"ingrese hora"<<endl;
    int h,m;
    cin>>h>>c>>m;
    cout<<"hora =\t"<<h<<":"<<m<<endl;

    int xx;
    char cad[20];
    cin>>xx;
    cout<<xx;
    cin>>cad;
    cout<<cad;
    cin.ignore('\n');
    cin.getline(cad,20);
    cout<<cad;
    cin.ignore(1000,'\n');
    cin.getline(cad,20,'|');
    cout<<cad;

    bool flag;
    flag=0;
    cout<<flag;
    flag=1;
    cout<<flag;
    flag=2;
    cout<<flag;
*/
    int num=14;
    cout<<setbase(2)<<num<<endl;
    cout<<setfill('x')<<num<<endl;
    //?????????????????????
    int bin;
    cin>>setbase(2)>>bin;
    cout<<bin<<endl;
    //?????????????????????????

    /*
    setiosflags
    resetiosflags

    setbase
    setfill
    setprecision
    setw
    get_money
    put_money
    get_time
    put_time

    */

    cin.get();
    return 0;
}
