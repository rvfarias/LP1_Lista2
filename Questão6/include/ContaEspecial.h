#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta{

    public:

        ContaEspecial();
        ContaEspecial(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo);
        void DefinirLimite();
};

#endif // CONTAESPECIAL_H
