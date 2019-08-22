#include "Quadrado.h"

Quadrado::Quadrado(){

  //default
}

void Quadrado::setLado(float lado){

  this->lado = lado;

}

float Quadrado::calculaArea(){

  return area = lado*lado;

}
