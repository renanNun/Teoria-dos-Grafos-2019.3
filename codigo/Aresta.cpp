#include "Aresta.h"

using namespace std;

/**
* Construtor Vazio
**/
Aresta::Aresta(){
    //Construtor Vazio
}

/**
* Construtor da classe Aresta
* @param v eh o vertice para o qual a aresta se direciona
* @param vorigem eh o vertice de qual a aresta parte
* @param peso eh o peso da aresta
**/
Aresta::Aresta(Vertice* v, Vertice* vorigem,float peso){
    this->vertice = v;
    this->verticeOrigem = vorigem;
    this->peso = peso;
}
/**
* Destrutor Vazio
**/
Aresta::~Aresta(){
    //Destrutor Vazio
}

/*Getters e Setters*/
float Aresta::getPeso(){
    return this->peso;
}

Vertice* Aresta::getVertice(){
    return this->vertice;
}

Aresta* Aresta::getProx(){
    return this->prox;
}

Vertice* Aresta::getVOrigem(){
    return this->verticeOrigem;
}

void Aresta::setPeso(float p){
    this->peso = p;
}

void Aresta::setVertice(Vertice* p){
    this->vertice = p;
}

void Aresta::setProx(Aresta* p){
    this->prox = p;
}

void Aresta::setVOrigem(Vertice* p){
    this->verticeOrigem = p;
}
