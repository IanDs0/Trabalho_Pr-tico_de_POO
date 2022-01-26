#ifndef MODELO_H
#define MODELO_H

#include <string>
#include <list>
#include <iostream>


#include "Obra.h"
#include "Assunto.h"
#include "Modelo.h"


using namespace std;

class Modelo:public Assunto, public Obra
{
    public:
        Modelo();
        virtual ~Modelo();

        void Add_Autor();
        void Add_CDU();
        void Add_ISBN();

        void Add_Modelo();
        Modelo Add_Modelo_R();

        void Print_Modelo();

    private:
        int Tipo_obra;//1)Livros 2)Peri�dicos 3)Trabalhos de conclus�o 4)Relat�rios 5)M�dias 6)Cartazes 7)Mapas

        string CDU;
        string ISBN;

        list<string> Nome_autor;//cria uma lista dinamica
        list<string>::iterator Na;//serve para printar os valores da lista

};

#endif // MODELO_H
