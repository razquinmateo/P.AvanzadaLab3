// DtDataTipoSuscripcion.h
#ifndef DTDATATIPOSUSCRIPCION_H
#define DTDATATIPOSUSCRIPCION_H

class DtDataTipoSuscripcion {
private:
  float mensual;
  float trimestral;
  float anual;
  float vitalicia;

public:
  DtDataTipoSuscripcion(float mensual, float trimestral, float anual, float vitalicia);

  float getMensual() const;
  void setMensual(float mensual);

  float getTrimestral() const;
  void setTrimestral(float trimestral);

  float getAnual() const;
  void setAnual(float anual);

  float getVitalicia() const;
  void setVitalicia(float vitalicia);
};

#endif