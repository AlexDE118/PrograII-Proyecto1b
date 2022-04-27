#include "Interfaz.h"

Interfaz::Interfaz() { }

int Interfaz::MenuPrincipal()
{
	head();
	cuerpoMenuPrincipal();
	return foot();
}

void Interfaz::MenuGeneral(int opc)
{
	int opcMenu = 0;
	switch (opc) {
	case 1:
		opcMenu = opc;
		Interfaz::OpcMenuConfiguracion();
		break;
	case 2:
		cout << "PLACEHOLDER 2" << endl;
		system("pause");
		break;
	case 3:
		cout << "PLACEHOLDER 3" << endl;
		system("pause");
		break;
	}
}

void Interfaz::MenuConfiguraion(int opc)
{
	int opcMenu;
	switch (opc) {
	case 1:
		cout << "PLACEHOLDER CONFIGURACION 1" << endl;
		system("pause");
		break;
	case 2:
		cout << "PLACEHOLDER CONFIGURACION 2" << endl;
		system("pause");
		break;
	case 3:
		cout << "PLACEHOLDER CONFIGURACION 3" << endl;
		system("pause");
		break;
	case 4:
		Interfaz::MenuPrincipal();
		break;
	}
}

int Interfaz::OpcMenuConfiguracion()
{
	head();
	cuerpoMenuConfuguracion();

	return foot();
}

void Interfaz::head()
{
	int opc = 0;
	system("cls");
	cout << "MENU:" << endl;
}

int Interfaz::foot()
{
	int opc;
	cout << "Digite una opcion:" << endl;
	fflush(stdin);
	cin >> opc;
	return opc;
}

void Interfaz::cuerpoMenuPrincipal()
{
	cout << "[1] Configuracion de la flota de trasnporte." << endl;
	cout << "[2] Reserva de tiquetes. " << endl;
	cout << "[3] Reportes." << endl;
	cout << "[4] Salir" << endl;
}

void Interfaz::cuerpoMenuConfuguracion()
{
	cout << "[1] Tipos de Buses." << endl;
	cout << "[2] Restricciones Sanitarias." << endl;
	cout << "[3] Rutas de viaje." << endl;
	cout << "[4] Regresar." << endl;
}

Interfaz::~Interfaz() { }
