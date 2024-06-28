#include "ControladorUsuario.h"

// Inicialización del puntero a la instancia
ControladorUsuario* ControladorUsuario::instancia = nullptr;

void ControladorUsuario::pedirCredencialesDelUsuario(string email, string contrasena) {}
void ControladorUsuario::datosUsuarioEsDesarrollador(DataDesarrollador) {}
void ControladorUsuario::datosUsuarioEsJugador(DataJugador) {}
void ControladorUsuario::reingresarNickname(string nickname) {}
void ControladorUsuario::cancelarRegistroDelJugador() {}
void ControladorUsuario::darAltaUsuarioEsDesarrollador(DataDesarrollador) {}
void ControladorUsuario::darAltaUsuarioJugador(DataJugador) {}
void ControladorUsuario::cancelarAltaUsuario() {}
void ControladorUsuario::cancelarInicioDeSesion() {}
