#include "Pedido.h"

Pedido::Pedido(){

    numero = preco = quant = 0;
}

void Pedido::setNumero(int numero){

        this->numero = numero;

}

void Pedido::setQuant(int quant){

        this->quant = quant;

}

void Pedido::setPreco(double preco){

        this->preco = preco;

}

void Pedido::setDescri(std::string descri){

        this->descri = descri;

}

int Pedido::getNumero(){

        return numero;

}

int Pedido::getQuant(){

        return quant;

}

double Pedido::getPreco(){

        return preco;

}

std::string Pedido::getDescri(){

        return descri;

}
