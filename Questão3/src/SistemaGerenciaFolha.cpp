#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func, int pos){

    funcionarios[pos] = func;

}

double SistemaGerenciaFolha::calculaValorTotalFolha(){

    double total = 0;

    for(int i = 0; i < 3; i++){

            total += funcionarios[i]->calculaSalario();
    }

    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int pos){

    return funcionarios[pos]->calculaSalario();

}
