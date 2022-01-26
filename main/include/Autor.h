#ifndef AUTOR_H
#define AUTOR_H

#include <string>
#include <iostream>

using namespace std;

class Autor
{
    public:
        Autor();
        virtual ~Autor();

        void Add_autor

    private:

        list<string> Nome_autor;//cria uma lista dinamica
        list<string>::iterator it;//serve para printar os valores da lista
};

#endif // AUTOR_H
