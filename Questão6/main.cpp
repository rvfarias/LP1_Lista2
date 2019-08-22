#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main(){

    Conta * c1 = new Conta("Fernando", "777-223", 2000, 5000);
    c1->DefinirLimite();

    ContaEspecial * c2 = new ContaEspecial();
    c2->setNome("Carlos");
    c2->setNumeroConta("66600-2");
    c2->setSalario(5000);
    c2->setSaldo(-2000);
    c2->DefinirLimite();

    cout << "-----Cliente 1-----" << endl;
    cout << "Nome: " << c1->getNome() << endl;
    cout << "Numero da conta: " << c1->getNumeroConta() << endl;
    cout << "Salario: " << c1->getSalario() << endl;
    cout << "Saldo: " << c1->getSaldo() << endl;
    cout << "Limite: " << c1->getLimite() << endl;

    try{
        c1->sacar(200);

    }catch(SaldoNaoDisponivelException s){

        cout << "Processando saque...\n";
        cout << s.what();
    }

    cout << "\nNovo saldo: " << c1->getSaldo() << endl;

    cout << "\n-----Cliente 2-----" << endl;
    cout << "Nome: " << c2->getNome() << endl;
    cout << "Numero da conta: " << c2->getNumeroConta() << endl;
    cout << "Salario: " << c2->getSalario() << endl;
    cout << "Saldo: " << c2->getSaldo() << endl;
    cout << "Limite: " << c2->getLimite() << endl;
    c2->depositar(3000);
    cout << "\nNovo saldo: " << c2->getSaldo() << endl;

    Conta * c3 = new Conta("Miguel", "234325-67", 1500, 300);
    c3->DefinirLimite();

    ContaEspecial * c4 = new ContaEspecial("Geraldo", "66600-2", 2000, 500);
    c4->DefinirLimite();

    cout << "\n-----Cliente 3-----" << endl;
    cout << "Nome: " << c3->getNome() << endl;
    cout << "Numero da conta: " << c3->getNumeroConta() << endl;
    cout << "Salario: " << c3->getSalario() << endl;
    cout << "Saldo: " << c3->getSaldo() << endl;
    cout << "Limite: " << c3->getLimite() << endl;

    try{
        c3->sacar(500);

    }catch(SaldoNaoDisponivelException s){

        cout << "\nProcessando saque...\n";
        cout << s.what();
    }

    cout << "\nNovo saldo: " << c3->getSaldo() << endl;

    cout << "\n-----Cliente 4-----" << endl;
    cout << "Nome: " << c4->getNome() << endl;
    cout << "Numero da conta: " << c4->getNumeroConta() << endl;
    cout << "Salario: " << c4->getSalario() << endl;
    cout << "Saldo: " << c4->getSaldo() << endl;
    cout << "Limite: " << c4->getLimite() << endl;
    c4->depositar(3000);
    cout << "\nNovo saldo: " << c4->getSaldo() << endl;


    return 0;
}
