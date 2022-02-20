#ifndef RELATORIO_H
#define RELATORIO_H
#include <iostream>
#include <string>

using namespace std;

class relatorio
{
	public:
	string data;
	string assunto;
	relatorio();
	~relatorio();
	string retorna_data();
	string retorna_assunto();
	virtual void add();
	virtual void imprime();
	protected:
};

#endif
