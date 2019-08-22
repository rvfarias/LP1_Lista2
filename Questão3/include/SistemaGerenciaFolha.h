#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#define NUM_FUNCIONARIOS 100

#include "Funcionario.h"

class SistemaGerenciaFolha{

    private:

        Funcionario *funcionarios[NUM_FUNCIONARIOS];

    public:

        SistemaGerenciaFolha();

        void setFuncionarios(Funcionario *func, int pos);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(int pos);

};

#endif // SISTEMAGERENCIAFOLHA_H
