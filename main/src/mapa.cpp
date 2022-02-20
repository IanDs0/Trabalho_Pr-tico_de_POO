#include "mapa.h"

mapa::mapa()
{
    //ctor
}

mapa::~mapa()
{
    //dtor
}

string mapa::retorna_escala(){
	return escala;
}

string mapa::retorna_tipo(){
	return tipo;
}

void mapa::add(){
	cout << "\nTipo de mapa: ";
	fflush (stdin);
	getline (cin, this->tipo);
	cout << "Escala: ";
	fflush (stdin);
	getline (cin, this->escala);
}

void mapa::imprime(){
	cout << "\nTipo de mapa: " << tipo;
	cout << "\nEscala: " << escala;
}

