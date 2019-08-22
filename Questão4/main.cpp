#include "Cirugiao.h"
#include "Oftamologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;

int main(){

    Cirugiao m1;
    m1.setNome("Pedro");
    m1.setAltura(1.5);
    m1.setPeso(68);


    Oftamologista m2;
    m2.setNome("Fernando");
    m2.setAltura(1.6);
    m2.setPeso(70);


    Otorrino m3;
    m3.setNome("Andre");
    m3.setAltura(1.55);
    m3.setPeso(65.5);

    Ginecologista m4;
    m4.setNome("Rafael");
    m4.setAltura(1.67);
    m4.setPeso(73);

    cout << m1.getEspecializacao() << endl;;
    cout << "Nome: " << m1.getNome() << endl;
    cout << "Altura: " << m1.getAltura() << endl;
    cout << "Peso: " << m1.getPeso() << endl;
    m1.cirugia();
    cout << endl;

    cout << m2.getEspecializacao() << endl;
    cout << "Nome: " << m2.getNome() << endl;
    cout << "Altura: " << m2.getAltura() << endl;
    cout << "Peso: " << m2.getPeso() << endl;
    m2.atendimento();
    cout << endl;

    cout << m3.getEspecializacao() << endl;
    cout << "Nome: " << m3.getNome() << endl;
    cout << "Altura: " << m3.getAltura() << endl;
    cout << "Peso: " << m3.getPeso() << endl;
    m3.atendimento();
    cout << endl;

    cout << m4.getEspecializacao() << endl;
    cout << "Nome: " << m4.getNome() << endl;
    cout << "Altura: " << m4.getAltura() << endl;
    cout << "Peso: " << m4.getPeso() << endl;
    m4.cirugia();

    return 0;
}
