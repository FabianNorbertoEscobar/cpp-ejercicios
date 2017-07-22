#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{
private:

    double longitud;
    double ancho;

public:

    Rectangulo(double longitud=1.0,double ancho=1.0);

    double perimetro()const;
    double area()const;

    void set_rectangulo(double longitud,double ancho);
    void get_rectangulo(double &longitud,double &ancho)const;

    void set_longitud(double longitud);
    double get_longitud()const;

    void set_ancho(double ancho);
    double get_ancho()const;

    void mostrar()const;
};

#endif // RECTANGULO_H
