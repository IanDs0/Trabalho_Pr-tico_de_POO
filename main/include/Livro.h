#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <string>

using namespace std;

class Livro
{
    public:
        Livro();
        virtual ~Livro();
        int num_cap;//Quantidade de capitulos.
		int volume;
		string data;
		virtual void add();
		int retorna_num_cap();
		int retorna_volume();
		string retorna_data();
		virtual void imprime();
	protected:
};

#endif // LIVRO_H
