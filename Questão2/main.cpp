#include "Conta.h"

using namespace std;

int main()
{
    Conta * c1 = new Conta("Fernando", "777-223", 2000, 5000);
    Conta * c2 = new Conta();
    c1->DefinirLimite();
    c2->setNome("Carlos");
    c2->setNumeroConta("66600-2");
    c2->setSalario(50000);
    c2->setSaldo(-2000);
    c2->DefinirLimite();

    cout << "-----Cliente 1-----" << endl;
    cout << "Nome: " << c1->getNome() << endl;
    cout << "Numero da conta: " << c1->getNumeroConta() << endl;
    cout << "Salario: " << c1->getSalario() << endl;
    cout << "Saldo: " << c1->getSaldo() << endl;
    cout << "Limite: " << c1->getSaldo() << endl;
    c1->sacar(200);
    cout << "\nNovo saldo: " << c1->getSaldo() << endl;

    cout << "\n-----Cliente 2-----" << endl;
    cout << "Nome: " << c2->getNome() << endl;
    cout << "Numero da conta: " << c2->getNumeroConta() << endl;
    cout << "Salario: " << c2->getSalario() << endl;
    cout << "Saldo: " << c2->getSaldo() << endl;
    cout << "Limite: " << c2->getLimite() << endl;
    c2->depositar(3000);
    cout << "\nNovo saldo: " << c2->getSaldo() << endl;

    return 0;
}
