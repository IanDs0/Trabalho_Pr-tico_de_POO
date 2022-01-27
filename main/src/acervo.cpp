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


void acervo::Remove_1(){

}
void acervo::Adiciona_1(){

}

