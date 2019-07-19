#ifdef NO_H_INCLUDED
#define NO_H_INCLUDED

#include "ListaArestas.h"

class No{

private:
    int id;
    int grauEntrada;
    int grauSaida;
    int peso;

public:
    /**
    * Construtor Vazio
    **/
    No();
    /**
    * Construtor de um No
    * @param id é o indice de um Vértice
    * @param pesoNo é o peso de um Vértice
    * @param grauDeEntrada representa o número de Arestas que vão para um Nó
    * @param grauDeSaida representa o número de Arestas que partem de um Nó
    **/
    No(int id, int pesoNo, int grauDeEntrada,int grauDeSaida);
    /** 
    * Destrutor Vazio 
    **/
    ~No(){};

    /* Getters e Setter */
    int getId() {return this->id;};
    int getGrauEntrada(){return this->grauEntrada;};
    int getGrauSaida(){return this->grauSaida;};
    int getPeso(){return this->peso;};
    void setId(int n){this->id = n;};
    void setGrauEntrada(int n){this->grauEntrada = n;};
    void setGrauSaida(int n){this->grauSaida = n;};
    void setPeso(int n){this-peso = n;};

};


class Vertices { // Vértice é um elemento da Lista de Nós

private:
    No* v;
    Vertices* prox;
    ListaArestas* arestas;
public:
    /** 
    * Construtor de Vértices 
    **/
    Vertices(No* n){
        this->v = n;
        this->prox = nullptr;
        arestas = new ListaAresta(nullptr,nullptr,0);
    };

    /**
    * Destrutor de Vértices  
    **/
    ~Vertices(){
        delete this->v;
        delete this->arestas;
    };

    /* Getters e Setters */
    No* getNo(){return this->v;};
    Vertices* getProx(){return this->prox;};
    void setProx(Vertices* n){tis->prox = n;};
    ListaArestas* getArestas(){return this->arestas;};
};

#endif //NO_H_INCLUDED