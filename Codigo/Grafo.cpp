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
    this->raiz = nullptr;
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
        p = this->raiz;


    }
}


/*Getters e Setters*/
int Grafo::getOrdem(){
    return this->ordem;
}

No* Grafo::getRaiz(){
    return this->raiz;
}

bool Grafo::ehOrientado(){
    return this->orientado;
}
bool Grafo::ehPonderado(){
    return this->ponderado;
}