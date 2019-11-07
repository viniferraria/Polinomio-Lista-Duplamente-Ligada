#include <iostream>
#include "listaduplamenteligada.hpp"
#include "poli.hpp"
#include "mono.hpp"
using namespace std;

int main() {
  Polinomio<int> U;
  
  Monomio A(4.0,4);
  Monomio B(4.0,3);
  Monomio C(4.0,2);
  
  Monomio D(2.0,9);

  U.insere(A);
  U.insere(B);
  U.insere(C);
  U.insere(D);

  U.mostra();
  U.calcula(1);


  }
  