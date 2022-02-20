#include "cartaz.h"

cartaz::cartaz()
{
    //ctor
}

cartaz::~cartaz()
{
    //dtor
}

string cartaz::retorna_assunto(){
	return assunto;
}

string cartaz::retorna_tipo(){
	return tipo;
}

void cartaz::add(){
	cout << "\nTipo de cartaz: ";
	fflush (stdin);
	getline (cin, this->tipo);
	cout << "Assunto: ";
	fflush (stdin);
	getline (cin, this->assunto);
}

void cartaz::imprime(){
	cout << "\nTipo de Cartaz: " << tipo;
	cout << "\nAssunto: " << assunto;
}
