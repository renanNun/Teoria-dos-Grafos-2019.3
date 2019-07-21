#ifdef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include "Aresta.h"
#include "No.h"
#include "ListaArestas.h"
#include "ListaNos.h"

class Grafo{

private:
    int numNos;
    ListaNos* lista;
    bool ehDirecional;

public:
    Grafo(bool dir, int numNos);
    ~Grafo();

};

#endif //GRAFO_H_INCLUDED