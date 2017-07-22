#include <iostream>
#include <iomanip>
#include <clocale>

using namespace std;

class Hora
{
private:

    int seg_rel;

    static int seg_rel_max;
    void normalizar();

public:

    Hora();
    Hora(int h,int m=0,int s=0);
    Hora(const Hora &hora);

    static Hora get_hora_maxima();

    bool operator >= (const Hora &hora)const;
    bool operator < (const Hora &hora)const;

    Hora operator ++ (int x);

    Hora operator + (const Hora &hora)const;
    void operator += (int seg);

    friend Hora operator + (int seg,const Hora &hora);
    friend ostream& operator << (ostream &stream,const Hora &hora);
    friend istream& operator >> (istream &stream,Hora &hora);
};
