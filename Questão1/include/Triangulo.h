#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{

private:
    /* data */
    float altura;
    float base;

public:
    Triangulo();

    void setBase(float base);
    void setAltura(float altura);
    float calculaArea();

};

#endif // TRIANGULO_H
