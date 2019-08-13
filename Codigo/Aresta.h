#ifdef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

#include "ElementoListaNos.h"

class Aresta{
    private:
        float peso;
        Vertices* v;
        Vertices* v_origem;
        Aresta* prox;
    public:
    
    /** 
    * Construtor de Aresta
    * @param origem é o vertice de qual a aresta se origina
    * @param vertice é o vertice para qual a aresta se direciona
    * @param peso é o peso do caminho de um vertice à outro 
    **/
    Aresta(Vertices* origem, Vertices* vertice,int peso){
        this->v = vertice;
        this->v_origem = origem;
        this->peso = peso;
        this->prox = nullptr;
    };

    /** 
    * Destrutor de Arestas 
    **/
    ~Aresta(){};

    /* Getters e Setters */
    int getPeso(){return this->peso;};
    Vertices* getOrigem(){return this->v_origem;};
    Vertices* getVertice(){return this->v;};
    Aresta* getProx(){retun this->prox;};
    void setPeso(int n){this->peso = n;};
    void setVertice(Vertices* n){this->v = n;};
    void setProx(Aresta* n){this->prox = n;};

};

#endif //ARESTA_H_INCLUDED