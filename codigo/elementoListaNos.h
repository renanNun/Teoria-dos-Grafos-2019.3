#ifndef ELEMENTOLISTANOS_H_INCLUDED
#define ELEMENTOLISTANOS_H_INCLUDED

#include <iostream>
#include "No.h"

class Vertice{

private:
    No* n;
    Vertice* prox;

public:
    Vertice();
    ~Vertice();

};

#endif // ELEMENTOLISTANOS_H_INCLUDED
