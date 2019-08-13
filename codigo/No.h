#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

#include <iostream>

class No{

private:
    int id;
    int grauEntrada;
    int grauSaida;
    float peso;

public:
    No();
    No(int id_v,int grauEntrada_v,int grauSaida_v,float peso_v);
    ~No();

    /*Getters e Setters*/
    int getId();
    int getGrauEntrada();
    int getGrauSaida();
    float getPeso();

    void setId(int p);
    void setGrauEntrada(int p);
    void setGrauSaida(int p);
    void setPeso(float p);

};

#endif // NO_H_INCLUDED
