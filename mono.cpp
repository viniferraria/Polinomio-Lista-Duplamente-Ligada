#include <iostream>
#include "mono.hpp"

Monomio::Monomio (const double c, const int g){
coef = c;
grau = g;
}

Monomio::~Monomio(){}

double Monomio::getMonCoef(){
  return coef;
}

int Monomio::getMonGrau(){
  return grau;
}
