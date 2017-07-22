#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int vector[7]={84,2,57,9,3,32,7};

    int a=-9999999;
    int b=9999999;

    for(int i=0;i<7;i++){

        if(vector[i]>a){

            a=vector[i];
        }

        if(vector[i]<b){

            b=vector[i];
        }

    }

    cout << endl << "A: \t" << a << endl;
    cout << endl << "B: \t" << b << endl;

    return 0;
}
