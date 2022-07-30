#include "peixe.h"

Peixe::Peixe(string nome1, double peso1, string tipoHabitat1) : Animal(nome1, peso1){
        this->tipoHabitat = tipoHabitat1;
    
}

void Peixe::settipoHabitat(string tipoHabitat1){
    this->tipoHabitat = tipoHabitat1;
}

string Peixe::gettipoHabitat() const{
    return this->tipoHabitat;
}

string Peixe::getEspecie() const{
    return "Peixe";
}

 void Peixe::imprime() const{
    Animal::imprime();
    cout << "Espécie:" << this->getEspecie() << endl;
    cout << "Tipo de Habitat:" << this->gettipoHabitat() << endl;
}

