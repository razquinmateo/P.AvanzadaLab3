#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string.h>
#include "Usuario.h"

using namespace::std;

class Jugador : public Usuario
{
    public:
        Jugador();
        virtual ~Jugador();

        // Constructor con parámetros
        Jugador(string nickname, string descripcion);

        //getters
        string getNickname();
        string getDescripcion();

        //setters
        void setNickname(string);
        void setDescripcion(string);

    private:
        string nickname;
        string descripcion;
};

#endif // JUGADOR_H