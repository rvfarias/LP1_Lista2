#include <iostream>
#include <iomanip>
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

int main(){

        Triangulo * t1 = new Triangulo();
        Triangulo * t2 = new Triangulo();
        t1->setNome("Triangulo 1");
        t1->setBase(3.5);
        t1->setAltura(2);
        t2->setNome("Triangulo 2");
        t2->setBase(6);
        t2->setAltura(3.7);

        Quadrado * q1 = new Quadrado();
        Quadrado * q2 = new Quadrado();
        q1->setNome("Quadrado 1");
        q1->setLado(5);
        q2->setNome("Quadrado 2");
        q2->setLado(3.7);

        Circulo * c1 = new Circulo();
        Circulo * c2 = new Circulo();
        c1->setNome("Circulo 1");
        c1->setRaio(4.1);
        c2->setNome("Circulo 2");
        c2->setRaio(7.2);

        cout << setprecision(2);
        cout << fixed;

        cout << "Nome: " << t1->getNome() << endl;
        cout << "Area: " << t1->calculaArea() << endl;
        cout << "\nNome: " << t2->getNome() << endl;
        cout << "Area: " << t2->calculaArea() << endl;
        cout << "\nNome: " << q1->getNome() << endl;
        cout << "Area: " << q1->calculaArea() << endl;
        cout << "\nNome: " << q2->getNome() << endl;
        cout << "Area: " << q2->calculaArea() << endl;
        cout << "\nNome: " << c1->getNome() << endl;
        cout << "Area: " << c1->calculaArea() << endl;
        cout << "\nNome: " << c2->getNome() << endl;
        cout << "Area: " << c2->calculaArea() << endl;

        return 0;
}
