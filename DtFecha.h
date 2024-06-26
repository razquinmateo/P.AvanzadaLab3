#ifndef DTFECHA_H_
#define DTFECHA_H_

#include <string>
using namespace::std;

class DtFecha {
private:
	int dia;
	int mes;
	int anio;

public:
	DtFecha();
	virtual ~DtFecha();
	DtFecha(int, int, int);

	//Getters
	int getDia();
	int getMes();
	int getAnio();

	//Setters
	void setDia(int);
	void setMes(int);
	void setAnio(int);

	string presentation();
};

#endif /* DTFECHA_H_ */
