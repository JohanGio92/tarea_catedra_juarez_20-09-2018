#include "TarjetaSube.h"
#include <iostream>
using namespace std;
using namespace johan;

int main() {
	Fecha fecha(5, 6, 7);
	Viaje viaje(fecha, "subte", 50);
	TarjetaSube tarjetaSube(60);
	tarjetaSube.pagar(viaje);
	cout << tarjetaSube;
	cout << tarjetaSube.obtenerViaje(1);
	return 0;
}
