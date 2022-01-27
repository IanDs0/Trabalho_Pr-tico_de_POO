#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <string>
#include <iostream>

using namespace std;

class Emprestimo
{
    public:
        Emprestimo();
        virtual ~Emprestimo();
        int Get_poss();
        int Get_quanti();

        void Add_Parametro(Emprestimo Emp);
        void Add_Emprestimo();
        void Print_Emprestimo();

        void Remove_1(int Q_Devolvido);

    private:

        int Poss_Emprestimo;
        int Quantidade_Emprestimo;
};

#endif // EMPRESTIMO_H
