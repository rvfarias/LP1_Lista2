#include "Comissionado.h"

Comissionado::Comissionado(double v, double p){

    vendasSemestrais = v;
    percentualComissao = p;

}

void Comissionado::setNome(std::string n){

    nome = n;

}

void Comissionado::setMatricula(int m){

    matricula = m;

}

std::string Comissionado::getNome(){

    return nome;

}

int Comissionado::getMatricula(){

    return matricula;

}

double Comissionado::calculaSalario(){

    double salario = 0;

    if(percentualComissao < 0){

            return vendasSemestrais;

    }

    salario = vendasSemestrais + (vendasSemestrais*(percentualComissao/100));

    return salario;

}
