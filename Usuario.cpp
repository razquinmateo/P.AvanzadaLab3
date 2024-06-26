#include "Usuario.h"

// Constructor
Usuario::Usuario() {}

// Constructor con parámetros
Usuario::Usuario(string email, string contrasena) : email(email), contrasena(contrasena) {}

// Destructor
Usuario::~Usuario() {}

// Getters
string Usuario::getEmail() {
    return email;
}

string Usuario::getContrasena() {
    return contrasena;
}

// Setters
void Usuario::setEmail(string _email) {
    this->email = _email;
}

void Usuario::setContrasena(string _contrasena) {
    this->contrasena = _contrasena;
}
