#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>

class Medico
{

    protected:

    std::string nome;
    float altura;
    float peso;

    public:
    ///Metodos set
    virtual void setNome(std::string n) = 0;
    virtual void setAltura(float a) = 0;
    virtual void setPeso(float p) = 0;

    ///Metodos get
    virtual std::string getNome() = 0;
    virtual float getAltura() = 0;
    virtual float getPeso() = 0;

};

#endif // MEDICO_H
