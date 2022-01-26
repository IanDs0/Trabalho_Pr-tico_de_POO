#ifndef OBRA_H
#define OBRA_H

#include <string>
#include <iostream>

using namespace std;

class Obra
{
    public:
        Obra();
        virtual ~Obra();

        void Add_Obra_Parametro(int Ano, string Nome_Obra, string Cidade, string Editora, float N_cm, int Num_edicao, int Num_pag);
        void Add_Obra();

        void Print_Obra();

    private:
        int Ano;
        string Nome_Obra;
        string Cidade;
        string Editora;
        float N_cm;
        int Num_edicao;
        int Num_pag;
};

#endif // OBRA_H
