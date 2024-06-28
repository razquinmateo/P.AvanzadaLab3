#include "DataJugador.h"

DataJugador::DataJugador(string nickname, string descripcion) 
  : nickname(nickname), descripcion(descripcion) {}

string DataJugador::getNickname() {
  return nickname;
}

void DataJugador::setNickname(string nickname) {
  this->nickname = nickname;
}

string DataJugador::getDescripcion() {
  return descripcion;
}

void DataJugador::setDescripcion(string descripcion) {
  this->descripcion = descripcion;
}