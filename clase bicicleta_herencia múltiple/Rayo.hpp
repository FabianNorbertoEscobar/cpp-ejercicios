#ifndef RAYO_H
#define RAYO_H

#include <iostream>

using namespace std;

class Rayo
{
protected:
    unsigned cantidad_rayos;

public:
    Rayo(unsigned cantidad_rayos=16);

    friend ostream& operator << (ostream &stream,const Rayo &rayo);
};

#endif // RAYO_H
