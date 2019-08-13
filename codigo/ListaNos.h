#ifndef LISTANOS_H_INCLUDED
#define LISTANOS_H_INCLUDED
#include "elementoListaNos.h"

class listaNos{

private:
    Vertice* primeiro;
    Vertice* ultimo;
    int numNos;
public:
    listaNos();
    listaNos(Vertice* p,Vertice* u,int numNos);
    ~listaNos();

    /*Getters e Setters*/
    Vertice* getPrimeiro();
    Vertice* getUltimo();
    int getNumNos();

    void setPrimeiro(Vertice* p);
    void setUltimo(Vertice* p);
    void setNumNos(int p);

    /*Métodos*/
    void insereVertice(No* n);
    void excluiVertice(int idNo);
    void imprime(); // Impressão por lista de Adjacência, um dos metodos solicitados no trabalho pratico

};

#endif // LISTANOS_H_INCLUDED
