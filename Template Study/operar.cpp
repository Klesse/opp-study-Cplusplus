#include "operar.h"

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
