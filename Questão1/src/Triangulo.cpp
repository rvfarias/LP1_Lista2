#include "Triangulo.h"

Triangulo::Triangulo(){

//default

}

void Triangulo::setBase(float base){

  this->base = base;

}

void Triangulo::setAltura(float altura){

  this->altura = altura;

}

float Triangulo::calculaArea(){

        area = (base*altura)/2;

        return area;

}
