#ifndef DATAPARTIDA_H
#define DATAPARTIDA_H

#include <string>
#include "DtFecha.h"

using namespace std;

class DataPartida {
private:
    int Identificador;
    DtFecha* FechaHora;
    string NombreJuego;
    bool TransmitidaVivo;
    string NicknameJugadorInicio;
    string NicknameJugadorUnieron;

public:
    DataPartida(int Identificador, DtFecha* FechaHora, string NombreJuego, bool TransmitidaVivo, string NicknameJugadorInicio, string NicknameJugadorUnieron);

    int getIdentificador();
    void setIdentificador(int Identificador);

    DtFecha* getFechaHora();
    void setFechaHora(DtFecha* FechaHora);

    string getNombreJuego();
    void setNombreJuego(string NombreJuego);

    bool getTransmitidaVivo();
    void setTransmitidaVivo(bool TransmitidaVivo);

    string getNicknameJugadorInicio();
    void setNicknameJugadorInicio(string NicknameJugadorInicio);

    string getNicknameJugadorUnieron();
    void setNicknameJugadorUnieron(string NicknameJugadorUnieron);
};

#endif // DATAPARTIDA_H