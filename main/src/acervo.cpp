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

void acervo::Remove_1(){

}
void acervo::Adiciona_1(){

}

