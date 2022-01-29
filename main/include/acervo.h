#ifndef ACERVO_H
#define ACERVO_H

#include "Modelo.h"
#include "Usuario.h"

#include <string>
#include <list>
#include <vector>
#include <iostream>

using namespace std;

class acervo: public Modelo, public Usuario
{
    public:
        acervo();
        virtual ~acervo();

        void Add_acervo();
        void Print_acervo();

        void Add_Usuario();
        void Add_Usuario_root();
        void Print_Usuario();

        int Procura_Usuario(int *p);//0)Não 1)Pessoa 2)Root

        void Remove_1(int pos);
        void Adiciona_1(int pos);
        void Printa_Emprestimo(int pos);
        int Procura_Emprestimo();
        int Procura_Usuarios(int pos);

    private:

        vector<Usuario> Usuarios_Bi;//cria uma array dinamico
        vector<Modelo> Biblioteca;//cria uma array dinamico
};

#endif // ACERVO_H
