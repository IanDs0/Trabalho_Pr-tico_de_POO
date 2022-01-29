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

    SENHA = senha;

    SENHA.pop_back();

    return SENHA;
}

int Usuario::Get_Tipo(){

    return Tipo;

}

string Usuario::Get_Name(){

    return Name;

}

string Usuario::Get_Password(){

    return Password;

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
        fflush(stdin);

    }while(i<0 || i>1);

    this->Tipo=i;

}

void Usuario::Add_Pessoa_Procura(){

    cout << "\nDigite o nome de Usuário a ser cadastrado: ";
    getline(cin,this->Name);

    cout << "\nDigite a Senha do Usuario as ser cadastrado: ";
    this->Password = Camufla_senha();

    this->Tipo=-1;


}

Usuario Usuario::Add_Pessoa_R(){

    Usuario *A = new Usuario();
    A->Add_Pessoa();

    return *A;
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

int Usuario::Procura_Usuario(Usuario *U){

    if(U->Get_Name() == Name && U->Get_Password() == Password && Tipo == 0){
        return 2;
    }else if(U->Get_Name() == Name && U->Get_Password() == Password && Tipo == 1){
        return 1;
    }else{
        return 0;
    }
}


void Usuario::Add_Emprestimo(int P_Emprestimo, int Q_Emprestimo){

    int verifica = 0,i = 0,tam = Empre.size();

    Emprestimo *test = new Emprestimo();
    test->Add_Emprestimo_P(P_Emprestimo, Q_Emprestimo);

    if(tam>0){

        for(i=0; i<tam; i++){

            verifica = Empre[i].Get_poss();

            if(verifica == test->Get_poss() ){
                Empre[i].Add_Parametro(*test);
                break;
            }else{
                Empre.push_back(*test);
            }

        }

    }else{

        Empre.push_back(*test);

    }

}

void Usuario::Remove_Emprestimo(){//test como parametro

    int verifica = 0,i = 0,tam = Empre.size();

    Emprestimo *test = new Emprestimo;
    test->Add_Emprestimo();

    if(tam>0){

        for(i=0; i<tam; i++){

            verifica = Empre[i].Get_poss();

            if((verifica == test->Get_poss() && Empre[i].Get_quanti() == 1)||(verifica == test->Get_poss() && Empre[i].Get_quanti() == test->Get_quanti())){
                Empre.erase(Empre.begin()+i);
                break;
            }else if(verifica == test->Get_poss() && Empre[i].Get_quanti() > test->Get_quanti()){
                Empre[i].Remove_1(test->Get_quanti());
                break;
            }else if(verifica != test->Get_poss()){
                cout << "\nNão é possivel devolver." << endl;
            }

        }

    }else{

        cout << "\nNão é possivel devolver." << endl;

    }

}

void Usuario::Printa_Emprestimo(){//tem q ser um get para fazer pazer um print melhor

    int i = 0,tam = Empre.size();

    for(i=0;i<tam;i++){

        Empre[i].Print_Emprestimo();
    }

}



void Usuario::Pessoa_root(){

    this->Name = "root";
    this->Password = "123456";
    this->Tipo = 0;

}

Usuario Usuario::Add_root(){

    Usuario *A = new Usuario();
    A->Pessoa_root();

    return *A;
}
