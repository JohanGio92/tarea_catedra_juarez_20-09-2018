#include "Fecha.h"

namespace johan{

Fecha::Fecha() :
		Fecha(1, 1, 1) {
}

Fecha::Fecha(int dia, int mes, int anio) :
		dia(dia), mes(mes), anio(anio) {
}

Fecha::Fecha(const Fecha* fecha) :
		Fecha(fecha->dia, fecha->mes, fecha->anio) {
}


Fecha* Fecha::clonar(){
	return new Fecha(dia, mes, anio);
}

bool Fecha::esBisiesto(){
	bool ok = false;
	if(anio % 400 == 0)
		ok = true;
	if(anio % 100 == 0)
		ok = false;
	if(anio % 4 == 0)
		ok = true;
	return ok;
}

bool Fecha::esDiaValido() {
	return (1 <= this->dia &&  this->dia <= this->obtenerFinDelMes());
}

bool Fecha::esMesValido() {
	return (1 <= this->mes && this->mes <= 12);
}

bool Fecha::esValido() {
	return this->esDiaValido() && this->esMesValido();
}

void Fecha::avanzarMes() {
	mes++;
	if (!this->esMesValido()) {
		mes = mes % 12;
	}
}

void Fecha::avanzarDia() {
	dia++;
	if(!this->esDiaValido()){
		dia = dia % this->obtenerFinDelMes();
		avanzarMes();
	}
}


int Fecha::obtenerFinDelMes() {
	dia = 31;
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10
			|| mes == 12) {
		dia = 30;
	}

	if (mes == 2) {
		dia = esBisiesto() ? 29 : 28;
	}

	return dia;
}

std::ostream& operator<< (std::ostream &salida, const Fecha &fecha){
	salida << "fecha: " << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << std::endl;
	return salida;
}

Fecha::~Fecha() {

}

}
