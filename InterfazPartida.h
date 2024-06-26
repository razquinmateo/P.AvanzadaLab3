#ifndef INERFAZPARTIDA_H
#define INERFAZPARTIDA_H

#include <string>
#include <iostream>

using namespace::std;

class InterfazPartida
{
    public:
        InterfazPartida();
        virtual ~InterfazPartida();

        //Funciones del controlador
        virtual void seleccionarPartidaAContinuar(int) = 0;
        virtual void solicitarListaPartidasMultijugador() = 0;
        virtual void seleccionarComentario(int) = 0;
        virtual void ingresarTexto(string) = 0;
        virtual void ingresarComentarioNuevo(string) = 0;
        virtual void seleccionarPartida(int) = 0;
};

#endif // INERFAZPARTIDA_H