#include "peixe.h"
#include "pessoa.h"
#include "cachorro.h"
//using namespace poo;
using namespace std;

int main() {

Pessoa* pessoa = new Pessoa("Joao", 12);

Peixe* nemo = new Peixe("Nemo", 0.15, "Água salgada");

pessoa->adicionaAnimal(nemo);

Peixe* dory = new Peixe("Dory", 0.2, "Água doce");

pessoa->adicionaAnimal(dory);

Cachorro* teo = new Cachorro("Teo", 6.2, "pug");

    pessoa->adicionaAnimal(teo);
    cout << "================== TODOS ==================" << endl << endl;
    pessoa->imprime(0);
    cout << endl;
    cout << "================== PEIXES ==================" << endl << endl;
    pessoa->imprime(1);
    cout << endl;
    cout << "================== CACHORROS ==================" << endl << endl;
    pessoa->imprime(2);
    cout << endl;
    cout << "================== REMOÇÃO DE UM ELEMENTO ==================" << endl << endl;
    pessoa->removeAnimal("Dory");
    pessoa->imprime(0);
    return 0;
    }