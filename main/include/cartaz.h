#ifndef CARTAZ_H
#define CARTAZ_H
#include <iostream>
#include <string>

using namespace std;

class cartaz
{
	public:
	string tipo;
	string assunto;
	cartaz();
	~cartaz();
	string retorna_tipo();
	string retorna_assunto();
	virtual void add();
	virtual void imprime();
	protected:
};

#endif
