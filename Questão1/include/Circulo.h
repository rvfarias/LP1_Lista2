#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica{

private:
    /* data */
    float raio;
    float pi;

public:

  Circulo();

  void setRaio(float raio);
  float calculaArea();

};

#endif // CIRCULO_H
