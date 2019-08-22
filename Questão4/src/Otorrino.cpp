#include "Otorrino.h"

Otorrino::Otorrino()
{
    especializacao = "Otorrino";
}


void Otorrino::setNome(std::string n){

    nome = n;
}

void Otorrino::setAltura(float a){

    altura = a;

}

void Otorrino::setPeso(float p){

    peso = p;

}

std::string Otorrino::getNome(){

    return nome;

}


std::string Otorrino::getEspecializacao(){

    return especializacao;

}

float Otorrino::getAltura(){

    return altura;

}

float Otorrino::getPeso(){

    return peso;

}

void Otorrino::atendimento(){

    std::cout << "Em atendimento..." << "\n";

}

void Otorrino::cirugia(){

    std::cout << "Em cirugia..." << "\n";

}
