#ifndef VIAJE_H_
#define VIAJE_H_

#include "Fecha.h"
#include <string>
using namespace std;

namespace johan {

class Viaje {
private:
	Fecha fecha;
	string medioDeTransporte;
	int costePorPersona;
public:
	Viaje(Fecha fecha, string medioDeTransporte, int costePorPersona);
	int obtenerCostePorPersona() const;
	void cambiarCostePorPersona(int costePorPersona);
	const Fecha& obtenerFecha() const;
	void cambiarFecha(const Fecha& fecha);
	const string& obtenerMedioDeTransporte() const;
	void cambiarMedioDeTransporte(const string& medioDeTransporte);
	friend std::ostream& operator<< (std::ostream &salida, const Viaje &viaje);
	virtual ~Viaje();
};

}

#endif
