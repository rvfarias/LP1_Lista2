#include "Cirugiao.h"

Cirugiao::Cirugiao(){

        especializacao = "Cirugiao";

}

void Cirugiao::setNome(std::string n){

    nome = n;
}

void Cirugiao::setAltura(float a){

    altura = a;

}

void Cirugiao::setPeso(float p){

    peso = p;

}

std::string Cirugiao::getNome(){

    return nome;

}

std::string Cirugiao::getEspecializacao(){

    return especializacao;

}

float Cirugiao::getAltura(){

    return altura;

}

float Cirugiao::getPeso(){

    return peso;

}

void Cirugiao::cirugia(){

    std::cout << "Em cirugia..." << "\n";

}
