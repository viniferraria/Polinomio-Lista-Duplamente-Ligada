#ifndef DNO_HPP
#define DNO_HPP
#include "listaduplamenteligada.hpp"

template <typename E>
class DNo{
  private: 
    E elem;
    DNo<E>* prox;
    DNo<E>*prev;
   template <typename U> friend class Listaduplamenteligada;
};

#endif