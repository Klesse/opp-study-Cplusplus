#ifndef PEIXE_H
#define PEIXE_H

#include "animal.h"


class Peixe : public Animal{
    private:
        string tipoHabitat; //água doce, água salgada, etc.
    public:
        Peixe(string,double,string);
        void settipoHabitat(string);
        string gettipoHabitat() const;
        string getEspecie() const; //Retorna "Peixe"
        virtual void imprime() const;
};



#endif