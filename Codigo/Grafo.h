/**
 * Universidade Federal de Juiz de Fora
 * Grafo.h
 * Propósito: Header da estrutura Grafo, para implementação de um grafo
 * 
 * @autor Renan Nunes da Costa Gonçalves
 * @version 1.0 27/08/2019
*/

#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include <iostream>
#include "ListaNo.h"

class Grafo{

private:
    int ordem; //A ordem de um Grafo corresponde ao seu número de Nós

    bool orientado;
    bool ponderado; 

public:
    Grafo(bool x,bool y);
    ~Grafo();

    /*Getters e Setters*/
    int getOrdem();
    void setOrdem(int n);
    bool ehOrientado();
    bool ehPonderado();

    /*Métodos da Classe Grafos*/
    void imprime();
    void insereAresta(int idNo1, float pesoNo1, int idNo2, float pesoNo2, float pesoAresta);

    void buscaEmLargura();
    void buscaEmProfundidade();
    void Prim();
    void Floyd();
    void Kruskal();
    
};

#endif //GRAFO_H_INCLUDED