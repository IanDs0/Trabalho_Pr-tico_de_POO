#ifndef TRABALHOS_H
#define TRABALHOS_H
#include <iostream>
#include <string>

using namespace std;

class Trabalhos
{
	public:
	string tipo_trab;
	string curso;
	string instituicao;
	Trabalhos();
	~Trabalhos();
	virtual void add();
	void imprime();
	string retorna_curso();
	string retorna_instituicao();
	string retorna_tipo();
	protected:
};

#endif
