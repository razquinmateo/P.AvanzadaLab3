#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string.h>

using namespace::std;

class Usuario
{
    public:
        Usuario();
        virtual ~Usuario();

        // Constructor con parámetros
        Usuario(string email, string contrasena);

        //getters
        string getEmail();
        string getContrasena();

        //setters
        void setEmail(string);
        void setContrasena(string);

    private:
        string email;
        string contrasena;
};

#endif // USUARIO_H
