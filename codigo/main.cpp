#include <iostream>

using namespace std;

/**
 * Trabalho de Grafos - 2019.3 Realizado pelo Grupo 2
 * Para o funcionamento dos arquivos será usado o modelo: 
 * g++ *.h *.cpp -o execGrupo2 && ./execGrupo2
 *  **/


void incluiMenu()
{
    cout << endl << endl;
    cout << "\tMenu de inicialização" << endl; 
    cout << "\t 01) Ler novo Grafo" << endl;
    cout << "\t 02) Imprimir Grafo" << endl;
    cout << "\t 03) Imprimir numero de Nós e Arestas" << endl;
    cout << "\t 04) Inserir/Excluir aresta" << endl;
    cout << "\t 05) Inserir/Excluir Vértice" << endl;
    cout << "\t 06) Retornar Grau do Grafo" << endl;
    cout << "\t 07) Busca Grafo (profundidade/largura)" << endl;

    cout << endl << endl;
}



int main()
{   
    cout << "\n#############################################\n";
    cout << "Trabalho de Grafos - Grupo 2";
    cout << "\n#############################################\n";
    
    cout << "Todo o desenvolvimento realizado nesse trabalho foi baseado para grafos simples,ou seja aqueles que não possuem multiarestas ou self-loop\n"; 
    incluiMenu();
    return 0;
}
