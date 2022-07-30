#ifndef OPERAR_H
#define OPERAR_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

template <class T>

class Operar{
    private:
        T x, y;
    public:
        Operar(T,T);
        T soma();
        T subtracao();
        T multiplicacao();
        T divisao();


};

#endif