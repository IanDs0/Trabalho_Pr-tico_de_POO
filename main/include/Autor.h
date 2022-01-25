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

    private:
        string Nome_autor;/*[Num_autores];
        int Num_autores;*/
};

#endif // AUTOR_H
