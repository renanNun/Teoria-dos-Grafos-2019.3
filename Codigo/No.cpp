#include "No.h"

using namespace std;

/**
 * construtor da classe No - Constroi um No/Vértice
 * @param id - é o indíce de um No
 * @autor: Renan Nunes da Costa Gonçalves
*/
No::No(int id){
    this->idNo = id;
    this->pesoNo = -1;
    this->prox = nullptr;
    this->adj = nullptr;
    this->din = 0;
    this->dout = 0;
}

/**
 * construtor da classe No - Constroi um No/Vértice
 * @param id - é o indíce de um No/Vértice
 * @param p - é o peso/custo de um No/Vértice
 * @autor: Renan Nunes da Costa Gonçalves
*/
No::No(int id, float p){
    this->idNo = id;
    this->pesoNo = p;
    this->prox = nullptr;
    this->adj = nullptr;
    this->din = 0;
    this->dout = 0;
}

/**
 * Destrutor da classe No
 * @autor: Renan Nunes da Costa Gonçalves
*/
No::~No(){

}

/**
 * Método criado para deletar um Nó e sua Aresta
*/
void deletaNo(){

}


/*Getters e Setters*/
    
int No::getIdNo(){
    return this->idNo;
}
    
float No::getPeso(){
    return this->pesoNo;
}
    
int No::getGrauEntrada(){
    return this->din;
}

int No::getGrauSaida(){
    return this->dout;
}

No* No::getProx(){
    return this->prox;
}

Aresta* No::getAdj(){
    return this->adj;
}

void No::setIdNo(int p){
    this->idNo = p;
}

void No::setPesoNo(float p){
    this->pesoNo = p;
}

void No::setProx(No* p){
    this->prox = p;
}

void No::setAdj(Aresta* p){
    this->adj = p;
}

void No::aumentaGrauSaida(){
    if(this->dout >= 0)
        this->dout++;
}

void No::diminuiGrauSaida(){
    if(this->dout >= 0)
        this->dout--;
}

void No::aumentaGrauEntrada(){
    if(this->din >= 0)
        this->din++;
}

void No::diminuiGrauEntrada(){
    if(this->din >= 0)
        this->din--;
}
