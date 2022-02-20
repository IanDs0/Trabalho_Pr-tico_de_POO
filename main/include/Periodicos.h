#ifndef PERIODICOS_H
#define PERIODICOS_H

#include <iostream>
#include <string>

using namespace std;

class periodicos
{
	public:
		string data;
		string genero;
		string publico_alvo;
		periodicos();
		~periodicos();
		string returna_gen();
		string retorna_publico();
		string retorna_data();
		virtual void imprime();
		virtual void add();
	protected:
};

#endif // PERIODICOS_H
