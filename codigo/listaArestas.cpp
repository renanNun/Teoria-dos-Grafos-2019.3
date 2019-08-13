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
/**
* Método de inserção;
* Ele cria uma aresta entre o vértice de origem(calda) e o vértice de destino(cabeça)
* @param v eh a cala
* @param vorigem eh a cabeça
* @param peso eh o peso do caminho
**/
void ListaAresta::insere(Vertice* v,Vertice* vorigem, float peso){
    Aresta* a = new Aresta(v,vorigem,peso);

    if(this->primeiro == nullptr) //Se o Vértice de Origem não possuir arestas, o vértice destino a ser inserido será o primeiro elemento (Raiz) da lista
    {
        this->primeiro = a;
        this->ultimo = a;
    }
    else //Caso o Vértice já possua arestas, o vértice destino será inserido apos os já existentes
    {
        this->ultimo->setProx(a);
        this->ultimo = a;
    }

    this->numNos++;
}

/**
* Método de exclusão de arestas;
* Exclui a aresta correspondente ao vértice passado como parâmetro, caso não exista retorna false
* @param v eh o vertice que se deseja apagar a aresta
**/
bool ListaAresta::exclui(Vertice* v){

    if(this->primeiro != nullptr){

        Aresta* a = this->primeiro->getProx(); // Recebe o segundo elemento da lista de Arestas
        if(this->primeiro->getVertice()->getNo()->getId() == v->getNo()->getId()){
            delete this->primeiro;
            this->primeiro = a;
            return true;
        }
        else
        {
            Aresta* anterior = this->primeiro;
            Aresta* proximo = nullptr;

            //Começando do vetice "a" percorrendo a lista té localizar o vertice a ser excluido

            while(a != nullptr){
                if(a->getVertice()->getNo()->getId() == v->getNo()->getId())
                {
                    if(a == this->ultimo) // Caso o vértice que se quer excluir seja o ultimo da lista
                    {
                        this->ultimo = anterior;
                    }

                    proximo = a->getProx();
                    anterior->setProx(proximo);
                    delete a;
                    numNos--;
                    return true;

                }
                else
                {
                    anterior = a;
                    a = a->getProx();
                }
            }

        }
    }

    return false;

}

