#ifndef FIGURA_H
#define FIGURA_H

// clase abstracta - clase base de este ejemplo de programación polimórfica

// las clases son abstractas cuando contienen métodos virtuales puros

// no se pueden instanciar objetos de una clase abstracta -> solamente son clase base para las clases derivadas de la jerarquía polimórfica

class Figura
{
public:
    // funciones virtuales
    virtual double area()const;
    virtual double volumen()const;

    // funciones virtuales puras sustituidas en clases derivadas --> las funciones son virtuales puras cuando son virtuales y se igualan a cero
    virtual void imprime_nombre_figura()const=0;
    virtual void imprime()const=0;
};

#endif // FIGURA_H

// las funciones deben declararse como virtuales solamente en la definición de la clase, de igual modo que las amigas y estáticas

/*
Figura tiene dos funciones
virtuales puras, imprimeNombreFigura e imprime, de tal modo que es una clase base abstracta. Figura
contiene otras dos funciones virtuales, area y volumen, cada una de las cuales tiene una implementación
predeterminada que devuelve un valor de cero. Punto hereda estas implementaciones de Figura. Esto tiene
sentido, ya que el área y el volumen de un punto son cero. Circulo hereda la función volumen de Punto,
pero proporciona su propia implementación para la función area. Cilindro proporciona sus propias implementaciones
tanto para la función area como para la función volumen.
*/

/*
Cuando C++ compila una clase que tiene una o más funciones virtuales, éste construye una tabla de funciones
virtuales (vtable) para esa clase. El programa en ejecución utiliza la vtable para seleccionar las implementaciones
de la función apropiada, cada vez que va a ejecutarse una función virtual de esa clase.
*/
