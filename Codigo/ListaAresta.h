/**
 * Universidade Federal de Juiz de Fora
 * ListaAresta.h
 * Propósito: Header da estrutura ListaAresta, para implementação de um grafo
 * 
 * @autor Renan Nunes da Costa Gonçalves
 * @version 1.0 27/08/2019
*/

#ifndef LISTAARESTA_H_INCLUDED
#define LISTAARESTA_H_INCLUDED

#include <iostream>
#include "Aresta.h"

class ListaAresta{

private:
    Aresta* raiz;
    Aresta* ultimo;
    int numeroNos;
public:
    ListaAresta(Aresta* p,Aresta* u,int numNos);
    ~ListaAresta();

    Aresta* getPrimeiro();
    Aresta* getUltimo();
    int getNumNos();

    void setPrimeiro(Aresta* p);
    void setUltimo(Aresta* p);
    void setNumNos(int p);

    /*Métodos da classe*/
    void insereAresta(ElementoNo* cab, ElementoNo* cau, float peso);
    bool excluiAresta(ElementoNo* no);
};

#endif //LISTAARESTA_H_INCLUDED