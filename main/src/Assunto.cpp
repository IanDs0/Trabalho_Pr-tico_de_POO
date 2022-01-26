#include "Assunto.h"

Assunto::Assunto(){
}

Assunto::~Assunto(){
}

void Assunto::Add_Palavra_Chave(){

    string test;
    int sair=1;

    while(sair==1){

        cout << "\nDigite a(as) Palavras-Chave:  ";
        cin >> test;

        this->Palavra_Chave.push_back(test);

        cout << "\nExiste mias palavras chave?";
        cout <<"\n0)Não\n1)Sim"<<endl;

        while(cin >> sair)
            if(sair != 0 || 1)
                break;
    }

}


void Assunto::Add_Assunto(){

    cout << "Digite o Assunto da Obra: ";

    //para fazer o login vai ter isso
    while(getline(cin, this->Asunto))
       if(Asunto != "")
              break;

    Add_Palavra_Chave();
}

void Assunto::Print_Assunto(){

    int i = 1;

    cout << "\nO Assunto: " << Asunto << "  ";

    for(PC = Palavra_Chave.begin(); PC!=Palavra_Chave.end();PC++){
        cout << i << " Palavra chave: " << *PC <<".  ";
        ++i;
	}
}
