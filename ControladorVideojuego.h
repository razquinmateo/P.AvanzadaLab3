#ifndef CONTROLADORVIDEOJUEGO_H
#define CONTROLADORVIDEOJUEGO_H

#include "InterfazVideojuego.h"
#include "Videojuego.h"
#include "Categoria.h"
#include <string>
#include <vector>

using namespace::std;

class ControladorVideojuego : public InterfazVideojuego
{
    public: 
        //Metodos de la interfaz y controlador
        void datosDelVideojego(string, string);
        void ingresarMontoSuscripcionMensual(float);
        void ingresarMontoSuscripcionTrimestral(float);
        void ingresarMontoSuscripcionAnual(float);
        void ingresarMontoSuscripcionVitalicia(float);
        void listarCategoriasTipoGenero();
        void seleccionarCategoriaGenero(categoriaGenero);
        void listarCategoriasTipoPlataforma();
        void seleccionarCategoriaPlataforma(categoriaPlataforma);
        void listarOtrasCategorias();
        void seleccionarOtraCategoria(Categoria*);
        void mostrarInformacionIngresadaAnteriormente();
        void publicarNuevoVideojuego(string, string, categoriaGenero, categoriaPlataforma);
        void cancelarPublicacionDelVideojuego();
        void listarVideojuegosPorSuscripcion();
        void ingresarNombreVideojuego(string);
        void cancelarSuscripcionAVideojuego();
        void cancelarSuscripcionTemporal();
        void ingresarDatosSuscripcion(TipoSuscripcion, float, MetodoPago);
        void confirmarSuscripcionAlVideojuego();
        void asignarPuntajeAVideojuego(int);
        void seleccionarVideojuegoAEliminar(Videojuego*);
        void eliminarVideojuego();
        void cancelarEliminacionVideojuego();
        void sumaTotalDeHorasJugadas();
        void obtenerDatosCategoria();
        void ingresarDatosCategoria(string, string, categoriaGenero, categoriaPlataforma);
        void darAltaNuevaCategoria(string, string, categoriaGenero, categoriaPlataforma);
        void cancelarAltaNuevaCategoria();
        void listarVideoJuegos();
        void seleccionarVideoJuego(Videojuego*);

        // Método estático para obtener la instancia única
        static ControladorVideojuego* getInstancia() {
            if (!instancia) {
                instancia = new ControladorVideojuego();
            }
            return instancia;
        }

    private:
        // Constructor y destructor privados
        ControladorVideojuego() = default;
        ~ControladorVideojuego() = default;

        // Puntero a la instancia única
        static ControladorVideojuego* instancia;

        vector<Videojuego*> videojuegos;
};

#endif // CONTROLADORVIDEOJUEGO_H