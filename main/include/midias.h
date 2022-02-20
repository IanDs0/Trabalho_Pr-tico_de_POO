#ifndef MIDIAS_H
#define MIDIAS_H
#include <iostream>
#include <string>

using namespace std;

class midias
{
	public:
	string tipo;
	string genero;
	string duracao;
	string retorna_tipo();
	string retorna_genero();
	string retorna_duracao();
	midias();
	~midias();
	virtual  void add();
	virtual void imprime();
	protected:
};

#endif
