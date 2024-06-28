#ifndef DT_DATA_SUSCRIPCION_H
#define DT_DATA_SUSCRIPCION_H

#include "DtDataTipoSuscripcion.h"
using namespace std;
#include <string>

class DtDataSuscripcion {
private:
    string nombre;
    DtDataTipoSuscripcion* costoPorSuscripcion;

public:
    DtDataSuscripcion(string nombre, DtDataTipoSuscripcion* costoPorSuscripcion);
    string getNombre();
    DtDataTipoSuscripcion* getCostoPorSuscripcion();
    void setNombre(string nombre);
    void setCostoPorSuscripcion(DtDataTipoSuscripcion* costoPorSuscripcion);
};

#endif