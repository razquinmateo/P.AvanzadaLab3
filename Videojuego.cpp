#include "Videojuego.h"

Videojuego::Videojuego() {

}

// Constructor con parámetros
Videojuego::Videojuego(string nombre, string descripcion, float totalHorasDeJuego, float promPuntaje) : nombre(nombre), descripcion(descripcion), totalHorasDeJuego(totalHorasDeJuego), promPuntaje(promPuntaje) {}

Videojuego::~Videojuego() {}

//Getters
string Videojuego::getNombre() {
    return nombre;
}

string Videojuego::getDescripcion() {
    return descripcion;
}

float Videojuego::getTotalHorasDeJuego() {
    return totalHorasDeJuego;
}

float Videojuego::getPromPuntaje() {
    return promPuntaje;
}

//Setters
void Videojuego::setNombre(string _nombre) {
    this->nombre = _nombre;
}

void Videojuego::setDescripcion(string _descripcion) {
    this->descripcion = _descripcion;
}

void Videojuego::setTotalHorasDeJuego(float _totalHorasDeJuego) {
    this->totalHorasDeJuego = _totalHorasDeJuego;
}

void Videojuego::setPromPuntaje(float _promPuntaje) {
    this->promPuntaje = _promPuntaje;
}