#include "animal.h"

//Constructor

Animal::Animal(string nome1, double peso1){
    if (peso1 > 0){
        this->peso = peso1;
        this->nome = nome1;
    }

}

//Destructor

Animal::~Animal(){

}

//Métodos Setters

    void Animal::setNome(string nome1){
        this->nome = nome1;
    }

    void Animal::setPeso(double peso1){
        if (peso1 > 0)
            this->peso = peso1;
    }

//Métodos Getters

    string Animal::getNome() const{
        return this->nome;
    }   

    double Animal::getPeso() const{
        return this->peso;
    }

//Método de impressão

    void Animal::imprime() const{
        cout << "Nome:" << this->getNome() << endl;
        cout << "Peso:" << this->getPeso() << endl;
    }

