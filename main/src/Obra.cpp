#include "Obra.h"

Obra::Obra(){
}

Obra::~Obra(){
}



void Obra::Add_Obra_Parametro(int Ano, string Cidade, string Editora, float N_cm, int Num_edicao, int Num_pag){

    this->Ano = Ano;
    this->Cidade = Cidade;
    this->Editora = Editora;
    this->N_cm = N_cm;
    this->Num_edicao = Num_edicao;
    this->Num_pag = Num_pag;
}

void Obra::Add_Obra(){

    cout << "Digite o ano de lançamento da Obra: "; cin >> this->Ano;

    cout << "Digite a Cidade da Obra: "; cin >> this->Cidade;

    cout << "Digite Editora da Obra: "; cin >> this->Editora;

    cout << "Digite o N_cm da Obra: "; cin >> this->N_cm;

    cout << "Digite o numero da edicao da Obra: "; cin >> this->Num_edicao;

    cout << "Digite o numero de paginas da Obra: "; cin >> this->Num_pag;
}


void Obra:: Print_Obra(){

    cout << "\nAno: " << Ano << endl;

    cout << "\nCidade: " << Cidade << endl;

    cout << "\nEditora: " << Editora << endl;

    cout << "\nN_cm: " << N_cm << endl;

    cout << "\nNum_edicao: " << Num_edicao << endl;

    cout << "\nNum_pag: " << Num_pag << endl;

}
