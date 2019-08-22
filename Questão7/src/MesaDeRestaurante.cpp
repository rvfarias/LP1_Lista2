#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){

        pos= 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p){

        for(int i = 0; i < 20; i++) {

                if(pedidos[i].getDescri() == p.getDescri()) {
                        pedidos[i].setQuant(pedidos[i].getQuant() + p.getQuant());
                        return;
                }
        }
        pedidos[pos] = p;
        pos++;
}

void MesaDeRestaurante::zeraPedidos(){

        for(int i = 0; i < MAX; i++) {

                pedidos[i].setQuant(0);

        }

}

double MesaDeRestaurante::calculaTotal(){

        double total = 0;

        for(int i = 0; i < MAX; i++) {

                if(pedidos[i].getPreco() > 0) {

                        total += pedidos[i].getPreco() * pedidos[i].getQuant();

                }
        }

        return total;

}

void MesaDeRestaurante::print(){

        for(int i = 0; i<MAX; i++) {

                if(pedidos[i].getQuant() > 0) {

                        std::cout << "Numero: " << pedidos[i].getNumero() << std:: endl
                                  << "Descricao: " << pedidos[i].getDescri() <<  std::endl
                                  << "Preco: " << pedidos[i].getPreco() <<  std::endl
                                  << "Quantidade: " << pedidos[i].getQuant() <<  std::endl;

                }

        }
}
