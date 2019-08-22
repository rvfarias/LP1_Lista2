#include "Assalariado.h"

Assalariado::Assalariado(double s){

    salario = s;

}

void Assalariado::setNome(std::string n){

    nome = n;

}

void Assalariado::setMatricula(int m){

    matricula = m;

}

std::string Assalariado::getNome(){

    return nome;

}

int Assalariado::getMatricula(){

    return matricula;

}

double Assalariado::calculaSalario(){

    return salario;

}
