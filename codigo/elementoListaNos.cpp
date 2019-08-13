#include "elementoListaNos.h"

using namespace std;

/**
* Construtor Vazio
**/
Vertice::Vertice(){
    // Construtor Vazio
}

/**
* Construtor da classe Elemento da Lista de Nos
* @param numNos eh o numero de Nos do grafo
* @param novon eh um novo No
**/
Vertice::Vertice(int numNos, No* novon){
    this->n = novon;
    this->arestas = new ListaAresta(nullptr,nullptr,0);
    this->prox = nullptr;
}

/**
* Destrutor da classe elemento da lista de Nos
**/
Vertice::~Vertice(){
    delete arestas;
    delete n;
}

/*Getters e Setters*/
No* Vertice::getNo(){
    return this->n;
}

ListaAresta* Vertice::getArestas(){
    return this->arestas;
}

Vertice* Vertice::getProx(){
    return this->prox;
}

void Vertice::setVertice(Vertice* p){
    this->prox = p;
}
