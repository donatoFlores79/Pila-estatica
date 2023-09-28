#ifndef PILAESTATICA_H_INCLUDED
#define PILAESTATICA_H_INCLUDED

#include <string>
#include <iostream>
#include "Empleado.h"

const int TAM = 100;

class Pila{
private:
    Empleado pilaEmpleados[TAM];
    int ult;
public:
    Pila() : ult(-1){}

    bool llena() const;
    bool vacia() const;

    void push(const Empleado& e);
    Empleado& pop();
    Empleado& top();
};

#endif // PILAESTATICA_H_INCLUDED
