/**
 * Universidade Federal de Juiz de Fora
 * No.h
 * Propósito: Header da estrutura No, para implementação de um grafo
 * 
 * @autor Renan Nunes da Costa Gonçalves
 * @version 1.0 27/08/2019
*/

#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
#include <iostream>
#include "Aresta.h"

class No{

private:
    int idNo;
    float pesoNo;
    int din; //Grau de Entrada
    int dout; //Grau de Saída

public:
    No(int id);
    No(int id, float p);
    ~No();

    /*Getters e Setters*/
    int getIdNo();
    float getPeso();
    int getGrauEntrada();
    int getGrauSaida();

    void setIdNo(int p);
    void setPesoNo(float p);
    void aumentaGrauSaida();
    void diminuiGrauSaida();
    void aumentaGrauEntrada();
    void diminuiGrauEntrada();


};

#endif //NO_H_INCLUDED