#include "Usuario.h"

Usuario::Usuario(){
}

Usuario::~Usuario(){
}

string Usuario::Camufla_senha(){

    int i=0;
    char senha[6];
    string SENHA;

    while(i < 6){
        senha[i] = getch();
        putchar('*');
        ++i;
    }

    return SENHA = senha;
}

int Usuario::Get_Tipo(){

    return Tipo;

}

void Usuario::Add_Pessoa(){

    int vez=0;
    string test,verifica;

    cout << "\nDigite o nome de Usuário a ser cadastrado: ";
    getline(cin,this->Name);

    cout << "\nDigite a Senha do Usuario as ser cadastrado: ";
    test = Camufla_senha();

    //verifica se a senha está correta

    do{
        if(vez == 1){
            cout << "\n\nTente digitar a Senha do Usuario as ser cadastrado novamente: ";
            test = Camufla_senha();
            vez=0;
        }

        cout << "\n\nOnfirme a Senha do Usuario as ser cadastrado: ";
        verifica = Camufla_senha();

        if(verifica == test){
            this->Password = test;
            break;
        }

        ++vez;

    }while(vez != -1);

    int i=0;

    do{
        cout << "\n\nTipos de Usuário:\n0)Root \n1)Pessoa" << endl;
        cin >> i;
    }while(i<0 || i>1);

    this->Tipo=i;

}

void Usuario::Print_Pessoa(){

    cout << "\nNome:  " << Name;
    cout << "\nSenha:  " << Password;
    cout << "\nTipo de usuário:  ";

    switch (Tipo){

        case 0:
            cout << "Root" << endl;
        break;

        case 1:
            cout << "Pessoa" << endl;
        break;
    }

}
