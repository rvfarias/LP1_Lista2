#ifndef OFTAMOLOGISTA_H
#define OFTAMOLOGISTA_H

#include "Medico.h"

class Oftamologista : public Medico{

private:

    std::string especializacao;

public:

    Oftamologista();

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

};

#endif // OFTAMOLOGISTA_H
