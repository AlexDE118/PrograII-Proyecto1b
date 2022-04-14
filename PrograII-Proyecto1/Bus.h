#ifndef BUS_H
#define BUS_H
#include "Object.h"

class Bus :public Object {
private:
	int capacidad;
	string nombre;
	string placa;
	//vectorTiquetes* vector;
public:
	//constructor/destructor
	Bus();
	Bus(int capacidad, string nombre, string placa);
	~Bus();
	//sets
	void setCapacidad(int capacidad);
	void setNombre(string nombre);
	void setPlaca(string placa);
	//gets
	int getCapacidad();
	string getNombre();
	string getPlaca();
	//...
	string toString();
};
#endif // !BUS_H
