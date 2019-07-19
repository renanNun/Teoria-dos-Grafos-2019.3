#include <iostream>
#include "ListaNos.h"

using namespace std;

/** 
 * Construtor para a Lista de Nós
**/
ListaNos::ListaNos(Vertices* p,Vertices* u){
    this->primeiro = p;
    this->ultimo = u;
}

ListaNos::~ListaNos(){

}

/* Getters e Setters */
Vertices* ListaNos::getPrimeiro(){
    return this->primeiro;
}

Vertices* ListaNos::getUltimo(){
    return this->ultimo;
}