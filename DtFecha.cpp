#include "DtFecha.h"
#include <string>
using namespace::std;

DtFecha::DtFecha() {
	// TODO Auto-generated constructor stub
}

DtFecha::DtFecha(int dia, int mes, int anio) {
	if (dia > 31 || dia < 1) {
		throw "Dia no valido";
	}
	else if (mes > 12 || mes < 1) {
			throw "Mes no valido";
	}
	else if(anio < 1900){
			throw "Anio no valido";
	}

	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

//Presentacion
string DtFecha::presentation() {
	string presentacion;
	presentacion = to_string(this->getDia()) + " / " + to_string(this->getMes()) + " / " + to_string(this->getAnio());
	return presentacion;
}

//Dia
int DtFecha::getDia() {
	return this->dia;
}
void DtFecha::setDia(int _dia) {
    this->dia = _dia;
}

//Mes
int DtFecha::getMes() {
	return this->mes;
}
void DtFecha::setMes(int _mes) {
    this->mes = _mes;
}

//Anio
int DtFecha::getAnio() {
	return this->anio;
}
void DtFecha::setAnio(int _anio) {
    this->anio = _anio;
}

DtFecha::~DtFecha() {
	// TODO Auto-generated destructor stub
}

