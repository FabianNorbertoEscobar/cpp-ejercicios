#ifndef GOMIN
#define GOMIN

#include <iostream>

using namespace std;

class Gomin
{
protected:
    bool estado;

public:
    Gomin(bool estado=true);

    friend ostream& operator << (ostream &stream,const Gomin &gomin);
};

#endif // GOMIN
