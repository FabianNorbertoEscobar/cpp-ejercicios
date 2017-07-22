#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

using namespace std;

class Punto
{
protected:
    int x;
    int y;

public:
    Punto(int x=0,int y=0);

    void set_punto(int x,int y);
    int get_x()const;
    int get_y()const;

    friend ostream& operator << (ostream &stream,const Punto &punto);
};

#endif // PUNTO_H
