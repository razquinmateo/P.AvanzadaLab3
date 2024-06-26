#include "Comentario.h"

Comentario::Comentario() {

}

//Constructor con parametros
Comentario::Comentario(int id, Jugador* autorComentario, DtFecha* fechaHoraEnvio, string texto) : id(id), autorComentario(autorComentario), fechaHoraEnvio(fechaHoraEnvio), texto(texto) {}

Comentario::~Comentario() {}

//Getters
int Comentario::getId() {
    return id;
}

DtFecha* Comentario::getFechaHoraEnvio() {
    return fechaHoraEnvio;
}

string Comentario::getTexto() {
    return texto;
}

//Setters
void Comentario::setId(int _id) {
    this->id = _id;
}

void Comentario::setFechaHoraEnvio(DtFecha* _fechaHoraEnvio) {
    this->fechaHoraEnvio = _fechaHoraEnvio;
}

void Comentario::setTexto(string _texto) {
    this->texto = _texto;
}