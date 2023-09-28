#include "PilaEstatica.h"

using namespace std;

bool Pila::llena() const{
    return(ult == TAM-1);
}

bool Pila::vacia() const{
    return(ult == -1);
}

void Pila::push(const Empleado& e){
    if(llena())
        cout<< "La pila esta llena\n";
    else{
        pilaEmpleados[ult+1] = e;
        ult++;
    }
}

Empleado& Pila::pop(){
    if(vacia()){
        cout<< "La pila esta vacia\n";
        //return pilaEmpleados[0];
    }
    else{
        ult--;
        return pilaEmpleados[ult+1];
    }
}

Empleado& Pila::top(){
    if(vacia()){
        cout<< "La pila esta vacia\n";
        //return pilaEmpleados[0];
    }
    else
        return pilaEmpleados[ult];
}
