#ifndef FECHA_H_
#define FECHA_H_

#include <ostream>

namespace johan{
class Fecha {
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha();
	Fecha(int dia, int mes, int anio);
	Fecha(const Fecha* fecha);
	bool esBisiesto();
	bool esDiaValido();
	bool esMesValido();
	bool esValido();
	void avanzarDia();
	void avanzarMes();
	friend std::ostream& operator<< (std::ostream &salida, const Fecha &fecha);
	virtual ~Fecha();

private:
	Fecha* clonar();
	int obtenerFinDelMes();
};
}

#endif
