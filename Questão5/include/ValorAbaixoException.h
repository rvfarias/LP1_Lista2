#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <exception>

class ValorAbaixoException : public std::exception{

    public:

        const char* what();
};

#endif // VALORABAIXOEXCEPTION_H
