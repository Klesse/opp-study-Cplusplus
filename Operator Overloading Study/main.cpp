#include <iostream>

using namespace std;

#include "racional.h"

int main() {

  int op;
  char continuar_;
  bool continuar;
  do
  {
    cout<<"OPERAÇÕES E COMPARAÇÕES DE FRAÇÕES"<<endl;
    cout<<"0 - SOMA "<<endl;
    cout<<"1 - SUBTRAÇÃO"<<endl;
    cout<<"2 - MULTIPLICAÇÃO"<<endl;
    cout<<"3 - DIVISÃO"<<endl;
    cout<<"4 - >"<<endl;
    cout<<"5 - <"<<endl;
    cout<<"6 - >="<<endl;
    cout<<"7 - <="<<endl;
    cout<<"8 - IGUAL"<<endl;
    cout<<"9 - DIFERENTE"<<endl;
    cout<<"DIGITE O NÚMERO DA OPERAÇÃO OU COMPARAÇÃO: ";
    cin>>op;

    cout<<endl<<endl;

    Racional r1;
    Racional r2;

    cout<<"DIGITE A PRIMEIRA FRAÇÃO: (numerador/denominador) ";
    cin>>r1;
    cout<<"DIGITE A SEGUNDA FRAÇÃO: (numerador/denominador) ";
    cin>>r2;

    cout<<endl<<endl;

    switch(op){
      case 0:
        cout<<r1<<" + "<<r2<<" = "<<r1+r2<<endl;
        break;
      case 1:
        cout<<r1<<" - "<<r2<<" = "<<r1-r2<<endl;
        break;
      case 2:
        cout<<r1<<" * "<<r2<<" = "<<r1*r2<<endl;
        break;
      case 3:
        cout<<r1<<" / "<<r2<<" = "<<r1/r2<<endl;
        break;
      case 4:
        if(r1>r2)
        {
          cout<<r1<<" > "<<r2<<" é verdadeiro"<<endl;
          break;
        }
        else{
          cout<<r1<<" > "<<r2<<" é falso"<<endl;
          break;
        }
      case 5:
        if(r1<r2)
        {
          cout<<r1<<" < "<<r2<<" é verdadeiro"<<endl;
          break;
        }
        else{
          cout<<r1<<" < "<<r2<<" é falso"<<endl;
          break;
        }
      case 6:
        if(r1 >= r2)
        {
          cout<<r1<<" >= "<<r2<<" é verdadeiro"<<endl;
          break;
        }
        else{
          cout<<r1<<" >= "<<r2<<" é falso"<<endl;
          break;
        }
        break;
      case 7:
        if(r1<=r2)
        {
          cout<<r1<<" <= "<<r2<<" é verdadeiro"<<endl;
          break;
        }
        else{
          cout<<r1<<" <= "<<r2<<" é falso"<<endl;
          break;
        }
      case 8:
        if(r1 == r2)
        {
          cout<<r1<<" == "<<r2<<" é verdadeiro"<<endl;
          break;
        }
        else{
          cout<<r1<<" == "<<r2<<" é falso"<<endl;
          break;
        }
      case 9:
        if(r1 != r2)
        {
          cout<<r1<<" != "<<r2<<" é verdadeiro"<<endl;
          break;
        }
        else{
          cout<<r1<<" != "<<r2<<" é falso"<<endl;
          break;
        }
      default:
        cout<<"Erro: Não foi possível realizar o cálculo";
        break;
    }

    cout<<endl<<endl;

    cout<<"DESEJA CONTINUAR (S/N): ";
    cin>>continuar_;
    if(continuar_=='S')
    {
      continuar = true;
    }
    else
    {
      continuar = false;
    }
    system("clear");

  }while(continuar);

  return 0;
}
