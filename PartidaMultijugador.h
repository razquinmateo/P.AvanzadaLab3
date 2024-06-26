#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H

#include "Partida.h"
#include <iostream>
#include <string>
#include <vector>
#include "Comentario.h"
#include "Jugador.h"

using namespace::std;

class PartidaMultijugador : public Partida
{
    public:
        PartidaMultijugador();
        virtual ~PartidaMultijugador();

        // Constructor con parámetros
        PartidaMultijugador(DtFecha*, float, bool);

        //getters
        DtFecha* getHoraCierre();
        float getDuracion();
        bool getEsTransmitidaEnVivo();

        //setters
        void setHoraCierre(DtFecha*);
        void setTransmitidaEnVivo(bool);
        void setDuracion(float);

    private:
        DtFecha* horaCierre;
        float duracion;
        bool esTransmitidaEnVivo;

        //Vectores para almacenar jugadores y comentarios
        vector<Jugador*> jugadores;
        vector<Comentario*> comentarios;
};

#endif // PARTIDAMULTIJUGADOR_H