#include "Grafo.h"

using namespace std;


/**
 * Construtor da Classe Grafo
 * @param x - booleano que representa se o grafo é orientado ou não 
 * @param y - booleano que representa se o grafo é ponderado ou não
 * @autor: Renan Nunes da Costa Gonçalves
*/
Grafo::Grafo(bool x,bool y){
    this->orientado = x;
    this->ponderado = y;
    this->ordem = 0;
}

/**
 * Destrutor da Classe Grafo
 * @autor: Renan Nunes da Costa Gonçalves
*/
Grafo::~Grafo(){

}

/*Métodos da Classe*/
/**
 * Método que imprime o Grafo na tela em forma de Lista de Adjacência
 * @autor: Renan Nunes da Costa Gonçalves
*/
void Grafo::imprime(){
    cout << "##### Imprimindo Grafo #####" << endl;
    
    No* p;
    for(int i = 0; i < this->ordem;i++){
    


    }
}

void Grafo::insereAresta(int idNo1, float pesoNo1, int idNo2, float pesoNo2, float pesoAresta){
    No* v;// = buscaNo(idNo1);
    No* a;// = buscaNo(idNo2);

    bool existeV = true;
    bool existeA = true;
    bool existeAresta = false;

    //Verifica se os vértices a serem ligados por uma aresta Existem, caso não, os cria
    if (v == nullptr){
        existeV = false;
        //insereNo(idNo1,pesoNo1);
        //insere o ultimo elemento em uma lista
    }
}

/*Getters e Setters*/
int Grafo::getOrdem(){
    return this->ordem;
}

bool Grafo::ehOrientado(){
    return this->orientado;
}
bool Grafo::ehPonderado(){
    return this->ponderado;
}