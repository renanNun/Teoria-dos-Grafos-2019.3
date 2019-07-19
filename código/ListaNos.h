#ifdef LISTANOS_H_INCLUDED
#define LISTANOS_H_INCLUDED

#include "ListaArestas.h"
#include "No.h"

class ListaNos{

private:
    Vertices* primeiro;
    Vertices* ultimo;
public:
    ListaNos(Vertices* p,Vertoces* u);
    ~ListaNos();

    /* Getters e Setters */
    Vertices* getPrimeiro();
    Vertices* getUltimo();
    void setPrimeiro(Vertices* p);
    void setUltimo(Vertices* p);

    void insereNo(No* p);
    void excluiNo(int idNo);

    void imprime();

};

#endif //LISTANOS_H_INCLUDED