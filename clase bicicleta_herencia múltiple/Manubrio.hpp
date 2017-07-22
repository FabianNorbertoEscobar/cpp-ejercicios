#ifndef MANUBRIO_H
#define MANUBRIO_H

#include <iostream>

using namespace std;

class Manubrio
{
protected:
    bool canastita;

public:
    Manubrio(bool canastita=true);

    friend ostream& operator << (ostream &stream,const Manubrio &manubrio);
};

#endif // MANUBRIO_H
