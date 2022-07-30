#include "pessoa.h"


    Pessoa::Pessoa(string nome1, int idade1){
        if (idade1 > 0 && idade1 < 120){
            this->idade = idade1;
            this->nome = nome1;
        }
    }

    //Métodos Settets

    void Pessoa::setNome(string nome1){
        this->nome = nome1;
    }

    void Pessoa::setIdade(int idade1){
        this->idade = idade1;
    }

    //Métodos Getters

    string Pessoa::getNome(){
        return this->nome;
    }

    int Pessoa::getIdade(){
        return this->idade;
    }

    //Adicionar animal na lista

    bool Pessoa::adicionaAnimal(Animal* animal){
            this->vetor.push_back(animal);
            return true;

    }

    //Remover animal da lista

    bool Pessoa::removeAnimal(string nome1){
        long unsigned int i;
        for (i=0; i < vetor.size(); i++){
            if (vetor[i]->getNome() == nome1){
                this->vetor.erase(vetor.begin() + i);
            }

        }
        return true;
    }

    //Retorna um animal da lista

    Animal* Pessoa::obtemAnimal (string nome1){
        long unsigned int i = 0;
        for (i=0; i < vetor.size(); i++){
            if (this->vetor[i]->getNome() == nome1){
                return this->vetor[i];
            }
        }
        return NULL;
    }

    //Retorna quantos animais tem na lista

    int Pessoa::qtdeAnimais(){
        return this->vetor.size();
    }

    //Informa quantos peixes tem na lista

    int Pessoa::qtdePeixes(){
        int contador=0;
        long unsigned int i;
        for (i=0; i < vetor.size(); i++){
            if (vetor[i]->getEspecie() == "Peixe"){
                contador++;
            }
        }
        return contador;
    }

    //Informa quantos cachorros tem na lista

    int Pessoa::qtdeCachorros(){
        int contador=0;
        long unsigned int i;
        for (i=0; i < vetor.size(); i++){
            if (vetor[i]->getEspecie() == "Cachorro"){
                contador++;
            }
        }
        return contador;
    }

   bool Pessoa::comparar(Animal* a, Animal* b){
        return (a->getNome() < b->getNome());
    }

    void Pessoa::imprime(int criterio){

        //Ordenar os itens do vetor

        sort(vetor.begin(), vetor.end(), comparar);

        long unsigned int i;
        switch(criterio){
            case 0:
                for (i=0; i < vetor.size(); i++){
                        this->vetor[i]->imprime();
                        cout << endl;
                }
                break;
            case 1:
                for (i=0; i < vetor.size(); i++){
                   if (vetor[i]->getEspecie() == "Peixe") {
                        this->vetor[i]->imprime();
                        cout << endl;
                   }
                }
                break;
            case 2:
                for (i=0; i < vetor.size(); i++){
                   if (vetor[i]->getEspecie() == "Cachorro") {
                        this->vetor[i]->imprime();
                        cout << endl;
                   }
                }
                break;
        }
            

    }

    
