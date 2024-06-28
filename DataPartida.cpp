#include "DataPartida.h"

DataPartida::DataPartida(int Identificador, DtFecha* FechaHora, string NombreJuego, bool TransmitidaVivo, string NicknameJugadorInicio, string NicknameJugadorUnieron) :
    Identificador(Identificador),
    FechaHora(FechaHora),
    NombreJuego(NombreJuego),
    TransmitidaVivo(TransmitidaVivo),
    NicknameJugadorInicio(NicknameJugadorInicio),
    NicknameJugadorUnieron(NicknameJugadorUnieron)
{}

int DataPartida::getIdentificador() {
    return Identificador;
}

void DataPartida::setIdentificador(int Identificador) {
    this->Identificador = Identificador;
}

DtFecha* DataPartida::getFechaHora() {
    return FechaHora;
}

void DataPartida::setFechaHora(DtFecha* FechaHora) {
    this->FechaHora = FechaHora;
}

string DataPartida::getNombreJuego() {
    return NombreJuego;
}

void DataPartida::setNombreJuego(string NombreJuego) {
    this->NombreJuego = NombreJuego;
}

bool DataPartida::getTransmitidaVivo() {
    return TransmitidaVivo;
}

void DataPartida::setTransmitidaVivo(bool TransmitidaVivo) {
    this->TransmitidaVivo = TransmitidaVivo;
}

string DataPartida::getNicknameJugadorInicio() {
    return NicknameJugadorInicio;
}

void DataPartida::setNicknameJugadorInicio(string NicknameJugadorInicio) {
    this->NicknameJugadorInicio = NicknameJugadorInicio;
}

string DataPartida::getNicknameJugadorUnieron() {
    return NicknameJugadorUnieron;
}

void DataPartida::setNicknameJugadorUnieron(string NicknameJugadorUnieron) {
    this->NicknameJugadorUnieron = NicknameJugadorUnieron;
}