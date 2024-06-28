#include "DtDataInformacion.h"

DtDataInformacion::DtDataInformacion(DtDataVideojuego* datosVideojuego, float costoSuscripcionMensual, float costoSuscripcionTrimestral, float costoSuscripcionAnual, float costoSuscripcionVitalicia){
    this->datosVideojuego = datosVideojuego;
    this->costoSuscripcionMensual = costoSuscripcionMensual;
    this->costoSuscripcionTrimestral = costoSuscripcionTrimestral;
    this->costoSuscripcionAnual = costoSuscripcionAnual;
    this->costoSuscripcionVitalicia = costoSuscripcionVitalicia;
}

DtDataVideojuego* DtDataInformacion::getDatosVideojuego(){
    return datosVideojuego;
}

void DtDataInformacion::setDatosVideojuego(DtDataVideojuego* datosVideojuego){
    this->datosVideojuego = datosVideojuego;
}

float DtDataInformacion::getCostoSuscripcionMensual(){
    return costoSuscripcionMensual;
}

void DtDataInformacion::setCostoSuscripcionMensual(float costoSuscripcionMensual){
    this->costoSuscripcionMensual = costoSuscripcionMensual;
}

float DtDataInformacion::getCostoSuscripcionTrimestral(){
    return costoSuscripcionTrimestral;
}

void DtDataInformacion::setCostoSuscripcionTrimestral(float costoSuscripcionTrimestral){
    this->costoSuscripcionTrimestral = costoSuscripcionTrimestral;
}

float DtDataInformacion::getCostoSuscripcionAnual(){
    return costoSuscripcionAnual;
}

void DtDataInformacion::setCostoSuscripcionAnual(float costoSuscripcionAnual){
    this->costoSuscripcionAnual = costoSuscripcionAnual;
}

float DtDataInformacion::getCostoSuscripcionVitalicia(){
    return costoSuscripcionVitalicia;
}

void DtDataInformacion::setCostoSuscripcionVitalicia(float costoSuscripcionVitalicia){
    this->costoSuscripcionVitalicia = costoSuscripcionVitalicia;
}