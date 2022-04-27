//=================================================//
//	Universidad Nacional de Costa Rica
//  Programacion II
//  Proyecto No.1
//	1er Ciclo 2022
//	
//	Andres Muñoz - Alexander Dittel
//=================================================//

#include "Bus.h"
#include "Ruta.h"
#include "Tiquete.h"
#include "Interfaz.h"

int main() {
	/*
	Object* bus = new Bus(20, "Buseta", "BU001");
	Ruta* ruta = new Ruta("Cartago-San Jose");
	Tiquete* tiquete = new Tiquete("0001", "1122334455");
	cout << bus->toString();
	cout << ruta->toString();
	cout << tiquete->toString();*/
	int opc;
	do {
		opc = Interfaz::MenuPrincipal();
		Interfaz::MenuGeneral(opc);
	} while (opc != 4);
	return 0;
}
