#ifndef RUTA_H
#define RUTA_H
#include "Object.h"

class Ruta :public Object {
private:
	string nombreRuta;
public:
	//constructor/destructor
	Ruta();
	Ruta(string nombreRuta);
	~Ruta();
	//set
	void setNombreRuta(string nombreRuta);
	//get
	string getNombreRuta();
	//...
	string toString();
};

#endif // !RUTA_H
