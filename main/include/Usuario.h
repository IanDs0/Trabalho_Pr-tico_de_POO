#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <list>
#include <iostream>
#include <conio.h>

using namespace std;

class Usuario
{
    public:
        Usuario();
        virtual ~Usuario();

        void Add_Pessoa();
        string Camufla_senha();
        int Get_Tipo();

        void Print_Pessoa();

    private:
        string Name;
        string Password;

        int Tipo;//0)Root 1)Pessoa
};

#endif // USUARIO_H
