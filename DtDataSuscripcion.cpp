#include "DtDataSuscripcion.h"

DtDataSuscripcion::DtDataSuscripcion(string nombre, DtDataTipoSuscripcion* costoPorSuscripcion){
    this->nombre = nombre;
    this->costoPorSuscripcion = costoPorSuscripcion;
}

string DtDataSuscripcion::getNombre(){
    return nombre;
}

DtDataTipoSuscripcion* DtDataSuscripcion::getCostoPorSuscripcion(){
    return costoPorSuscripcion;
}

void DtDataSuscripcion::setNombre(string nombre){
    this->nombre = nombre;
}

void DtDataSuscripcion::setCostoPorSuscripcion(DtDataTipoSuscripcion* costoPorSuscripcion){
    this->costoPorSuscripcion = costoPorSuscripcion;
}