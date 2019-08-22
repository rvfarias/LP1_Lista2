#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::ContaEspecial(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo){

    setNome(nomeCliente);
    setNumeroConta(numeroConta);
    setSalario(salarioMensal);
    setSaldo(saldo);
}

 void ContaEspecial::DefinirLimite(){

    limite = (3*salarioMensal);
}


