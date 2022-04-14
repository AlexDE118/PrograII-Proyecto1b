#include "Ruta.h"

Ruta::Ruta()
{
	this->nombreRuta = "";
}

Ruta::Ruta(string nombreRuta)
{
	this->nombreRuta = nombreRuta;
}

Ruta::~Ruta() { }

void Ruta::setNombreRuta(string nombreRuta)
{
	this->nombreRuta = nombreRuta;
}

string Ruta::getNombreRuta()
{
	return nombreRuta;
}

string Ruta::toString()
{
	stringstream s;
	s << "* " << nombreRuta << endl;
	return s.str();
}
