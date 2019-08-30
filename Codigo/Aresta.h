/**
 * Universidade Federal de Juiz de Fora
 * Aresta.h
 * Propósito: Header da estrutura Aresta, para implementação de um grafo
 * 
 * @autor Renan Nunes da Costa Gonçalves
 * @version 1.0 27/08/2019
*/

#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED
#include <iostream>
#include "ListaNo.h"

class Aresta{
private:
    int id;
    float peso;
    Aresta* prox;
    ElementoNo* cabeca; //Cabeça é o vértice de Origem
    ElementoNo* cauda; //Cauda é o vértice para o qual a aresta se direciona

public:
    //Aresta(int idAresta);
    //Aresta(int idAresta, float p);
    Aresta(ElementoNo* cab, ElementoNo* cau, float peso);
    Aresta(int id,ElementoNo* cab, ElementoNo* cau, float peso);
    ~Aresta();

    /*Getters e Setters*/
    int getId();
    float getPeso();
    Aresta* getProx();
    ElementoNo* getCabeca();
    ElementoNo* getCauda();

    void setId(int p);
    void setPeso(float p);
    void setProx(Aresta* p);
    void setCabeca(ElementoNo* p);
    void setCauda(ElementoNo* p);
};

#endif //ARESTA_H_INCLUDED