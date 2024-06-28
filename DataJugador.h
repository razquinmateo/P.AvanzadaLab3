#ifndef DATAJUGADOR_H
#define DATAJUGADOR_H

#include <iostream>
#include <string>
using namespace std;

class DataJugador {
public:
  DataJugador(string nickname, string descripcion);

  string getNickname();
  void setNickname(string nickname);

  string getDescripcion();
  void setDescripcion(string descripcion);

private:
  string nickname;
  string descripcion;
};

#endif // DATAJUGADOR_H