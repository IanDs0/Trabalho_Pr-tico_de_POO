#include "Periodicos.h"

periodicos::periodicos()
{
    //ctor
}

periodicos::~periodicos()
{
    //dtor
}


void periodicos::add(){
	cout << "\nGenero: ";
	fflush (stdin);
	getline (cin, this->genero);
	cout << "Data: ";
	fflush (stdin);
	getline (cin, this->data);
	cout << "Publico Alvo: ";
	fflush (stdin);
	getline (cin, this->publico_alvo);
}

string periodicos::returna_gen(){
	return genero;
}

string periodicos::retorna_data(){
	return data;
}

string periodicos::retorna_publico(){
	return publico_alvo;
}

void periodicos::imprime(){
	cout << "\nGenero: " << genero;
	cout << "\nData: " << data;
	cout << "\nPublico Alvo: " << publico_alvo;
}

