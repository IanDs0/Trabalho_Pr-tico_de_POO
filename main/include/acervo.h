#ifndef ACERVO_H
#define ACERVO_H

#include "Modelo.h"
#include "Usuario.h"

#include <string>
#include <list>
#include <vector>
#include <iostream>

using namespace std;

class acervo: public Modelo
{
    public:
        acervo();
        virtual ~acervo();

        void Add_acervo();
        void Print_acervo();
        void Remove_1();
        void Adiciona_1();

    private:

        vector<Modelo> Biblioteca;//cria uma array dinamico
};

#endif // ACERVO_H
