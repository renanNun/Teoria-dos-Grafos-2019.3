/**
 * Universidade Federal de Juiz de Fora
 * ElementoNo.h e ListaNo.h
 * Propósito: Header das estruturas ElementoNo e  ListaNo, para implementação de um grafo simples
 * 
 * @autor Renan Nunes da Costa Gonçalves
 * @version 1.0 27/08/2019
*/
#ifndef LISTANO_H_INCLUDED
#define LISTANO_H_INCLUDED

#include <iostream>
#include "ListaAresta.h"
#include "No.h"

class ElementoNo{

private:
    No* no;  //Elemento contido no No da lista;
    ListaAresta* arestas; //Lista de arestas
    ElementoNo* prox; //Proximo elemento da lista
public:
    ElementoNo(int numNos, No* novo);
    ~ElementoNo();

    ListaAresta* getAresta();
    No* getNo();
    ElementoNo* getProx();
    void setProx(ElementoNo* n);

};

class ListaNo{

private:
    ListaNo* raiz;
    ListaNo* ultimo;
    int numeroNos;
public:
    ListaNo(ElementoNo* r, ElementoNo* u, int nNos);
    ~ListaNo();

    ListaNo* getPrimeiro();
    ListaNo* getUltimo();
    int getNumNos();
    void setPrimeiro(ListaNo* p);
    void setUltimo(ListaNo* p);
    void setNumNos(int p);

    /*Métodos de classe*/
    void insereNo(No* novo);
    void excluiNo(int id);
};

#endif //LISTANO_H_INCLUDED