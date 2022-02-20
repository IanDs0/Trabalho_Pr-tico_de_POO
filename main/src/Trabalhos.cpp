#include "Trabalhos.h"

Trabalhos::Trabalhos()
{
    //ctor
}

Trabalhos::~Trabalhos()
{
    //dtor
}

string Trabalhos::retorna_curso(){
	return curso;
}

string Trabalhos::retorna_instituicao(){
	return instituicao;
}

string Trabalhos::retorna_tipo(){
	return tipo_trab;
}

void Trabalhos::add(){
	cout << "\nTipo de Trab: ";
	fflush (stdin);
	getline (cin, this->tipo_trab);
	cout << "Curso: ";
	fflush (stdin);
	getline (cin, this->curso);
	cout << "Instituicao: ";
	fflush (stdin);
	getline (cin, this->instituicao);
}

void Trabalhos::imprime(){
	cout << "\nTipo de Trab: " << tipo_trab;
	cout << "\nCurso: " << curso;
	cout << "\nInstituicao: " << instituicao;
}

