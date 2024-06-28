#ifndef DATACOMENTARIO_H
#define DATACOMENTARIO_H

using namespace std;
#include <string>
#include "DtFecha.h"

class DataComentario {
public:
  int getIdentificador();
  void setIdentificador(int Identificador);

  DtFecha* getFechaHoraEnvio();
  void setFechaHoraEnvio(DtFecha* FechaHoraEnvio);

  string getNicknameJugadorEscribio();
  void setNicknameJugadorEscribio(string nicknameJugadorEscribio);

  string getTexto();
  void setTexto(string texto);

  private:
    int Identificador;
    DtFecha* FechaHoraEnvio;
    string nicknameJugadorEscribio;
    string texto;
};

#endif