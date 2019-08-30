/**
 * Universidade Federal de Juiz de Fora
 * IO.h
 * Propósito: Header da estrutura IO, para implementação de um Leitor
 * 
 * @autor Renan Nunes da Costa Gonçalves
 * @version 1.0 27/08/2019
*/
#ifndef IO_H_INCLUDED
#define IO_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ostream>
#include <fstream>
#include <time.h>
#include <string>
#include <sstream>

#include "Grafo.h"

class Io{

private:
    std::string nomeEntrada;
    const char* getCaminhoDiretorio();
    void leituraGrafo(Grafo* g,char* caminhoDiretorio);

public:
    Io();
    ~Io();

    void leituraArquivo();
};

#endif //IO_H_INCLUDED