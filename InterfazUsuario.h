#ifndef INERFAZUSUARIO_H
#define INERFAZUSUARIO_H

#include <string>
#include <iostream>

using namespace::std;

class InterfazUsuario
{
    public:
        InterfazUsuario();
        virtual ~InterfazUsuario();

        //Funciones del controlador
        virtual void pedirCredencialesDelUsuario(string, string) = 0;
        virtual void datosUsuarioEsDesarrollador(string) = 0;
        virtual void datosUsuarioEsJugador(string, string) = 0;
        virtual void reingresarNickname(string) = 0;
};

#endif // INERFAZUSUARIO_H
