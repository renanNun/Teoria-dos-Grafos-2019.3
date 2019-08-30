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
    ListaAresta();
    ~ListaAresta();

};

#endif //LISTAARESTA_H_INCLUDED