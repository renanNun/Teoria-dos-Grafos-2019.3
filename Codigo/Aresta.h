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

class Aresta{

private:
    int id;
    float peso;
    Aresta* prox;

public:
    Aresta(int idAresta);
    Aresta(int idAresta, float p);
    ~Aresta();

    /*Getters e Setters*/
    int getId();
    float getPeso();
    Aresta* getProx();

    void setId(int p);
    void setPeso(float p);
    void setProx(Aresta* p);
};

#endif //ARESTA_H_INCLUDED