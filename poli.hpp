#ifndef	POLINOMIO_HPP
#define	POLINOMIO_HPP
#include "listaduplamenteligada.hpp"
#include "mono.hpp"
#include <cmath>

template <typename E>
class Polinomio:public Listaduplamenteligada<Monomio*>{

  public: 
    Polinomio();
    ~Polinomio();
    void insereini(Monomio X);
    void insere(Monomio X);
    int getGrau();
    void mostra();
    void calcula(double k);
};

template <typename E>
Polinomio<E>::Polinomio(){
  Listaduplamenteligada<Monomio*>();
};

template <typename E>
Polinomio<E>::~Polinomio(){}

template<typename E>
void Polinomio<E>::insereini(Monomio X){
  Listaduplamenteligada<Monomio*>::insereInicio(&X);
};

template<typename E>
void Polinomio<E>::insere(Monomio X){
  Listaduplamenteligada<Monomio*>::insereFim(&X);
};

template <typename E>
void Polinomio<E>::mostra(){
  DNo<Monomio*>* cursor = getCabeca();

  while(cursor!=NULL){
    Monomio* A = getElem(cursor);
    int grau = A->getMonGrau();
    if(grau == 0)
      cout<<A->getMonCoef();
    else
      cout<<A->getMonCoef()<<"X"<<"e"<<grau;
    if(getProx(cursor)!= NULL)
      cout<<" + ";
    cursor = getProx(cursor);
  }
}

template<typename E> 
void Polinomio<E>::calcula(double k){
  DNo<Monomio*>* cursor = getCabeca();
  double soma = 0;
  while(cursor!=NULL){
    Monomio* A = getElem(cursor);
    double elem1 = A->getMonCoef();
    int grau1 = A->getMonGrau();
      soma +=  elem1 * pow(k,grau1);
    cursor = getProx(cursor);
  }
  cout<<endl<<"X = "<<soma<<endl;
}


#endif