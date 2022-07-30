#include "racional.h"

//Cálcula o MDC do denominador e do numerador
int Racional::mdc(int c, int d){
        int r;
        while(d != 0){
            r = c % d;
            c = d;
            d = r;
        }
        return c;
}

//Construtor padrão da classe
Racional::Racional(int c, int d){
  
        if(d!=0){
            int m = mdc(c,d);
            numerador = c/m;
            denominador = d/m;
        //Caso haja sinal negativo no denominador, este deve ser passado para o numerador
            if (denominador < 0){
            numerador = -numerador;
            denominador = -denominador;
        }
        }
        
        
}

Racional::Racional(){
  numerador = 0;
  denominador = 1;
 
}
        
//Sobrecarga do operador de adição
Racional Racional::operator+(const Racional &r1){
    int n, m, o;
    n = numerador*r1.denominador + denominador*r1.numerador;
    m = denominador*r1.denominador;
    o = mdc(n,m);
    n = n/o;
    m = m/o;

    return Racional(n,m);

}

//Sobrecarga do operador de subtração
Racional Racional::operator-(const Racional &r1){
    int n, m, o;
    n = numerador*r1.denominador - denominador*r1.numerador;
    m = denominador*r1.denominador;
    o = mdc(n,m);
    n = n/o;
    m = m/o;

    return Racional(n,m);
}

//Sobrecarga do operador de multiplicação
Racional Racional::operator*(const Racional &r1){
    int n, m, o;
    n = numerador*r1.numerador;
    m = denominador*r1.denominador;
    o = mdc(n,m);
    n = n/o;
    m = m/o;

    return Racional(n,m);
}

//Sobrecarga do operador de divisão
Racional Racional::operator/(const Racional &r1){
    int n, m, o;
    n = numerador*r1.denominador;
    m = denominador*r1.numerador;
    o = mdc(n,m);
    n = n/o;
    m = m/o;

    return Racional(n,m);
}

//Sobrecarga do operador "menor"
bool Racional::operator<(const Racional &r1){
    return (numerador*r1.denominador < denominador*r1.numerador);
     

}

//Sobrecarga da igualdade
bool Racional::operator==(const Racional &r1){
    return (numerador*r1.denominador == denominador*r1.numerador);
     

}

//Sobrecarga do operador "menor igual"
bool Racional::operator<=(const Racional &r1){
    return (*this < r1 || *this == r1);

}
//Sobrecarga do operador "maior"
bool Racional::operator>(const Racional &r1){
    return (!(*this < r1) && !(*this == r1));
   
}

//Sobrecarga do operador "maior igual"
bool Racional::operator>=(const Racional &r1){
    return (!(*this < r1) || (*this == r1));
      
}

//Sobrecarga da desigualdade
bool Racional::operator!=(const Racional &r1){
    return (!(*this == r1));
    
}


//Retorna o numerador
int Racional::getNumerador(){
    return this->numerador;
}

//Retorna o denominador
int Racional::getDenominador(){
    return this->denominador;
}

//Atribuir valor ao denominador (evitar divisão por 0)
void Racional::setDenominador(int a){
  if (a!=0)
    this->denominador = a;
    


}

//Sobrecarga do operador de entrada
istream &operator>>(istream &input , Racional &num){
  int a;
  input >> setw(1) >> num.numerador;
  input.ignore();
  input >> setw(1) >> a;
  while (a == 0){
      if (a == 0){
        cout << "O denominador não pode ser 0, tente novamente:" << endl;
        input >> setw(1) >> num.numerador;
        input.ignore();
        input >> setw(1) >> a;
      }
    }
  num.setDenominador(a);
    return input;
  
     
}



//Sobrecarga do operador de saída
ostream &operator<<(ostream &on , const Racional &r1){
    //Caso o numerador seja igual o numerador, sabemos que o resultado é igual a 1
    if (r1.numerador == r1.denominador)
        on << r1.numerador/r1.denominador;
    else if (r1.denominador == 1)
        on << r1.numerador;
    else
        on << r1.numerador << "/" << r1.denominador;

    return on;
}