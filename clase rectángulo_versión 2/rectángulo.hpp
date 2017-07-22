#ifndef RECTANGULO_H
#define RECTANGULO_H

/*
DEBE RESPETARSE ESTE ORDEN DE LAS ESQUINAS

esquina_4                   esquina_3
    -----------------------------
    |                           |
    |                           |
    |         RECTÁNGULO        |
    |                           |
    |                           |
    ----------------------------
esquina_1                   esquina_2

*/

class Rectangulo
{
private:

    double x_esq1;
    double y_esq1;

    double x_esq2;
    double y_esq2;

    double x_esq3;
    double y_esq3;

    double x_esq4;
    double y_esq4;

    bool esquinas_consistentes()const;
    //si las esquinas no forman rectángulo, todas las coordenadas se establecen por defecto

    void esquinas_por_defecto();
    //setea las coordenadas de las esquinas con los parámetros por defecto del constructor

    double diagonal_1()const;
    double diagonal_2()const;

    static double distancia(double x1,double y1,double x2,double y2);

    static bool rango_valido(double coordenada);

public:

    Rectangulo(double x_esq1=0.0,double y_esq1=0.0,double x_esq2=1.0,double y_esq2=0.0,
               double x_esq3=1.0,double y_esq3=1.0,double x_esq4=0.0,double y_esq4=1.0);

    double longitud()const;
    double ancho()const;

    double perimetro()const;
    double area()const;

    void set_esquinas(double x_esq1,double y_esq1,double x_esq2,double y_esq2,
                      double x_esq3,double y_esq3,double x_esq4,double y_esq4);

    void get_esquinas(double &x_esq1,double &y_esq1,double &x_esq2,double &y_esq2,
                      double &x_esq3,double &y_esq3,double &x_esq4,double &y_esq4)const;

    bool cuadrado()const;
};

#endif // RECTANGULO_H
