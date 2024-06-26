#ifndef DESARROLLADOR_H
#define DESARROLLADOR_H

#include <iostream>
#include <string.h>
#include "Usuario.h"

using namespace::std;

class Desarrollador : public Usuario
{
    public:
        Desarrollador();
        virtual ~Desarrollador();

        // Constructor con parámetros
        Desarrollador(string nombreEmpresa);

        //getters
        string getNombreEmpresa();

        //setters
        void setNombreEmpresa(string);

    private:
        string nombreEmpresa;
};

#endif // DESARROLLADOR_H