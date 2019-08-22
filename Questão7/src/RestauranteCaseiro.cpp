#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){

        //default
}

void RestauranteCaseiro::adicionaPedido(Pedido p, int indMesa){

        mesas[indMesa].adicionaAoPedido(p);

}

double RestauranteCaseiro::calculaTotalRestaurante(){

        double total = 0;

        for(int i = 0; i < MAX; i++){

                total += mesas[i].calculaTotal();

        }

        return total;
}
