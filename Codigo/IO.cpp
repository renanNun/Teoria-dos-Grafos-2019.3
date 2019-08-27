#include "IO.h"

using namespace std;

/**
 * Construtor da classe Io, que contém os métodos básicos para a leitura
*/
Io::Io(){

}

/**
 * Destrutor da classe Io, que será responsável pela leitura do arquivo
*/
Io::~Io(){

}

/**
 * Função responsável por fazer o caminho entre Windows e Linux
 * @autor: Renan Nunes da Costa Gonçalves
*/
const char* Io::getCaminhoDiretorio(){

}


/**
 * Função responsável leitura dos arquivos
 * O Padrão para a leitura de arquivos é primeiro elemento ordem/Número de Nós
 * Em seguida (ID do Nó) (ID da Aresta) (Peso da Aresta)
 * @param g - Um novo grafo
 * @param caminhoDiretorio - Caminho do arquivo a ser lido
 * @autor: Renan Nunes da Costa Gonçalves
*/
void Io::leituraGrafo(Grafo* g,char* caminhoDiretorio){
    
    ifstream arquivo;
    string line;

    arquivo.open("entrada.txt"); //Abre o arquivo de Entrada

    if(!arquivo.is_open()|| !arquivo) //Verfica se o arquivo foi aberto ou não
    {
        cout << "Não foi possível abrir o arquivo!" << endl;
        exit(1);
    } 

    //Pego o primeiro elemento com a ordem de elementos de um grafo
    
    while(getline(arquivo,line)){

    }

}