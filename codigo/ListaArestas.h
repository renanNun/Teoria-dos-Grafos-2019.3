#ifndef LISTAARESTAS_H_INCLUDED
#define LISTAARESTAS_H_INCLUDED

#include <iostream>


class Aresta; // Apenas para o programa saber que esta classe existe
class Vertice; //Apenas para o programa saber que esta classe existe

#include "Aresta.h"
#include "elementoListaNos.h"

class ListaAresta{

private:
    Aresta* primeiro;
    Aresta* ultimo;
    int numNos;

public:
    ListaAresta();
    ListaAresta(Aresta* p,Aresta* u,int numNos);
    ~ListaAresta();

    /*Getters e Setters*/
    Aresta* getPrimeiro();
    Aresta* getUltimo();
    int getNumNos();

    void setPrimeiro(Aresta* p);
    void setUltimo(Aresta* p);
    void setNumNos(int p);

    /*Métodos da Classe*/
    void insere(Vertice* v,Vertice* vorigem, float peso);
    bool exclui(Vertice* v);

};


#endif // LISTAARESTAS_H_INCLUDED
