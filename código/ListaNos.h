#ifdef LISTANOS_H_INCLUDED
#define LISTANOS_H_INCLUDED

#include "ListaArestas.h"
#include "No.h"

class ListaNos{

private:
    Vertices* primeiro;
    Vertices* ultimo;
public:
    ListaNos(Vertices* p,Vertices* u){
        this->primeiro = p;
        this->ultimo = u;
    };

    ~ListaNos(){
        Vertices* p = this->primeiro;
        Vertices* t;

        while (p != nullptr){
            t = p->getProx();
            delete p;
            p = t;
        }
    };

    /* Getters e Setters */
    Vertices* getPrimeiro(){
        return this->primeiro;
    };
    Vertices* getUltimo(){
        return this->ultimo;
    };
    void setPrimeiro(Vertices* p){
        this->primeiro = p;
    };
    void setUltimo(Vertices* p){
        this->ultimo = p;
    };

    /** 
    * Cria um novo Vértice e insere  ele na lista de Nós. 
    **/
    void insereNo(No* p){
        Vertices* n = new Vertices (p);
        if (this->primeiro == nullptr) //Grafo Vazio
        {
            this->primeiro = n;
            this->ultimo = n;
        } else {
            this->ultimo->setProx(n);
            this->ultimo = n;
        }
    };

    Vertices* buscaId(int id){
        if (this->primeiro != nullptr){
            Vertices* p = this->primeiro;

            while(p != nullptr){
                if(p->getNo()->getId() == id)
                    return p;
                else
                    p = p->getProx();
            }
        }
        return nullptr;
    };
    
    void excluiNo(int idNo);

    void imprime(){
        if(this->primeiro != nullptr){
            std::cout << std::endl << "(id do No)
             --peso da aresta--> (id do No)" << std::endl;

             Vertices* p = this->primeiro;
             while (p!= nullptr){
                 std::cout << "(" << p->getNo()->getId() << ")" << "--->";
                 Aresta* a = p->getArestas()->getPrimeiro();
                 while(a != nullptr){
                     std::cout << "(" << a->getVertice()->getNo()->getId() << ")";
                     a = a->getProx();
                 }
                 p = p->getProx();
                 std::cout<< std::endl;
             }
        }
    };

};

#endif //LISTANOS_H_INCLUDED