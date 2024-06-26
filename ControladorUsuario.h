#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H

#include "InterfazUsuario.h"
#include "Usuario.h"
#include "Jugador.h"
#include <string>
#include <vector>

using namespace::std;

class ControladorUsuario : public InterfazUsuario
{
    public:      
        //Metodos de la interfaz y controlador
        void pedirCredencialesDelUsuario(string, string);
        bool tipoDeUsuarioDesarrollador(string);
        void reingresarNickname(string);
        void datosUsuarioEsDesarrollador(string);
        void datosUsuarioEsJugador(string, string);
        void cancelarRegistroDelJugador();
        void darAltaUsuarioEsDesarrollador(string);
        void darAltaUsuarioJugador(string, string);
        void cancelarAltaUsuario();
        void cancelarInicioDeSesion();

        // Método estático para obtener la instancia única
        static ControladorUsuario* getInstancia() {
            if (!instancia) {
                instancia = new ControladorUsuario();
            }
            return instancia;
        }

    private:
        // Constructor y destructor privados
        ControladorUsuario() = default;
        ~ControladorUsuario() = default;

        // Puntero a la instancia única
        static ControladorUsuario* instancia;

        // Vector para almacenar usuarios
        vector<Usuario*> usuarios;
};

#endif // CONTROLADORUSUARIO_H