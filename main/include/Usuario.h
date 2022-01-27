#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <list>
#include <vector>
#include <iostream>
#include <conio.h>

#include "Emprestimo.h"

using namespace std;

class Usuario: public Emprestimo
{
    public:
        Usuario();
        virtual ~Usuario();

        void Add_Pessoa();
        Usuario Add_Pessoa_R();
        void Add_Pessoa_Procura();

        void Add_Emprestimo();
        void Remove_Emprestimo();
        void Printa_Emprestimo();

        string Camufla_senha();
        int Get_Tipo();
        string Get_Name();
        string Get_Password();

        void Print_Pessoa();
        int Procura_Usuario(Usuario *U);//0)Não 1)Pessoa 2)Root

    private:
        string Name;
        string Password;

        vector<Emprestimo> Empre;

        int Tipo;//0)Root 1)Pessoa
};

#endif // USUARIO_H
