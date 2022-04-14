#include "Tiquete.h"

Tiquete::Tiquete()
{
	this->numeroTiquete = "";
	this->cedulaCliente = "";
}

Tiquete::Tiquete(string numeroTiquete, string cedulaCliente)
{
	this->numeroTiquete = numeroTiquete;
	this->cedulaCliente = cedulaCliente;
}

Tiquete::~Tiquete()
{

}

void Tiquete::setNumeroTiquete(string numeroTiquete)
{
	this->numeroTiquete = numeroTiquete;
}

void Tiquete::setCedulaCliente(string cedulaCliente)
{
	this->cedulaCliente = cedulaCliente;
}

string Tiquete::getNumeroTiquete()
{
	return numeroTiquete;
}

string Tiquete::getCedulaCliente()
{
	return cedulaCliente;
}

string Tiquete::toString()
{
	stringstream s;
	s << "* Numero de tiquete: " << numeroTiquete << endl;
	s << "* Cedula del Cliente: " << cedulaCliente << endl;
	return s.str();
}

