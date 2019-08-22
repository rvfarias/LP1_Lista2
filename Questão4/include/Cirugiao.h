#ifndef CIRUGIAO_H
#define CIRUGIAO_H

#include<iostream>
#include "Medico.h"

class Cirugiao : public Medico{
private:

    std::string especializacao;

public:

    Cirugiao();
    ///Metodos set
    void setNome(std::string n);
    void setAltura(float a);
    void setPeso(float p);

    ///Metodos get
    std::string getNome();
    std::string getEspecializacao();
    float getAltura();
    float getPeso();

    void cirugia();

};

#endif // CIRUGIAO_H
