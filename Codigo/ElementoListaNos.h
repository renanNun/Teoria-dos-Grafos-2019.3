#ifdef ELEMENTOLISTANOS_H_INCLUDED
#define ELEMENTOLISTANOS_INCLUDED

#include "No.h"

class Vertices { // Vértice é um elemento da Lista de Nós

private:
    No* v;
    Vertices* prox;
    ListaArestas* arestas;
public:
    /** 
    * Construtor de Vértices 
    **/
    Vertices(No* n){
        this->v = n;
        this->prox = nullptr;
        arestas = new ListaAresta(nullptr,nullptr,0);
    };

    /**
    * Destrutor de Vértices  
    **/
    ~Vertices(){
        delete this->v;
        delete this->arestas;
    };

    /* Getters e Setters */
    No* getNo(){return this->v;};
    Vertices* getProx(){return this->prox;};
    void setProx(Vertices* n){tis->prox = n;};
    ListaArestas* getArestas(){return this->arestas;};
};

#endif //ELEMENTOLISTANOS_H_INCLUDED