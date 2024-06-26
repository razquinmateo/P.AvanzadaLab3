#ifndef CONTROLADORPARTIDA_H
#define CONTROLADORPARTIDA_H

#include "InterfazPartida.h"
#include "Partida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"
#include <string>
#include <vector>

using namespace::std;

class ControladorPartida : public InterfazPartida
{
    public:        
        //Metodos de la interfaz y controlador
        void seleccionarPartidaAContinuar(int);
        bool partidaEsContinuacionAnterior(Partida*);
        bool partidaEsTransmitidaEnVivo(Partida*);
        void darAltaPartida();
        void cancelarAltaPartida();
        void solicitarListaPartidasMultijugador();
        void confirmarAbandonoPartidaMultijugador();
        void partidasNoFinalizadas();
        void confirmarFinalizacionDePartida(int);
        bool comentarioExistente();
        void seleccionarComentario(int);
        void ingresarTexto(string);
        void ingresarComentarioNuevo(string);
        void darAltaComentario();
        void cancelarEnvioComentario();
        void detallesPartidaMultijugador();
        void seleccionarPartida(int);

        // Método estático para obtener la instancia única
        static ControladorPartida* getInstancia() {
            if (!instancia) {
                instancia = new ControladorPartida();
            }
            return instancia;
        }

    private:
        // Constructor y destructor privados
        ControladorPartida() = default;
        ~ControladorPartida() = default;

        // Puntero a la instancia única
        static ControladorPartida* instancia;

        vector<Partida*> partidas;
};

#endif // CONTROLADORPARTIDA_H