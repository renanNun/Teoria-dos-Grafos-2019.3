#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

#include <iostream>
#include "elementoListaNos.h"


class Aresta{

private:
    float peso;
    Vertice* vertice;
    Aresta* prox;
    Vertice* verticeOrigem;
public:
    Aresta();
    Aresta(Vertice* v, Vertice* vorigem,float vpeso);
    ~Aresta();

    /*Getters e Setters*/
    float getPeso();
    Vertice* getVertice();
    Aresta* getProx();
    Vertice* getVOrigem();

    void setPeso(float p);
    void setVertice(Vertice* p);
    void setProx(Aresta* p);
    void setVOrigem(Vertice* p);

};


#endif // ARESTA_H_INCLUDED
