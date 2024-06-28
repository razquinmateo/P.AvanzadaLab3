#include "DataComentario.h"

int DataComentario::getIdentificador() {
  return Identificador;
}

void DataComentario::setIdentificador(int Identificador) {
  this->Identificador = Identificador;
}

DtFecha* DataComentario::getFechaHoraEnvio() {
  return FechaHoraEnvio;
}

void DataComentario::setFechaHoraEnvio(DtFecha* FechaHoraEnvio) {
  this->FechaHoraEnvio = FechaHoraEnvio;
}

string DataComentario::getNicknameJugadorEscribio() {
  return nicknameJugadorEscribio;
}

void DataComentario::setNicknameJugadorEscribio(string nicknameJugadorEscribio) {
  this->nicknameJugadorEscribio = nicknameJugadorEscribio;
}

string DataComentario::getTexto() {
  return texto;
}

void DataComentario::setTexto(string texto) {
  this->texto = texto;
}