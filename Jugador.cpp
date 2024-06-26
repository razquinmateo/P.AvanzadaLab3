#include "Jugador.h"

Jugador::Jugador() : nickname(""), descripcion("") {}

// Constructor con parámetros
Jugador::Jugador(string nickanme, string descripcion) : nickname(nickanme), descripcion(descripcion) {}

// Destructor
Jugador::~Jugador() {}

//Getters
string Jugador::getNickname() {
    return nickname;
}

string Jugador::getDescripcion() {
    return descripcion;
}

//Setters
void Jugador::setNickname(string _nickname) {
    this->nickname = _nickname;
}

void Jugador::setDescripcion(string _descripcion) {
    this->descripcion = _descripcion;
}