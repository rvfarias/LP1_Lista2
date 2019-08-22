#include "Circulo.h"

Circulo::Circulo(){

    pi = 3.14;
}

void Circulo::setRaio(float raio){

  this->raio = raio;

}

float Circulo::calculaArea(){

  return area = pi*raio*raio;

}
