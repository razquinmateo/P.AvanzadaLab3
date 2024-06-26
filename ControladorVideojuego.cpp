#include "ControladorVideojuego.h"

// Inicialización del puntero a la instancia
ControladorVideojuego* ControladorVideojuego::instancia = nullptr;

void ControladorVideojuego::datosDelVideojego(string nombre, string descripcion) {}
void ControladorVideojuego::ingresarMontoSuscripcionMensual(float monto) {}
void ControladorVideojuego::ingresarMontoSuscripcionTrimestral(float monto) {}
void ControladorVideojuego::ingresarMontoSuscripcionAnual(float monto) {}
void ControladorVideojuego::ingresarMontoSuscripcionVitalicia(float monto) {}
void ControladorVideojuego::listarCategoriasTipoGenero() {}
void ControladorVideojuego::seleccionarCategoriaGenero(categoriaGenero genero) {}
void ControladorVideojuego::listarCategoriasTipoPlataforma() {}
void ControladorVideojuego::seleccionarCategoriaPlataforma(categoriaPlataforma plataforma) {}
void ControladorVideojuego::listarOtrasCategorias() {}
void ControladorVideojuego::seleccionarOtraCategoria(Categoria* categoria) {}
void ControladorVideojuego::mostrarInformacionIngresadaAnteriormente() {}
void ControladorVideojuego::publicarNuevoVideojuego(string nombre, string descripcion, categoriaGenero genero, categoriaPlataforma plataforma) {}
void ControladorVideojuego::cancelarPublicacionDelVideojuego() {}
void ControladorVideojuego::listarVideojuegosPorSuscripcion() {}
void ControladorVideojuego::ingresarNombreVideojuego(string nombre) {}
void ControladorVideojuego::cancelarSuscripcionAVideojuego() {}
void ControladorVideojuego::cancelarSuscripcionTemporal() {}
void ControladorVideojuego::ingresarDatosSuscripcion(TipoSuscripcion tipo, float costo, MetodoPago metodo) {}
void ControladorVideojuego::confirmarSuscripcionAlVideojuego() {}
void ControladorVideojuego::asignarPuntajeAVideojuego(int puntaje) {}
void ControladorVideojuego::seleccionarVideojuegoAEliminar(Videojuego* videojuego) {}
void ControladorVideojuego::eliminarVideojuego() {}
void ControladorVideojuego::cancelarEliminacionVideojuego() {}
void ControladorVideojuego::sumaTotalDeHorasJugadas() {}
void ControladorVideojuego::obtenerDatosCategoria() {}
void ControladorVideojuego::ingresarDatosCategoria(string nombre, string descripcion, categoriaGenero genero, categoriaPlataforma plataforma) {}
void ControladorVideojuego::darAltaNuevaCategoria(string nombre, string descripcion, categoriaGenero genero, categoriaPlataforma plataforma) {}
void ControladorVideojuego::cancelarAltaNuevaCategoria() {}
void ControladorVideojuego::listarVideoJuegos() {}
void ControladorVideojuego::seleccionarVideoJuego(Videojuego* videojuego) {}