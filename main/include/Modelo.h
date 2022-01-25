#ifndef MODELO_H
#define MODELO_H

#include <string>
#include <iostream>

using namespace std;

class Modelo
{
    public:
        Modelo();
        virtual ~Modelo();

    private:
        string CDU;
        string ISBN;

};

#endif // MODELO_H
