#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H

#include "Partida.h"
#include <iostream>
#include <string>
#include <vector>

using namespace::std;

class PartidaIndividual : public Partida
{
    public:
        PartidaIndividual();
        virtual ~PartidaIndividual();

        // Constructor con parámetros
        PartidaIndividual(bool);

        //getters
        bool getPartidaNueva();

        //setters
        void setPartidaNueva(bool);

    private:
        bool partidaNueva;
};

#endif // PARTIDAINDIVIDUAL_H