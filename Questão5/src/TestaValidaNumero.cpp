#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

TestaValidaNumero::TestaValidaNumero()
{
    //ctor
}

void TestaValidaNumero::validaNumero(int num){

    if(num <= 0){

        ValorAbaixoException v;
        throw v;

    }

    else if(num>=100 && num<1000){

            ValorAcimaException v;
            throw v;

    }

    else if(num >=1000){

        ValorMuitoAcimaException v;
        throw v;

    }else{

        std::cout << "Valor testado: " << num << "\nValor valido\n\n";
    }
}

