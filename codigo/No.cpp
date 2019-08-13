#include "No.h"

using namespace std;

/**
* Construtor Vazio
**/
No::No(){
    //construtor vazio
}

/**
* Construtor da classe No
* @param id_v eh o id de um No
* @param grauEntrada_v eh o numero de arestas que incidem no No
* @param grauSaida_v eh o numero de arestas que saem do No
* @param peso_v eh o custo de um No
**/
No::No(int id_v,int grauEntrada_v,int grauSaida_v,float peso_v){
    this->id = id_v;
    this->grauEntrada = grauEntrada_v;
    this->grauSaida = grauSaida_v;
    this->peso = peso_v;
}

/**
* Destrutor Vazio
**/
No::~No(){

}

/*Getters e Setters*/
int No::getId(){
    return this->id;
}

int No::getGrauEntrada(){
    return this->grauEntrada;
}

int No::getGrauSaida(){
    return this->getGrauSaida();
}

float No::getPeso(){
    return this->peso;
}

void No::setId(int p){
    this->id = p;
}
void No::setGrauEntrada(int p){
    this->grauEntrada = p;
}
void No::setGrauSaida(int p){
    this->grauSaida = p;
}
void No::setPeso(float p){
    this->peso = p;
}
