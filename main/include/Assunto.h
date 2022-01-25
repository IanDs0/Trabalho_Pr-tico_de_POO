#ifndef ASSUNTO_H
#define ASSUNTO_H

#include <string>
#include <iostream>

using namespace std;

class Assunto
{
    public:
        Assunto();
        virtual ~Assunto();

        void Add_Assunto();
        void Print_Assunto();

    private:

        string Palavra_Chave;

        list<string> lista;
        list<string>::iterator it;

        string Titulo;
};

#endif // ASSUNTO_H
