#include "Aresta.h"

using namespace std;

/**
 * Construtor da classe Aresta
 * @param idAresta - Representa o índice de uma aresta
 * @autor: Renan Nunes da Costa Gonçalves
*/
/*
Aresta::Aresta(int idAresta){
    this->id = idAresta;
    this->peso = -1;
    this->prox = nullptr;
}
*/

/**
 * Construtor da classe Aresta
 * @param idAresta - Representa o índice de uma aresta
 * @param p - Representa o peso/custo de uma aresta
 * @autor: Renan Nunes da Costa Gonçalves
*/
/*
Aresta::Aresta(int idAresta,float p){
    this->id = idAresta;
    this->peso = p;
    this->prox = nullptr;
}
*/

Aresta::Aresta(ElementoNo* cab, ElementoNo* cau, float peso);
Aresta:Aresta(int id,ElementoNo* cab, ElementoNo* cau, float peso);


/**
 * Destrutor da Classe Aresta
 * @autor: Renan Nunes da Costa Gonçalves
*/
Aresta::~Aresta(){

}

/*Getters and Setters*/
int Aresta::getId(){
    return this->id;
}

float Aresta::getPeso(){
    return this->peso;
}

Aresta* Aresta::getProx(){
    return this->prox;
}

void Aresta::setId(int p){
    this->id = p;
}

void Aresta::setPeso(float p){
    this->peso = p;
}

void Aresta::setProx(Aresta* p){
    this->prox = p;
}

ElementoNo* Aresta::getCabeca(){
    return this->cabeca;
}

ElementoNo* Aresta::getCauda(){
    return this->cauda;
}

void Aresta::setCabeca(ElementoNo* p){
    this->cabeca = p;
}

void Aresta::setCauda(ElementoNo* p){
    this->cauda = p;
}