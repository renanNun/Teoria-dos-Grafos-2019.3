#ifndef ELEMENTOLISTANOS_H_INCLUDED
#define ELEMENTOLISTANOS_H_INCLUDED

#include <iostream>
#include "No.h"
#include "ListaArestas.h"

class ListaAresta; //Apenas para o programar saber que essa classes existe

class Vertice{

private:
    No* n;
    ListaAresta* arestas;
    Vertice* prox;

public:
    Vertice();
    Vertice(int numNos, No* novon);
    ~Vertice();

    /*Getters e Setters*/
    No* getNo();
    ListaAresta* getArestas();
    Vertice* getProx();

    void setVertice(Vertice* p);
};

#endif // ELEMENTOLISTANOS_H_INCLUDED
