#include "Conta.h"

Conta::Conta(){

    //ctor
}

Conta::Conta(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo){

    setNome(nomeCliente);
    setNumeroConta(numeroConta);
    setSalario(salarioMensal);
    setSaldo(saldo);
}

void Conta::setNome(std::string nome){

    nomeCliente = nome;

}

void Conta::setNumeroConta(std::string num){

    numeroConta = num;

}

void Conta::setSalario(double salario){

    salarioMensal = salario;

}

void Conta::setSaldo(double saldo){

    this->saldo=saldo;
}

void Conta::depositar(double valor){

    saldo += valor;

}

void Conta::sacar(double valor){

   try{
        valor > saldo;
        std::cout << "Saque realizado com sucesso!!";

   }catch(SaldoNaoDisponivelException){

        std::cout << saldoNaoDisponivel;
   }
}

 void Conta::DefinirLimite(){

    limite = (2*salarioMensal);
}

std::string Conta::getNome(){

    return nomeCliente;

}

std::string Conta::getNumeroConta(){

    return numeroConta;

}

double Conta::getSalario(){

    return salarioMensal;

}

double Conta::getSaldo(){

    return saldo;

}

double Conta::getLimite(){

    return limite;
}


