#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

using namespace std;

class FiguraGeometrica {
protected:
/* data */
string nome;
float area;

public:
FiguraGeometrica();

void setNome(string nome);
string getNome();
float calculaArea();

};

#endif // FIGURAGEOMETRICA_H
