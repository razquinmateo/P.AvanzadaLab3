#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
#include <string>
#include <vector>
#include "Suscripcion.h"

using namespace::std;

class Videojuego
{
    public:
        Videojuego();
        virtual ~Videojuego();

        // Constructor con parámetros
        Videojuego(string nombre, string descripcion, float totalHorasDeJuego, float promPuntaje);

        //getters
        string getNombre();
        string getDescripcion();
        float getTotalHorasDeJuego();
        float getPromPuntaje();
        Suscripcion* getSuscripcionActiva();

        //setters
        void setNombre(string);
        void setDescripcion(string);
        void setTotalHorasDeJuego(float);
        void setPromPuntaje(float);

    private:
        string nombre;
        string descripcion;
        float totalHorasDeJuego;
        float promPuntaje;
        vector<Suscripcion*> suscripciones;
        Suscripcion* suscripcionActiva;
};

#endif // VIDEOJUEGO_H
