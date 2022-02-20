#include "relatorio.h"

relatorio::relatorio()
{
    //ctor
}

relatorio::~relatorio()
{
    //dtor
}

string relatorio::retorna_data(){
	return data;
}

string relatorio::retorna_assunto(){
	return assunto;
}

void relatorio::add(){
	cout << "\nData: ";
	fflush (stdin);
	getline(cin, this->data);
	cout << "Assunto: ";
	fflush (stdin);
	getline(cin, this->assunto);
}

void relatorio::imprime(){
	cout << "\nData: " << data;
	cout << "\nAssunto: " << assunto;
}

