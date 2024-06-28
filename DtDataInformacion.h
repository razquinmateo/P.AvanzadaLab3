#ifndef _DTDATAINFORMACION_H_
#define _DTDATAINFORMACION_H_

#include "DtDataVideojuego.h"

class DtDataInformacion {
  private:
    DtDataVideojuego* datosVideojuego;
    float costoSuscripcionMensual;
    float costoSuscripcionTrimestral;
    float costoSuscripcionAnual;
    float costoSuscripcionVitalicia;
    
  public:
    DtDataInformacion(DtDataVideojuego* datosVideojuego, float costoSuscripcionMensual, float costoSuscripcionTrimestral, float costoSuscripcionAnual, float costoSuscripcionVitalicia);
    DtDataVideojuego* getDatosVideojuego();
    void setDatosVideojuego(DtDataVideojuego* datosVideojuego);
    float getCostoSuscripcionMensual();
    void setCostoSuscripcionMensual(float costoSuscripcionMensual);
    float getCostoSuscripcionTrimestral();
    void setCostoSuscripcionTrimestral(float costoSuscripcionTrimestral);
    float getCostoSuscripcionAnual();
    void setCostoSuscripcionAnual(float costoSuscripcionAnual);
    float getCostoSuscripcionVitalicia();
    void setCostoSuscripcionVitalicia(float costoSuscripcionVitalicia);
};

#endif