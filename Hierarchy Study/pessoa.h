#ifndef PESSOA_H
#define PESSOA_H

#include "animal.h"
#include "peixe.h"
#include "cachorro.h"
#include <vector>
#include <iostream>
#include <algorithm>


class Pessoa{
    private:
        string nome;
        int idade;
        vector <Animal*> vetor;
    public:
        Pessoa(string, int);
        void setNome(string);
        void setIdade(int);
        string getNome();
        int getIdade();
        bool adicionaAnimal(Animal *);
        bool removeAnimal(string);
        Animal* obtemAnimal(string);
        int qtdeAnimais();
        int qtdePeixes();
        int qtdeCachorros();
        static bool comparar(Animal*, Animal*);
        void imprime(int); //0 -> imprime todos / 1 -> Imprime apenas peixes / 2 -> Imprime apenas cachorros
};



#endif