#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream file1("teste.txt", ios::in);
    ofstream file2("teste_bkp.txt", ios::app);

    string str1;

    if(!file1.is_open()){

        cout << "Não foi possivel abrir arquivo!!\n";
        file1.close();
        return 0;

    }

    if(!file2.is_open()){

        cout << "Não foi possivel abrir arquivo!!\n";
        file2.close();
        return 0;

    }

    getline(file1, str1);

    file2 << str1 << "\n";

    cout << "Copia feita com  sucesso!!" << endl;

    return 0;
}
