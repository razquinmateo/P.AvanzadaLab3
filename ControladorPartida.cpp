#include "ControladorPartida.h"

// Inicialización del puntero a la instancia
ControladorPartida* ControladorPartida::instancia = nullptr;

void ControladorPartida::seleccionarPartidaAContinuar(int) {

}

void ControladorPartida::solicitarListaPartidasMultijugador() {

}

void ControladorPartida::seleccionarComentario(int) {

}

void ControladorPartida::ingresarTexto(string) {

}

void ControladorPartida::ingresarComentarioNuevo(string) {

}

void ControladorPartida::seleccionarPartida(int) {

}

bool ControladorPartida::partidaEsContinuacionAnterior(Partida*) {}
bool ControladorPartida::partidaEsTransmitidaEnVivo(Partida*) {}
void ControladorPartida::darAltaPartida() {}
void ControladorPartida::cancelarAltaPartida() {}
void ControladorPartida::partidasNoFinalizadas() {}
void ControladorPartida::confirmarAbandonoPartidaMultijugador() {}
void ControladorPartida::confirmarFinalizacionDePartida(int) {}
bool ControladorPartida::comentarioExistente() {}
void ControladorPartida::darAltaComentario() {}
void ControladorPartida::cancelarEnvioComentario() {}
void ControladorPartida::detallesPartidaMultijugador() {}