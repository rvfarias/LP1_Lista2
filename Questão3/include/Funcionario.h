#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include<iostream>

class Funcionario{

    protected:

        std::string nome;
        int matricula;

    public:

        //Metodos set
        virtual void setNome(std::string n) = 0;
        virtual void setMatricula(int m) = 0;

        //Metodos get
        virtual std::string getNome() = 0;
        virtual int getMatricula() = 0;

        virtual double calculaSalario() = 0;
};

#endif // FUNCIONARIO_H
