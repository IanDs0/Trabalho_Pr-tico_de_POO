#include <iostream>
#include <list>

#include "Obra.h"

using namespace std;

int main()
{
    /*Obra *A = new Obra();
    A->Add_Obra();
    A->Print_Obra();*/


    	list<int> lista;
	list<int>::iterator it;
	for(int i=0;i<5;i++){
		lista.push_back(i);
	}
	for(int i=5;i<10;i++){
		lista.push_front(i);
	}
    // Conteudo da lista: 9 8 7 6 5 0 1 2 3 4
    cout << lista.front() << endl;
    //printa 9 na tela
    cout << lista.back() << endl;
    // printa 4 na tela
    cout << lista.size() << endl;
    //printa o tamanho da lista na tela, que é igual a 10

	for(it = lista.begin(); it!=lista.end();it++){
		//printa os numeros pares começando do inicio da lista

        cout << *it << endl;

	}
cout << "Olá mundo" << endl;

    return 0;
}
