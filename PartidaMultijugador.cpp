#include "PartidaMultijugador.h"

//Contructor con parametros
PartidaMultijugador::PartidaMultijugador(DtFecha* horaCierre, float duracion, bool esTransmitidaEnVivo) : horaCierre(horaCierre), duracion(duracion), esTransmitidaEnVivo(esTransmitidaEnVivo) {}

PartidaMultijugador::~PartidaMultijugador() {}

//Getters
DtFecha* PartidaMultijugador::getHoraCierre() {
    return horaCierre;
}

float PartidaMultijugador::getDuracion() {
    return duracion;
}

bool PartidaMultijugador::getEsTransmitidaEnVivo() {
    return esTransmitidaEnVivo;
}

//Setters
void PartidaMultijugador::setHoraCierre(DtFecha* _horaCierre) {
    this->horaCierre = _horaCierre;
}

void PartidaMultijugador::setDuracion(float _duracion) {
    this->duracion = _duracion;
}

void PartidaMultijugador::setTransmitidaEnVivo(bool _esTransmitidaEnVivo) {
    this->esTransmitidaEnVivo = _esTransmitidaEnVivo;
}
