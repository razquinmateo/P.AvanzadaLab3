// DtDataTipoSuscripcion.cpp
#include "DtDataTipoSuscripcion.h"

DtDataTipoSuscripcion::DtDataTipoSuscripcion(float mensual, float trimestral, float anual, float vitalicia)
  : mensual(mensual), trimestral(trimestral), anual(anual), vitalicia(vitalicia) {}

float DtDataTipoSuscripcion::getMensual() const {
  return mensual;
}

void DtDataTipoSuscripcion::setMensual(float mensual) {
  this->mensual = mensual;
}

float DtDataTipoSuscripcion::getTrimestral() const {
  return trimestral;
}

void DtDataTipoSuscripcion::setTrimestral(float trimestral) {
  this->trimestral = trimestral;
}

float DtDataTipoSuscripcion::getAnual() const {
  return anual;
}

void DtDataTipoSuscripcion::setAnual(float anual) {
  this->anual = anual;
}

float DtDataTipoSuscripcion::getVitalicia() const {
  return vitalicia;
}

void DtDataTipoSuscripcion::setVitalicia(float vitalicia) {
  this->vitalicia = vitalicia;
}