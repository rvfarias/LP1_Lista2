#ifndef PEDIDO_H
#define PEDIDO_H


#include <iostream>
#include <sstream>

class Pedido{

    private:

        int numero;
        int quant;
        double preco;
        std::string descri;

    public:

        Pedido();
        void setNumero(int numero);
        void setQuant(int Quant);
        void setPreco(double preco);
        void setDescri(std::string descri);

        int getNumero();
        int getQuant();
        double getPreco();
        std::string getDescri();



};

#endif // PEDIDO_H
