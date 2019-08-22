#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario{

    private:

        double salarioPorHora;
        double horasTrabalhadas;

    public:

        Horista(double s, double h);

       //Metodos set
        void setNome(std::string n);
        void setMatricula(int m);

        //Metodos get
        std::string getNome();
        int getMatricula();

        double calculaSalario();
};

#endif // HORISTA_H
