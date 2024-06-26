#ifndef FABRICA_H
#define FABRICA_H

#include "InterfazUsuario.h"
#include "ControladorUsuario.h"
#include "InterfazPartida.h"
#include "ControladorPartida.h"
#include "InterfazVideojuego.h"
#include "ControladorVideojuego.h"
#include <string>
#include <iostream>

using namespace::std;

class Fabrica
{
    public:
        // Método estático para obtener la instancia única de Fabrica
        static Fabrica* getInstancia() {
            if (!instancia) {
                instancia = new Fabrica();
            }
            return instancia;
        }

         // Método para obtener la interfaz de usuario
        InterfazUsuario* getControladorUsuario() {
            return ControladorUsuario::getInstancia();
        }

        // Método para obtener la interfaz de la partida
        InterfazPartida* getControladorPartida() {
            return ControladorPartida::getInstancia();
        }

         // Método para obtener la interfaz de la partida
        InterfazVideojuego* getControladorVideojuego() {
            return ControladorVideojuego::getInstancia();
        }

    private:
        // Constructor y destructor privado
        Fabrica() = default;
        ~Fabrica() = default;

        // Puntero a la instancia única de Fabrica
        static Fabrica* instancia;
};

#endif // FABRICA_H