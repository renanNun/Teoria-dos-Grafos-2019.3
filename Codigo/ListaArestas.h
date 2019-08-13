#ifdef LISTAARESTAS_H_INCLUDED
#define LISTAARESTAS_H_INCLUDED

#include "Aresta.h"
#include "ElementoListaNos.h"

class ListaArestas{

private:
    Aresta* primeiro;
    Aresta* ultimo;
public:
    /** 
    * Construtor de Uma lista de arestas
    * @param a primeiro elemento da lista de arestas
    * @param b ultimo elemento da lista de arestas
    **/
    ListaArestas(Aresta* a,Aresta* b){
        this->primeiro = a;
        this->ultimo = b;
    };

    /** 
    *Destrutor de uma lista de arestas 
    **/
    ~ListaArestas(){
        Aresta* a = this->primeiro;
        Aresta* aux;

        while(a != nullptr){
            aux = a->getProx();
            delete a;
            a = aux;
        }
    };

    /* Getters e Setters */
    Aresta* getPrimeiro(){return this->primeiro;};
    Aresta* getUltimo(){return this->ultimo;};
    void setPrimeiro(Aresta* a){this->primeiro = a;};
    void setUltimo(Aresta* a){this->ultimo = a;};

    /** 
    * Insere uma nova aresta na lista de arestas
    * @param v é o vertice no qual a aresta se direciona
    * @param o é o vertice de origem da aresta
    * @param peso é o peso da aresta
    **/
    void insereAresta(Vertices* v,Vertices* o,int peso){
        Aresta* a = new Aresta(v,o,peso);

        if(this->primeiro == nullptr) //Se o Vértice de origem não possuir arestas
        {
            this->primeiro = a;
            this->ultimo = a;
        } else {
            this->ultimo->setProx(a);
            this->ultimo = a;
        }
    };

    /** 
    * Remove uma lista de Arestas 
    **/
    bool removeAresta(Vertices* v){
        if (this->primeiro != nullptr){
            Aresta* a = this->primeiro->getProx(); //Segundo elemento da lista
            if (this->primeiro->getVertice()->getNo()->getId() == this->v->getNo()->getId()){
                delete this->primeiro;
                this->primeiro = a;
                return true;
            }
            else {
                Aresta* ant = this->primeiro;
                Aresta* p = nullptr;

                while(a != nullptr){
                    if(a->getVertice()->getNo()->getId() == v->getNo()->getId()){
                        if(a == this->ultimo){
                            this->ultimo = ant;
                        }
                        p = a->getProx();
                        ant->setProx(p);
                        delete a;
                        return true;
                    } else {
                        ant = a;
                        a = a->getProx();
                    }
                }
            }
        }
        return false;
    };

};

#endif //LISTAARESTAS_H_INCLUDED