#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>
#include <iomanip>

using namespace std;

class Racional{
    
    private:
        int numerador, denominador;

    public:
        Racional(int, int);
        Racional();
        int mdc(int,int);
        Racional operator+(const Racional &);
        Racional operator-(const Racional &);
        Racional operator*(const Racional &);
        Racional operator/(const Racional &);
        bool operator<(const Racional &);
        bool operator==(const Racional &);
        bool operator<=(const Racional &);
        bool operator>(const Racional &);
        bool operator>=(const Racional &);
        bool operator!=(const Racional &);
        int getNumerador();
        int getDenominador();
        void setDenominador(int);
        friend istream &operator>>(istream & , Racional &);
        friend ostream &operator<<(ostream &, const Racional &);

};

#endif