#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

using namespace std;

int main(){

    TestaValidaNumero t1;

    try{

        t1.validaNumero(50);

    }catch(ValorAbaixoException v){

        cout << "Valor testado: 50" ;
        cout << v.what();
        cout << "\n";

    }catch(ValorAcimaException v){

        cout << "Valor testado: 50" ;
        cout << v.what();
        cout << "\n";

    }catch(ValorMuitoAcimaException v){

        cout << "Valor testado: 50";
        cout << v.what();
        cout << "\n";
    }


    TestaValidaNumero t2;

    try{

        t2.validaNumero(-5);

    }catch(ValorAbaixoException v){

        cout << "Valor testado: -5\n" ;
        cout << v.what();
        cout << "\n";

    }catch(ValorAcimaException v){

        cout << "Valor testado: -5\n" ;
        cout << v.what();
        cout << "\n";

    }catch(ValorMuitoAcimaException v){

        cout << "Valor testado: -5\n" ;
        cout << v.what();
        cout << "\n";
    }

    TestaValidaNumero t3;

    try{

        t3.validaNumero(102);

    }catch(ValorAbaixoException v){

        cout << "Valor testado: 102\n";
        cout << v.what();
        cout << "\n";

    }catch(ValorAcimaException v){

        cout << "Valor testado: 102\n";
        cout << v.what();
        cout << "\n";

    }catch(ValorMuitoAcimaException v){

        cout << "Valor testado: 102\n";
        cout << v.what();
        cout << "\n";
    }


    TestaValidaNumero t4;

    try{

        t4.validaNumero(1054);

    }catch(ValorAbaixoException v){

       cout << "Valor testado: 1054\n";
       cout << v.what();
       cout << "\n";

    }catch(ValorAcimaException v){

        cout << "Valor testado: 1054\n";
        cout << v.what();
        cout << "\n";

    }catch(ValorMuitoAcimaException v){

       cout << "Valor testado: 1054\n";
       cout <<  v.what();
       cout << "\n";
    }

    return 0;
}
