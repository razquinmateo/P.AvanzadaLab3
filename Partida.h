#ifndef PARTIDA_H
#define PARTIDA_H

#include "DtFecha.h"
#include <iostream>
#include <string>
#include <vector>
#include "Jugador.h"

using namespace::std;

class Partida
{
    public:
        Partida();
        virtual ~Partida();

        // Constructor con parámetros
        Partida(int, DtFecha*);

        //getters
        int getIdPartida();
        DtFecha* getFechaHora();

        //setters
        void setIdPartida(int);
        void setFechaHoraComienzo(DtFecha*);

    private:
        int idPartida;
        DtFecha* fechaHoraComienzo;
};

#endif // PARTIDA_H