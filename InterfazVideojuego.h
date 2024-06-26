#ifndef INERFAZVIDEOJUEGO_H
#define INERFAZVIDEOJUEGO_H

#include <string>
#include <iostream>
#include "Categoria.h"
#include "Videojuego.h"

using namespace::std;

class InterfazVideojuego
{
    public:
        InterfazVideojuego();
        virtual ~InterfazVideojuego();

        //Funciones del controlador
        virtual void ingresarMontoSuscripcionMensual(float) = 0;
        virtual void ingresarMontoSuscripcionTrimestral(float) = 0;
        virtual void ingresarMontoSuscripcionAnual(float) = 0;
        virtual void ingresarMontoSuscripcionVitalicia(float) = 0;
        virtual void seleccionarCategoriaGenero(categoriaGenero) = 0;
        virtual void seleccionarCategoriaPlataforma(categoriaPlataforma) = 0;
        virtual void seleccionarOtraCategoria(Categoria*) = 0;
        virtual void ingresarNombreVideojuego(string) = 0;
        virtual void ingresarDatosSuscripcion(TipoSuscripcion, float, MetodoPago) = 0;
        virtual void confirmarSuscripcionAlVideojuego() = 0;
        virtual void asignarPuntajeAVideojuego(int) = 0;
        virtual void seleccionarVideojuegoAEliminar(Videojuego*) = 0;
        virtual void ingresarDatosCategoria(string, string, categoriaGenero, categoriaPlataforma) = 0;
        virtual void seleccionarVideoJuego(Videojuego*) = 0;
};

#endif // INERFAZVIDEOJUEGO_H