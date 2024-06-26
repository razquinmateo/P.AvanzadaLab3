#ifndef COMENTARIO_H
#define COMENTARIO_H

#include <iostream>
#include <string.h>
#include "DtFecha.h"
#include "Jugador.h"

using namespace::std;

class Comentario
{
    public:
        Comentario();
        virtual ~Comentario();

        // Constructor con parámetros
        Comentario(int id, Jugador*, DtFecha* fechaHoraEnvio, string texto);

        //getters
        int getId();
        DtFecha* getFechaHoraEnvio();
        string getTexto();

        //setters
        void setId(int);
        void setFechaHoraEnvio(DtFecha*);
        void setTexto(string);

    private:
        int id;
        Jugador* autorComentario;
        DtFecha* fechaHoraEnvio;
        string texto;
};

#endif // COMENTARIO_H
