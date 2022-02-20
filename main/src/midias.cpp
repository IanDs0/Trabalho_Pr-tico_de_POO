#include "midias.h"

midias::midias()
{
    //ctor
}

midias::~midias()
{
    //dtor
}

string midias::retorna_duracao(){
	return duracao;
}

string midias::retorna_genero(){
	return genero;
}

string midias::retorna_tipo(){
	return tipo;
}

void midias::add(){
	cout << "\nGenero: ";
	fflush (stdin);
	getline (cin, this->genero);
	cout << "Duracao: ";
	fflush (stdin);
	getline (cin, this->duracao);
	cout << "Tipo: ";
	fflush (stdin);
	getline (cin, this->tipo);
}

void midias::imprime(){
	cout << "\nGenero: " << genero;
	cout << "\nTipo: " << tipo;
	cout << "\nDuracao: " << duracao;
}

