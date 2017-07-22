#ifndef ASIENTO_H
#define ASIENTO_H

#include <iostream>

using namespace std;

class Asiento
{
protected:
    bool acolchonado;

public:
    Asiento(bool acolchonado=true);

    friend ostream& operator << (ostream &stream,const Asiento &asiento);
};

#endif // ASIENTO_H
