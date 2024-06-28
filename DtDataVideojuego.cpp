#include "DtDataVideojuego.h"

DtDataVideojuego::DtDataVideojuego(string nombre, string descripcion)
    : nombre(nombre), descripcion(descripcion) {}

std::string DtDataVideojuego::getNombre() {
    return nombre;
}

void DtDataVideojuego::setNombre(string nombre) {
    this->nombre = nombre;
}

std::string DtDataVideojuego::getDescripcion() {
    return descripcion;
}

void DtDataVideojuego::setDescripcion(string descripcion) {
    this->descripcion = descripcion;
}