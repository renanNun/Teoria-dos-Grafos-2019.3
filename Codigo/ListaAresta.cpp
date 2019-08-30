#include "ListaAresta.h"

using namespace std;

/**
 * construtor da classe ListaAresta - Constroi uma lista de Aresta
 * @param p - Primeira aresta da lista
 * @param u - Ultima Aresta da lista
 * @param numNos - número de Nós
 * @autor: Renan Nunes da Costa Gonçalves
*/
ListaAresta::ListaAresta(Aresta* p,Aresta* u,int numNos){
    this->raiz = p;
    this->ultimo = u;
    this->numeroNos = numNos;
}

/**
 * Destrutor da classe ListaAresta
 * @autor: Renan Nunes da Costa Gonçalves
*/
ListaAresta::~ListaAresta(){
    Aresta* a = this->getPrimeiro();
    Aresta* aux;

    while(a!= nullptr){
        aux = a->getProx();
        delete a; 
        a = aux;
    }
}

/*Métodos Getters e Setters*/

Aresta* ListaAresta::getPrimeiro(){
    return this->raiz;
}

Aresta* ListaAresta::getUltimo(){
    return this->ultimo;
}

int ListaAresta::getNumNos(){
    return this->numeroNos;
}

void ListaAresta::setPrimeiro(Aresta* p){
    this->raiz = p;
}

void ListaAresta::setUltimo(Aresta* p){
    this->ultimo = p;
}

void ListaAresta::setNumNos(int p){
    this->numeroNos = p;
}

/**
 * Método Insere Aresta, cria uma nova aresta se esta não existir
 * @param cab - Primeiro No
 * @param cau - No para o qual a aresta se direciona
 * @param peso - Peso do caminho
 * Exemplo de caminho: Cabeça (cab) -----> Cauda (cau)
 * @autor: Renan Nunes da Costa Gonçalves
*/
void ListaAresta::insereAresta(ElementoNo* cab, ElementoNo* cau, float peso){
    Aresta* a = new Aresta(cau,cab,peso);

    if(this->raiz == nullptr){
        this->raiz = a;
        this->ultimo = a;
    }
    else {
        this->ultimo->setProx(a);
        this->ultimo = a;
    }
    this->numeroNos++;
}

/**
 * Método que Exclui uma Aresta existente
 * @param no - Um dos nós para o qual a aresta se direciona
 * @autor: Renan Nunes da Costa Gonçalves 
*/
bool ListaAresta::excluiAresta(ElementoNo* no){
    if(this->raiz != nullptr){

        Aresta* atual = this->raiz->getProx(); //Pega o segundo elemento da Lista de Arestas
        if(this->raiz->getCabeca()->getNo()->getIdNo() == no->getNo()->getIdNo()){
            /*Caso a Raiz seja a Aresta a ser excluida*/
            delete raiz;
            this->raiz = atual;
            return true;
        }
        else {
            Aresta* anterior = this->raiz;
            Aresta* proximo = nullptr;

            //Começamos do segundo vértice, e percorremos a lista até achar o No desta Aresta
            while(atual != nullptr){
                if(atual->getCabeca()->getNo()->getIdNo() == no->getNo()->getIdNo()){
                    if(atual == this->ultimo){
                        this->ultimo = anterior;
                    }
                    proximo = atual->getProx();
                    anterior->setProx(proximo);
                    delete atual;
                    this->numeroNos--;
                    return true;
                } else {
                    anterior = atual;
                    atual = atual->getProx();
                }
            }
        }

    }
    return false;
}