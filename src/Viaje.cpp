#include "Viaje.h"

namespace johan {

Viaje::Viaje(Fecha fecha, string medioDeTransporte, int costePorPersona) :
		fecha(fecha), medioDeTransporte(medioDeTransporte), costePorPersona(
				costePorPersona) {
}

int Viaje::obtenerCostePorPersona() const {
	return costePorPersona;
}

void Viaje::cambiarCostePorPersona(int costePorPersona) {
	this->costePorPersona = costePorPersona;
}

const Fecha& Viaje::obtenerFecha() const {
	return fecha;
}

void Viaje::cambiarFecha(const Fecha& fecha) {
	this->fecha = fecha;
}

const string& Viaje::obtenerMedioDeTransporte() const {
	return medioDeTransporte;
}

void Viaje::cambiarMedioDeTransporte(const string& medioDeTransporte) {
	this->medioDeTransporte = medioDeTransporte;
}

std::ostream& operator<<(std::ostream &salida, const Viaje &viaje) {
	salida << viaje.fecha << "medio de transporte: " << viaje.medioDeTransporte
			<< endl << "valor del viaje: " <<  viaje.costePorPersona << endl;
	return salida;
}

Viaje::~Viaje() {
}

}
