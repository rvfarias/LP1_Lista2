#include "Horista.h"

Horista::Horista(double s, double h){

    salarioPorHora = s;
    horasTrabalhadas = h;

}

void Horista::setNome(std::string n){

    nome = n;

}

void Horista::setMatricula(int m){

    matricula = m;

}

std::string Horista::getNome(){

    return nome;

}

int Horista::getMatricula(){

    return matricula;

}

double Horista::calculaSalario(){
     double  salario = 0;

    if(horasTrabalhadas <= 40){

        salario = salarioPorHora*horasTrabalhadas;

    }else{

        salario = salarioPorHora+(salarioPorHora *horasTrabalhadas*1.5);

    }

    return salario;
}
