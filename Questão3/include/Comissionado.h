#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario{

    private:

        double vendasSemestrais;
        double percentualComissao;

    public:

        Comissionado(double v, double p);

        ///Metodos set
        void setNome(std::string n);
        void setMatricula(int m);

        ///Metodos get
        std::string getNome();
        int getMatricula();

        double calculaSalario();
};

#endif // COMISSIONADO_H
