#include "DataDesarrollador.h"

DataDesarrollador::DataDesarrollador(string nombreEmpresa) 
  : nombreEmpresa(nombreEmpresa) {}

string DataDesarrollador::getNombreEmpresa() {
  return nombreEmpresa;
}

void DataDesarrollador::setNombreEmpresa(string nombreEmpresa) {
  this->nombreEmpresa = nombreEmpresa;
}