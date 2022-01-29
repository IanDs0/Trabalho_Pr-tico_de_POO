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
    int op=0;

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


}

    //22-4444-333-1
    //11-2222-333-4
    //333.22:333.22
    //555.66:777.88

    do{
        fflush(stdin);
        achar = A->Procura_Usuario(&poss);

        if(achar == 0){
            cout << "\n\nNão achou Usuario" << endl;

            do{

                cout << "\n0) Fechar";
                cout << "\n1) Tentar outro Login" << endl;
                fflush(stdin);
                cin >> op;

                if(op == 0){
                    sair = 1;
                }

            }while(op < 0 || op > 1);


        }else if(achar == 1){
            cout << "\n\nPessoa" << endl;

            do{

                cout << "\n0) Sair";
                cout << "\n1) Printar Biblioteca";
                cout << "\n2) Pegar Livro emprestado";
                cout << "\n3) Printar livros emprestados";
                cout << "\n4) Procura livros\n";

                fflush(stdin);
                cin >> op;
                fflush(stdin);


                switch (op){

                    case 1:
                        A->Print_acervo();
                        break;

                    case 2:
                        A->Adiciona_1(poss);
                        break;

                    case 3:
                        A->Printa_Emprestimo(poss);
                        break;

                    case 4:
                        A->Procura_livro();
                        break;

                    default:
                        break;
                }

            }while(op != 0);


        }else{
            cout << "\n\nRoot" << endl;

            do{

                cout << "\n0) Sair";
                cout << "\n1) Add Na Biblioteca";
                cout << "\n2) Printar Biblioteca";
                cout << "\n3) Add Usuario";
                cout << "\n4) Printar Usuarios";
                cout << "\n5) Pegar Livro emprestado";
                cout << "\n6) Printar livros emprestados";
                cout << "\n7) Procura livros\n";

                fflush(stdin);
                cin >> op;
                fflush(stdin);

                switch (op){

                    case 1:
                        A->Add_acervo();
                        break;

                    case 2:
                        A->Print_acervo();
                        break;

                    case 3:
                        A->Add_Usuario();
                        break;

                    case 4:
                        A->Print_Usuario();
                        break;

                    case 5:
                        A->Adiciona_1(poss);
                        break;

                    case 6:
                        A->Printa_Emprestimo(poss);
                        break;

                    case 7:
                        A->Procura_livro();
                        break;

                    default:
                        break;

                }

            }while(op != 0);

        }

        do{
            if(sair == 0){

                cout << "\n0) Fechar";
                cout << "\n1) Tentar outro Login" << endl;
                fflush(stdin);
                cin >> op;

                if(op == 0)
                    sair = 1;
            }

        }while(op < 0 || op > 1);

    }while(sair != 1);

    cout << "\nOlá mundo" << endl;

    return 0;
}
