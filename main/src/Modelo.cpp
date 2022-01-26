#include "Modelo.h"

Modelo::Modelo(){
}

Modelo::~Modelo(){
}


void Modelo::Add_Autor(){

    string test;
    int sair=1;

    while(sair==1){

        cout << "\nDigite o(os/a/as) Autor(es/a/as):  ";
        cin >> test;

        this->Nome_autor.push_back(test);

        cout << "\nExiste mias Autor(es/as)?";
        cout <<"\n0)Não\n1)Sim"<<endl;

        while(cin >> sair)
            if(sair != 0 || 1)
                break;
    }

}

void Modelo::Add_CDU(){

    string CDU_test;
    char conf[10]={'0','1','2','3','4','5','6','7','8','9'};
    int autentica=10;

    while(autentica < 11){
        cout << "Digite o CDU da obra:  ";
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
    this->CDU=CDU_test;
}

void Modelo::Add_ISBN(){

    string ISBN_test;
    char conf[10]={'0','1','2','3','4','5','6','7','8','9'};
    int autentica=10;

    while(autentica < 11){
        cout << "Digite o ISBN da obra:  ";
        getline(cin,ISBN_test);

        autentica=0;

        //ver se é menor que o tamanho esperado
        if(ISBN_test[13]!='\0' && ISBN_test[12]!='\0'){
            autentica=-10;
        }

        //ver se só possui numeros
        for(int i=0; i < 13; i++){
            for(int j=0; j < 10; j++){
                if(ISBN_test[i] == conf[j] && i != 2 && 7 && 11){
                    ++autentica;
                    break;
                }
            }
        }

        //ver se a pontuação está correta
        if(ISBN_test[2]== '-' && ISBN_test[7] == '-' && ISBN_test[11] == '-' && autentica == 10){
            ++autentica;
            break;
        }else{
            autentica = -10;
        }
    }
    this->ISBN=ISBN_test;
}

void Modelo::Add_Modelo(){

    int i=0;

    do{
        cout << "Tipos para o acervo:\n1)Livros \n2)Periódicos \n3)Trabalhos de conclusão \n4)Relatórios \n5)Mídias \n6)Cartazes \n7)Mapas " << endl;
        cin >> i;
    }while(i<1 || i>7);

    this->Tipo_obra=i;

    cout << endl;

    Add_Autor();

    Add_Obra();

    Add_ISBN();

    Add_Assunto();

    Add_CDU();
}


void Modelo::Print_Modelo(){

    int i=1;

    cout<<"\n\n\n\n\n\n\n\n\n\n\n";

    for(Na = Nome_autor.begin(); Na!=Nome_autor.end();Na++){
        cout << i << ". Autor(a): " << *Na <<".  ";
        ++i;
	}

	cout<<"\n";
	Print_Obra();

	cout<<"\n";
    cout << "ISBN: " << ISBN << endl;

    cout<<"\n";
    Print_Assunto();

    cout<<"\n";
	cout << "\n\t\t\tCDU:  " << CDU << endl;
}
