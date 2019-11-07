#ifndef LISTADUPLAMENTELIGADA_HPP
#define LISTADUPLAMENTELIGADA_HPP
#include <iostream>
#include "DNo.hpp"

using namespace std;

template <typename E>
class Listaduplamenteligada{
  private:
    DNo<E>*cabeca;
    DNo<E>*fim;
  public:
    Listaduplamenteligada();
    ~Listaduplamenteligada();
    bool vazia() const;
    const E& Inicio() const;
    const E& Fim() const;
    void insereInicio(const E& e);
    void insereFim(const E& e);
    void removeInicio();
    void removeFim();
    DNo<E>* getCabeca();
    DNo<E>* getFim();
    DNo<E>* getProx(DNo<E> * proximo);
    DNo<E>* getPrev(DNo<E> * anterior);
    E getElem(DNo<E>* aux);

};

template <typename E>
Listaduplamenteligada<E>::Listaduplamenteligada(){
  cabeca = NULL;
  fim = NULL;
}

template <typename E>
Listaduplamenteligada<E>::~Listaduplamenteligada(){
  delete cabeca;
}

template <typename E>
bool Listaduplamenteligada<E>::vazia() const{
  return cabeca == NULL;
}

template <typename E>
const E& Listaduplamenteligada<E>::Inicio()const{
  return cabeca -> elem;
}

template <typename E>
const E& Listaduplamenteligada<E>::Fim()const{
  return fim->elem;
}

template <typename E>
void Listaduplamenteligada<E>::insereInicio(const E&e){
  DNo<E>*aux;
  aux = new DNo<E>();
  aux -> elem = e;
  aux -> prev = NULL;
  aux -> prox = cabeca;
  if (cabeca!=NULL)
    cabeca -> prev = aux;
  if (fim == NULL){
    fim = aux;
    fim -> prox = NULL;
  }
  cabeca = aux;
}

template <typename E>
void Listaduplamenteligada<E>::insereFim(const E&e){
  DNo<E>*aux;
  aux = new DNo<E>();
  aux -> elem = e;
  aux -> prev = fim;
  aux -> prox = NULL;
  if (fim!=NULL)
    fim -> prox = aux;
  if(cabeca == NULL){
    cabeca = aux;
    cabeca -> prev = NULL;
  }
  fim = aux;
}

template <typename E>
void Listaduplamenteligada<E>::removeInicio(){
  if(!vazia()){
    DNo<E>*aux = cabeca;
    cabeca = cabeca -> prox;
    cabeca -> prev = NULL;
    delete aux;
  }
}

template <typename E>
void Listaduplamenteligada<E>::removeFim(){
  if(!vazia()){
    DNo<E>*aux = fim;
    fim = fim->prev;
    fim -> prox = NULL;
    delete aux;
  }
}

template <typename E>
DNo<E>* Listaduplamenteligada<E>::getCabeca(){
  return cabeca;
}

template <typename E>
DNo<E>* Listaduplamenteligada<E>::getFim(){
  return fim;
}

template <typename E>
DNo<E>* Listaduplamenteligada<E>::getProx(DNo<E>* proximo){
  return proximo->prox;
}

template <typename E>
DNo<E>* Listaduplamenteligada<E>::getPrev(DNo<E>* anterior){
  return anterior->prev;
}


template <typename E>
E Listaduplamenteligada<E>::getElem(DNo<E>* aux){
  return aux->elem;
}

#endif