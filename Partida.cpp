#include "Partida.h"

Partida::Partida() {

}

//Contructor con parametros
Partida::Partida(int idPartida, DtFecha* fechaHoraComienzo) : idPartida(idPartida), fechaHoraComienzo(fechaHoraComienzo) {}

Partida::~Partida() {}

//Getters
int Partida::getIdPartida() {
    return idPartida;
}

DtFecha* Partida::getFechaHora() {
    return fechaHoraComienzo;
}

//Setters
void Partida::setIdPartida(int _idPartida) {
    this->idPartida = _idPartida;
}

void Partida::setFechaHoraComienzo(DtFecha* _fechaHoraComienzo) {
    this->fechaHoraComienzo = _fechaHoraComienzo;
}