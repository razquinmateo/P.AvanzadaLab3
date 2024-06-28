#ifndef DATADESARROLLADOR_H
#define DATADESARROLLADOR_H

#include <string>
#include <iostream>

using namespace std;

class DataDesarrollador {
public:
  DataDesarrollador(string nombreEmpresa);

  string getNombreEmpresa();
  void setNombreEmpresa(string nombreEmpresa);

private:
  string nombreEmpresa;
};

#endif // DATADESARROLLADOR_H