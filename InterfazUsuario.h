#ifndef INERFAZUSUARIO_H
#define INERFAZUSUARIO_H

#include <string>
#include <iostream>
#include "DataDesarrollador.h"
#include "DataJugador.h"

using namespace::std;

class InterfazUsuario
{
    public:
        InterfazUsuario();
        virtual ~InterfazUsuario();

        //Funciones del controlador
        virtual void pedirCredencialesDelUsuario(string, string) = 0;
        virtual void datosUsuarioEsDesarrollador(DataDesarrollador) = 0;
        virtual void datosUsuarioEsJugador(DataJugador) = 0;
        virtual void reingresarNickname(string) = 0;
};

#endif // INERFAZUSUARIO_H
