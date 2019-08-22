#include "Oftamologista.h"

Oftamologista::Oftamologista()
{
    especializacao = "Oftamologista";

}


void Oftamologista::setNome(std::string n){

    nome = n;
}


void Oftamologista::setAltura(float a){

    altura = a;

}

void Oftamologista::setPeso(float p){

    peso = p;

}

std::string Oftamologista::getNome(){

    return nome;

}


std::string Oftamologista::getEspecializacao(){

    return especializacao;

}

float Oftamologista::getAltura(){

    return altura;

}

float Oftamologista::getPeso(){

    return peso;

}

void Oftamologista::atendimento(){

    std::cout << "Em atendimento..." << "\n";

}

