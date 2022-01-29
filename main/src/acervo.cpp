#include "acervo.h"

acervo::acervo(){
}

acervo::~acervo(){
}

void acervo::Add_acervo(){

    Biblioteca.push_back(Add_Modelo_R());
}

void acervo::Print_acervo(){

    for(int i=0;i < Biblioteca.size(); i++){

        Biblioteca[i].Print_Modelo();

    }

}


void acervo::Add_Usuario(){

    Usuarios_Bi.push_back(Add_Pessoa_R());

}

void acervo::Add_Usuario_root(){

    Usuarios_Bi.push_back(Add_root());

}

void acervo::Print_Usuario(){

    for(int i=0;i < Usuarios_Bi.size(); i++){

        Usuarios_Bi[i].Print_Pessoa();

    }

}

int acervo::Procura_Usuario(int *p){

    int verifica=0;

    Usuario *test = new Usuario();
    test->Add_Pessoa_Procura();

    for(int i=0;i < Usuarios_Bi.size(); i++){

        verifica = Usuarios_Bi[i].Procura_Usuario(test);
        *p = i;

        if(verifica == 1){
            return 1;
        }else if(verifica == 2){
            return 2;
        }
    }
    return 0;
}

int acervo::Procura_Usuarios(int pos){

}

void acervo::Remove_1(int pos){

    //cout << Procura_Usuarios();

    //Usuarios_Bi[pos].Remove_Emprestimo();

}

int acervo::Procura_Emprestimo(){

    fflush(stdin);
    string CDU_test;
    char conf[10]={'0','1','2','3','4','5','6','7','8','9'};
    int tam,autentica=10;

    while(autentica < 11){
        cout << "Digite o CDU a ser pedido impréstimo: ";
        getline(cin,CDU_test);

        autentica=0;

        //ver se é menor que o tamanho esperado
        if(CDU_test[13]!='\0' && CDU_test[12]!='\0'){
            autentica=-10;
        }

        //ver se só possui numeros
        for(int i=0; i < 13; i++){
            for(int j=0; j < 10; j++){
                if(CDU_test[i] == conf[j] && i != 3 && 6 && 10){
                    ++autentica;
                    break;
                }
            }
        }

        //ver se a pontuação está correta
        if(CDU_test[3]== '.' && CDU_test[6] == ':' && CDU_test[10] == '.' && autentica == 10){
            ++autentica;
            break;
        }else{
            autentica = -10;
        }
    }

    fflush(stdin);

    tam = Biblioteca.size();

    for(int i=0; i< tam ; i++){

        if(Biblioteca[i].Get_CDU()== CDU_test){
            return i;
        }
    }
    return -1;
}

void acervo::Adiciona_1(int pos){

    int quantidade = 0;

    fflush(stdin);
    cout << "\nDigite a quantidade: ";
    cin >> quantidade;

    Usuarios_Bi[pos].Add_Emprestimo(Procura_Emprestimo(), quantidade);

}

void acervo::Printa_Emprestimo(int pos){

    cout << "O usuário na poss: " << pos << endl;

    int tam = Usuarios_Bi.size();

    for(int i=0; i<tam ;i++){

        Usuarios_Bi[i].Printa_Emprestimo();

    }
}

