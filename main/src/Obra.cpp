#include "Obra.h"

Obra::Obra(){
}

Obra::~Obra(){
}



void Obra::Add_Obra_Parametro(int Ano, string Nome_Obra, string Cidade, string Editora, float N_cm, int Num_edicao, int Num_pag){

    this->Ano = Ano;
    this->Nome_Obra = Nome_Obra;
    this->Cidade = Cidade;
    this->Editora = Editora;
    this->N_cm = N_cm;
    this->Num_edicao = Num_edicao;
    this->Num_pag = Num_pag;
}

void Obra::Add_Obra(){

    cout << "Digite o Nome da Obra: "; cin >> this->Nome_Obra;

    cout << "Digite o numero da edicao da Obra: "; cin >> this->Num_edicao;

    cout << "Digite a Cidade da Obra: "; cin >> this->Cidade;

    cout << "Digite Editora da Obra: "; cin >> this->Editora;

    cout << "Digite o ano de lan�amento da Obra: "; cin >> this->Ano;

    cout << "Digite o numero de paginas da Obra: "; cin >> this->Num_pag;

    cout << "Digite o N_cm da Obra: "; cin >> this->N_cm;

}


void Obra:: Print_Obra(){

    cout << "\n\n" << Nome_Obra;

    cout << " - " << Num_edicao;

    cout << " - " << Cidade;

    cout << ": " << Editora;

    cout << ", " << Ano << endl;

    cout << Num_pag << "pag. ";


    cout << ": " << N_cm << "cm.\n" << endl;

}
