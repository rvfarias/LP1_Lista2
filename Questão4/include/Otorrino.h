#ifndef OTORRINO_H
#define OTORRINO_H

#include "Medico.h"

class Otorrino : public Medico{

private:

    std::string especializacao;


public:

    Otorrino();

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

#endif // OTORRINO_H
