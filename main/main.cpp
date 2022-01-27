#include <iostream>
#include <list>
#include <vector>
#include <conio.h>

#include "Obra.h"
#include "Assunto.h"
#include "Modelo.h"
#include "Usuario.h"
#include "acervo.h"

using namespace std;

//login admin
//senha 1q2w3e

int main()
{
    int poss=0;

    /*
    Obra *A = new Obra();
    A->Add_Obra();
    A->Print_Obra();


    Assunto *A = new Assunto();
    A->Add_Assunto();
    A->Print_Assunto();


    Modelo *A = new Modelo();
    A->Add_Modelo();
    A->Print_Modelo();


    Usuario *A = new Usuario();
    A->Add_Pessoa();
    A->Print_Pessoa();


    acervo *A = new acervo();
    A->Add_Usuario();
    A->Print_Usuario();

    int achar = A->Procura_Usuario(&poss);

    cout << "\nPoss: " << poss;

    if(achar == 0){
        cout << "\nNão achou" << endl;
    }else if(achar == 1){
        cout << "\nPessoa" << endl;
    }else{
        cout << "\nRoot" << endl;
    }
    */

    Usuario *A = new Usuario();
    A->Add_Emprestimo();
    A->Add_Emprestimo();

    A->Printa_Emprestimo();

    A->Remove_Emprestimo();

    A->Printa_Emprestimo();

    A->Remove_Emprestimo();

    A->Printa_Emprestimo();

    //22-4444-333-1
    //333.22:333.22



    cout << "\nOlá mundo" << endl;

    return 0;
}

/*

    int i=0;
    char senha[6];
    string SENHA;

    while(i < 6){
        senha[i] = getch();
        putchar('*');
        ++i;
    }

    SENHA = senha;
    cout << "\nSENHA:  " << SENHA << endl;




    list<int> lista;
	list<int>::iterator it;
	for(int i=0;i<5;i++){
		lista.push_back(i);
	}
	for(int i=5;i<10;i++){
		lista.push_front(i);
	}
    // Conteudo da lista: 9 8 7 6 5 0 1 2 3 4
    cout << lista.front() << endl;
    //printa 9 na tela
    cout << lista.back() << endl;
    // printa 4 na tela
    cout << lista.size() << endl;
    //printa o tamanho da lista na tela, que é igual a 10

	for(it = lista.begin(); it!=lista.end();it++){
        cout << *it << endl;
	}

*/
