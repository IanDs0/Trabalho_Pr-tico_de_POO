#ifndef MODELO_H
#define MODELO_H

#include <string>
#include <list>
#include <iostream>


#include "Obra.h"
#include "Assunto.h"
#include "Modelo.h"

#include "Livro.h"
#include "Periodicos.h"
#include "Trabalhos.h"
#include "relatorio.h"
#include "midias.h"
#include "cartaz.h"
#include "mapa.h"

using namespace std;

class Modelo:public Assunto, public Obra, public Livro, public periodicos, public Trabalhos, public relatorio, public midias, public cartaz, public mapa{
    public:
        Modelo();
        virtual ~Modelo();

        void Add_Autor();
        void Add_CDU();
        void Add_ISBN();

        void Empresta_Livro(int Quant);
        void Devolve_Livro(int Quant);

        string Get_CDU();
        int Get_Quantidade();

        void Add_Modelo();
        Modelo Add_Modelo_R();

        void Print_Modelo();
        void Print_Modelo_Completo();

    private:
        int Tipo_obra;//1)Livros 2)Periódicos 3)Trabalhos de conclusão 4)Relatórios 5)Mídias 6)Cartazes 7)Mapas
        int Quantidade;

        string CDU;
        string ISBN;

        list<string> Nome_autor;//cria uma lista dinamica
        list<string>::iterator Na;//serve para printar os valores da lista

};

#endif // MODELO_H
