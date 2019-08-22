#include "Ginecologista.h"

Ginecologista::Ginecologista()
{
   especializacao = "Ginecologista";

}


void Ginecologista::setNome(std::string n){

    nome = n;
}

void Ginecologista::setAltura(float a){

    altura = a;

}

void Ginecologista::setPeso(float p){

    peso = p;

}

std::string Ginecologista::getNome(){

    return nome;

}

std::string Ginecologista::getEspecializacao(){

    return especializacao;

}

float Ginecologista::getAltura(){

    return altura;

}

float Ginecologista::getPeso(){

    return peso;

}

void Ginecologista::atendimento(){

    std::cout << "Em atendimento..." << "\n";

}

void Ginecologista::cirugia(){

    std::cout << "Em cirugia..." << "\n";

}
