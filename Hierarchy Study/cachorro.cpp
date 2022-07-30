#include "cachorro.h"


    Cachorro::Cachorro(string nome1, double peso1, string raca1): Animal(nome1, peso1){
        this->raca = raca1;
        
    }

    void Cachorro::setRaca(string raca1){
        this->raca = raca1;
    }

    string Cachorro::getRaca() const{
        return this->raca;
    }

    string Cachorro::getEspecie() const{
        return "Cachorro";
    }

    void Cachorro::imprime() const{
        Animal::imprime();
        cout << "Espécie:" << this->getEspecie() << endl;
        cout << "Raça:" << this->getRaca() << endl;
}
