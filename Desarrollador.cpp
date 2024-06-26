#include "Desarrollador.h"

Desarrollador::Desarrollador() : nombreEmpresa("") {}

// Constructor con parámetros
Desarrollador::Desarrollador(string nombreEmpresa) : nombreEmpresa(nombreEmpresa) {}

// Destructor
Desarrollador::~Desarrollador() {}

//Getters
string Desarrollador::getNombreEmpresa() {
    return nombreEmpresa;
}

//Setters
void Desarrollador::setNombreEmpresa(string _nombreEmpresa) {
    this->nombreEmpresa = _nombreEmpresa;
}