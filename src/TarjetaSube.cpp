#include "TarjetaSube.h"

namespace johan {

const int TarjetaSube::MAXIMO_DE_VIAJES_REGISTRADO = 50;
int TarjetaSube::acumulador = 0;

TarjetaSube::TarjetaSube() :
		TarjetaSube(0) {
}

TarjetaSube::TarjetaSube(int saldo) :
		saldo(saldo) {
	idDeUsuario = ++acumulador;
	viajes = new std::vector<Viaje>[MAXIMO_DE_VIAJES_REGISTRADO];
}

int TarjetaSube::obtenerSaldo() {
	return saldo;
}

void TarjetaSube::pagar(Viaje viaje) {
	assert(MAXIMO_DE_VIAJES_REGISTRADO != viajes->size());
	assert(saldo > viaje.obtenerCostePorPersona());

	saldo = saldo - viaje.obtenerCostePorPersona();
	viajes->push_back(viaje);
}

Viaje TarjetaSube::obtenerViaje(int valor) {
	return viajes->at(--valor);
}

void TarjetaSube::recargar(int saldo){
	this->saldo = saldo;
}

std::ostream& operator<<(std::ostream &salida, const TarjetaSube &tarjetaSube) {
	salida << "idDeUsuario: " << tarjetaSube.idDeUsuario << endl << "saldo: "
			<< tarjetaSube.saldo << endl;

	return salida;
}

TarjetaSube::~TarjetaSube() {
	delete []viajes;
}


}
