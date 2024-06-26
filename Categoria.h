#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <iostream>
#include <string.h>

using namespace::std;

enum class categoriaGenero {
    ACCION,
    AVENTURA,
    ESTRATEGIA,
    DEPORTE
};

enum class categoriaPlataforma {
    XBOX_X,
    PS5,
    SWITCH,
    PS4,
    XBOX_ONE
};

class Categoria
{
    public:
        Categoria();
        virtual ~Categoria();

        // Constructor con parámetros
        Categoria(string nombre, string descripcion, categoriaGenero, categoriaPlataforma);

        //getters
        string getNombre();
        string getApellido();
        string getCategoriaGenero();
        string getCategoriaPlataforma();

        //setters
        void setNombre(string);
        void setApellido(string);
        void setCategoriaGenero(categoriaGenero);
        void setCategoriaPlataforma(categoriaPlataforma);

    private:
        string nombre;
        string descripcion;
        categoriaGenero genero;
        categoriaPlataforma plataforma;
};

#endif // CATEGORIA_H
