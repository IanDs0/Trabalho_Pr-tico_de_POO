#ifndef MAPA_H
#define MAPA_H
#include <iostream>
#include <string>

using namespace std;

class mapa
{
	public:
	string tipo;
	string escala;
	string retorna_tipo();
	string retorna_escala();
	mapa();
	~mapa();
	virtual void add();
	virtual void imprime();
	protected:
};

#endif
