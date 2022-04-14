#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Object {
private:
	//...
protected:
	//...
public:
	virtual string toString() = 0;
};

#endif // !OBJECT_H
