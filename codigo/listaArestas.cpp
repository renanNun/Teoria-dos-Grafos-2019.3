#include "ListaArestas.h"

using namespace std;

/**
* Construtor Vazio
**/
ListaAresta::ListaAresta(){
    //Construtor vazio
}

/**
* Construtor da classe Lista de Arestas
* @param p eh o primeiro elemento da lista
* @param u eh o ultimo elemento da lista
* @param numNos eh o numero de Nos
**/
ListaAresta::ListaAresta(Aresta* p,Aresta* u,int numNos){
    this->primeiro = p;
    this->ultimo = u;
    this->numNos = numNos;
}

/**
* Destrutor da classe Lista de Arestas
**/
ListaAresta::~ListaAresta(){
    Aresta* a = this->primeiro;
    Aresta* aux;
    while(a != nullptr){
        aux = a->getProx();
        delete a;
        a = aux;
    }
}

/*Getters e Setters*/
Aresta* ListaAresta::getPrimeiro(){
    return this->primeiro;
}

Aresta* ListaAresta::getUltimo(){
    return this->ultimo;
}

int ListaAresta::getNumNos(){
    return this->numNos;
}

void ListaAresta::setPrimeiro(Aresta* p){
    this->primeiro = p;
}

void ListaAresta::setUltimo(Aresta* p){
    this->ultimo = p;
}

void ListaAresta::setNumNos(int p){
    this->numNos = p;
}

/*Métodos da Classe*/
void ListaAresta::insere(Vertice* v,Vertice* vorigem, float peso){

}

bool ListaAresta::exclui(Vertice* v){

}

