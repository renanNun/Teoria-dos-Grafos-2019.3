#ifdef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include "Aresta.h"
#include "No.h"
#include "ElementoListaNos.h"
#include "ListaArestas.h"
#include "ListaNos.h"

class Grafo{

private:
    int numNos;
    ListaNos* lista;
    bool ehDirecional;

public:
    Grafo(bool dir, int numNos){
        this->numNos = numNos;
        this->ehDirecional = dir;
    };
    ~Grafo(){};

    int getNumNos(){return this->numNos;};
    bool ehDirecional(){return this->ehDirecional;};
    void setNumNos(int n){this->numNos = n;};
    void setDirecional(bool x){this->ehDirecional = x;};

};

#endif //GRAFO_H_INCLUDED