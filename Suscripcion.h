#ifndef SUSCRIPCION_H
#define SUSCRIPCION_H

#include <iostream>
#include <string>

using namespace::std;

enum class TipoSuscripcion {
    MENSUAL,
    TRIMESTRAL,
    ANUAL,
    VITALICIA
};

enum class MetodoPago {
    PayPal,
    Tarjeta
};

class Suscripcion
{
    public:
        Suscripcion();
        virtual ~Suscripcion();

        // Constructor con parámetros
        Suscripcion(TipoSuscripcion, float, MetodoPago);

        //getters
        TipoSuscripcion getSuscripcion();
        float getCostoSuscripcion();
        MetodoPago getMetodoDePago();

        //setters
        void setSuscripcion(TipoSuscripcion);
        void setCostoSuscripcion(float);
        void setMetodoDePago(MetodoPago);

    private:
    TipoSuscripcion suscripcion;
    float costoSuscripcion;
    MetodoPago metodoDePago;
};

#endif // SUSCRIPCION_H
