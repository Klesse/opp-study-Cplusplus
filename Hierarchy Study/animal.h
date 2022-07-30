#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;



class Animal{
    private:
        string nome; //Nome do Animal
        double peso; //Peso do Animal
    public:
        Animal(string, double);
        virtual ~Animal();
        void setNome(string);
        void setPeso(double);
        string getNome() const;
        double getPeso() const;
        virtual string getEspecie() const = 0;
        virtual void imprime() const; //Utiliza do método getEspecie()


};



#endif
