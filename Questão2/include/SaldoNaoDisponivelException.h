#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>
#include <iostream>

class SaldoNaoDisponivelException : std::exception{

    public:
        SaldoNaoDisponivelException();
        std::string saldoNaoDisponivel();
};

#endif // SALDONAODISPONIVELEXCEPTION_H
