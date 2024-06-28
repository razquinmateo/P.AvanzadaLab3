#ifndef DTDATAVIDEOJUEGO_H
#define DTDATAVIDEOJUEGO_H

#include <string>
using namespace std;

class DtDataVideojuego {
    private:
        string nombre;
        string descripcion;

    public:
        DtDataVideojuego(string nombre, string descripcion);

        string getNombre();
        void setNombre(string nombre);

        string getDescripcion() ;
        void setDescripcion(string descripcion);
};

#endif