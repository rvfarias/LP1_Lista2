#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){

        //default

}

void FiguraGeometrica::setNome(string nome){

        this->nome = nome;

}

string FiguraGeometrica::getNome(){

        return nome;

}

float FiguraGeometrica::calculaArea(){

        return area;

}
