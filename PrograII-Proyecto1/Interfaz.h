#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <iostream>

using namespace std;

class Interfaz {
private:
    static void head();
    static int foot();
    static void cuerpoMenuPrincipal();
    static void cuerpoMenuConfuguracion();
    static void cuerpoOpcEj2();
public:
    Interfaz();
    static int MenuPrincipal();
    static void MenuGeneral(int opc);
    static void MenuConfiguraion(int opc);
    static int OpcMenuConfiguracion();
    static int OpcEj2();
    virtual ~Interfaz();
};

#endif // !INTERFAZ_H
