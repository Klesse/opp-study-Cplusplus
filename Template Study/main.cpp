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


template <class T>
Operar<T>::Operar(T x1, T y1){
    this->x = x1;
    this->y = y1;
}

template <class T>
T Operar<T>::soma(){
    return x+y;
}

template <class T>
T Operar<T>::subtracao(){
    return x-y;
}

template <class T>
T Operar<T>::multiplicacao(){
    return x*y;
}

template <class T>
T Operar<T>::divisao(){
    if (y != 0) return x/y; 
}

int main(){

    double x1 = 5.4, y1 = 5.4;

    Operar<double> operacao(x1, y1);

    cout << operacao.divisao() << endl;
}