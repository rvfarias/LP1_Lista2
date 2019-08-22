#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include "Medico.h"

class Ginecologista : public Medico{

private:

    std::string especializacao;

public:
    Ginecologista();

    ///Metodos set
    void setNome(std::string n);
    void setAltura(float a);
    void setPeso(float p);

    ///Metodos get
    std::string getNome();
    std::string getEspecializacao();
    float getAltura();
    float getPeso();

    void atendimento();
    void cirugia();

};

#endif // GINECOLOGISTA_H
