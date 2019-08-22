#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>

class SaldoNaoDisponivelException : std::exception{

    public:

        const char* what();

};

#endif // SALDONAODISPONIVELEXCEPTION_H
