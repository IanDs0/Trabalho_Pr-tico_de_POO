#include "Livro.h"

Livro::Livro()
{
    //ctor
}

Livro::~Livro()
{
    //dtor
}

void Livro::add(){
	cout << "\nNumero de Capitulos: ";
	cin >> this->num_cap;
	cout << "Data: ";
	fflush(stdin);
	getline (cin, this->data);
	cout << "Volume: ";
	cin >> this->volume;
}

string Livro::retorna_data(){
	return data;
}

int Livro::retorna_num_cap(){
	return num_cap;
}

int Livro::retorna_volume(){
	return volume;
}

void Livro::imprime(){
	cout << "\nNumero de Cap: " << num_cap;
	cout << "\nData: " << data;
	cout << "\nVolume: " << volume;
}
