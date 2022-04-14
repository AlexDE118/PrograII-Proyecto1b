#include "Bus.h"

Bus::Bus()
{
	this->capacidad = 0;
	this->nombre = "";
	this->placa = "";
}

Bus::Bus(int capacidad, string nombre, string placa)
{
	this->capacidad = capacidad;
	this->nombre = nombre;
	this->placa = placa;
}

Bus::~Bus()
{

}

void Bus::setCapacidad(int capacidad)
{
	this->capacidad = capacidad;
}

void Bus::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Bus::setPlaca(string placa)
{
	this->placa = placa;
}

int Bus::getCapacidad()
{
	return this->capacidad;
}

string Bus::getNombre()
{
	return this->nombre;
}

string Bus::getPlaca()
{
	return this->placa;
}

string Bus::toString()
{
	stringstream s;

	s << "********* Bus *********" << endl;
	s << "* Nombre: " << nombre << endl;
	s << "* Placa: " << placa << endl;
	s << "* Capacidad: " << capacidad << endl;
	s << "***********************" << endl;

	return s.str();
}
