#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{

private:
    /* data */
    float lado;

public:
    Quadrado();

    void setLado(float lado);
    float calculaArea();

};

#endif // QUADRADO_H
