#include <iostream>
#include "PilaEstatica.h"

using namespace std;

int main()
{
    int opc = 0;
    Empleado empleadoAux;
    Pila pila;
    while(opc != 4){
        cout<< "Que deseas realizar?\n";
        cout<< "1. Apilar empleado\n";
        cout<< "2. Desapilar empleado\n";
        cout<< "3. Mostrar tope de la pila\n";
        cout<< "4. Salir\n";
        cout<< "  --->";
        cin>> opc;

        switch(opc){
            case 1:
                cin>> empleadoAux;
                pila.push(empleadoAux);
                cout<< "\n\n";
                break;
            case 2:
                if(!pila.vacia())
                    cout<< "Empleado desapilado: " << pila.pop() << "\n\n";
                else
                    cout<< "\nLa pila esta vacia\n\n";
                break;
            case 3:
                if(!pila.vacia())
                    cout<< pila.top() << "\n\n";
                else
                    cout<< "\nLa pila esta vacia\n\n";
                break;
            case 4:
                break;
            default:
                cout<< "\nIngresa una opcion valida\n";
        }
    }
    return 0;
}
