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

//login root
//senha 123456

int main()
{
    int poss=0;
    int sair=0;
    int achar=0;

    acervo *A = new acervo();
    A->Add_Usuario_root();

{

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
    A->Add_acervo();
    A->Add_acervo();

    int achar = A->Procura_Usuario(&poss);

    cout << "\nPoss: " << poss;

    if(achar == 0){
        cout << "\nNão achou" << endl;
    }else if(achar == 1){
        cout << "\nPessoa" << endl;
    }else{
        cout << "\nRoot" << endl;
    }

    A->Adiciona_1(poss);
    A->Adiciona_1(poss);
    A->Printa_Emprestimo(poss);

    */

    //A->Remove_1(poss);
    //A->Printa_Emprestimo(poss);


    //22-4444-333-1
    //11-2222-333-4
    //333.22:333.22
    //555.66:777.88
}

    do{

        achar = A->Procura_Usuario(&poss);

        if(achar == 0){
            cout << "\nNão achou" << endl;




        }else if(achar == 1){
            cout << "\nPessoa" << endl;

            A->Print_acervo();

            A->Adiciona_1(poss);
            A->Printa_Emprestimo(poss);


        }else{
            cout << "\nRoot" << endl;

            A->Add_acervo();
            A->Print_acervo();

            A->Add_Usuario();
            A->Print_Usuario();

            A->Adiciona_1(poss);
            A->Printa_Emprestimo(poss);
        }

    }while(sair != 1);

    cout << "\nOlá mundo" << endl;

    return 0;
}
