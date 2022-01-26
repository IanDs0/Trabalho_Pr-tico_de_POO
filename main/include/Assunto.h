#ifndef ASSUNTO_H
#define ASSUNTO_H

#include <string>
#include <list>
#include <iostream>

using namespace std;

class Assunto
{
    public:
        Assunto();
        virtual ~Assunto();

        void Add_Assunto();
        void Add_Palavra_Chave();
        void Print_Assunto();

    private:

        string Asunto;

        list<string> Palavra_Chave;//cria uma lista dinamica
        list<string>::iterator PC;//serve para printar os valores da lista
};

#endif // ASSUNTO_H
