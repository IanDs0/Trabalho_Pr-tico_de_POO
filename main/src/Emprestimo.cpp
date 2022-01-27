#include "Emprestimo.h"

Emprestimo::Emprestimo(){
}

Emprestimo::~Emprestimo(){
}


void Emprestimo::Add_Parametro(Emprestimo Emp){

    this->Poss_Emprestimo = Emp.Poss_Emprestimo;
    this->Quantidade_Emprestimo = Emp.Quantidade_Emprestimo;

}

void Emprestimo::Add_Emprestimo(){

    fflush(stdin);
    cout << "\nPos: ";
    cin >> this->Poss_Emprestimo;
    fflush(stdin);

    cout << "\nQuantidade: ";
    cin >> this->Quantidade_Emprestimo;
    fflush(stdin);

}

void Emprestimo::Remove_1(int Q_Devolvido){
    this->Quantidade_Emprestimo -= Q_Devolvido;
}

int Emprestimo::Get_poss(){
    return Poss_Emprestimo;
}

int Emprestimo::Get_quanti(){
    return Quantidade_Emprestimo;
}

void Emprestimo::Print_Emprestimo(){

    cout << "\nPoss:  " << Poss_Emprestimo;
    cout << "\nQuantidade:  " << Quantidade_Emprestimo;

}
