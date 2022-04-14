#ifndef TIQUETE_H
#define TIQUETE_H
#include "Object.h"

class Tiquete :public Object {
private:
	string numeroTiquete;
	string cedulaCliente;
public:
	//constructor/destructor
	Tiquete();
	Tiquete(string numeroTiquete, string cedulaCliente);
	~Tiquete();
	//set
	void setNumeroTiquete(string numeroTiquete);
	void setCedulaCliente(string cedulaCliente);
	//get
	string getNumeroTiquete();
	string getCedulaCliente();
	//...
	string toString();
};

#endif // !TIQUETE_H
