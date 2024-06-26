#include "PartidaIndividual.h"

//Contructor con parametros
PartidaIndividual::PartidaIndividual(bool partidaNueva) : partidaNueva(partidaNueva) {}

PartidaIndividual::~PartidaIndividual() {}

//Getters
bool PartidaIndividual::getPartidaNueva() {
    return partidaNueva;
}

//Setters
void PartidaIndividual::setPartidaNueva(bool _partidaNueva) {
    this->partidaNueva = _partidaNueva;
}