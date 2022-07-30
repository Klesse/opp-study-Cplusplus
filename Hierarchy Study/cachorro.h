#ifndef CACHORRO_H
#define CACHORRO_H

#include "animal.h"


class Cachorro : public Animal{
    private:
        string raca;
    public:
        Cachorro(string, double, string);
        void setRaca(string);
        string getRaca() const;
        virtual string getEspecie() const;
        virtual void imprime() const;

};



#endif