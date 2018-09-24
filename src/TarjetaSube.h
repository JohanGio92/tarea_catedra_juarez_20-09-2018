#ifndef TARJETASUBE_H_
#define TARJETASUBE_H_

#include "Viaje.h"
#include <cassert>
#include <vector>

namespace johan {

class TarjetaSube {
private:
	static int acumulador;
	static const int MAXIMO_DE_VIAJES_REGISTRADO;
	int idDeUsuario;
	std::vector<Viaje>* viajes;
	int saldo;
public:
	TarjetaSube();
	TarjetaSube(int saldo);
	void recargar(int saldo);
	int obtenerSaldo();
	void pagar(Viaje viaje);
	Viaje obtenerViaje(int valor);
	friend std::ostream& operator<< (std::ostream &salida, const TarjetaSube &tarjetaSube);
	virtual ~TarjetaSube();
};

}

#endif
