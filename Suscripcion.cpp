#include "Suscripcion.h"

// Constructor
Suscripcion::Suscripcion() {}

// Constructor con parámetros
Suscripcion::Suscripcion(TipoSuscripcion suscripcion, float costoSuscripcion, MetodoPago metodoDePago) : suscripcion(suscripcion), costoSuscripcion(costoSuscripcion), metodoDePago(metodoDePago) {}

Suscripcion::~Suscripcion() {}

//Getters
TipoSuscripcion Suscripcion::getSuscripcion() {
    return suscripcion;
}

float Suscripcion::getCostoSuscripcion() {
    return costoSuscripcion;
}

MetodoPago Suscripcion::getMetodoDePago() {
    return metodoDePago;
}

//Setters
void Suscripcion::setSuscripcion(TipoSuscripcion _suscripcion) {
    this->suscripcion = _suscripcion;
}

void Suscripcion::setCostoSuscripcion(float _costoSuscripcion) {
    this->costoSuscripcion = _costoSuscripcion;
}

void Suscripcion::setMetodoDePago(MetodoPago _metodoDePago) {
    this->metodoDePago = _metodoDePago;
}