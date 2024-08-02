#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

int main()
{
    string nombre;
    int opc = 0, ingresarDinero = 0, retirarDinero = 0;
    int mostrarDineroTotal = 0;
    cout << "----------------------------------------" << endl;
    cout << "|     Bienvenido al banco Intaybank    |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "      Introduzca su nombre: ";
    cin >> nombre;
    
    while (opc != 4)
    {
        cout << endl;
        cout << "Hola, " << nombre << "! Seleccione la opcion que desee ejecutar en su cuenta : " << endl;
        cout << "1) Ingresar dinero" << endl;
        cout << "2) Retirar dinero" << endl;
        cout << "3) Ver dinero" << endl;
        cout << "4) Salir" << endl;
        cout << "Seleccione la opcion que desee ejecutar en su cuenta: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "Ingrese el monto a agregar a su cuenta: ";
            cin >> ingresarDinero;

            if (ingresarDinero > 0)
            {
                mostrarDineroTotal += ingresarDinero;
                cout << "Se ha ingresado S/." << ingresarDinero << " a su cuenta!" << endl;
            }
            else {
                cout << "El monto debe ser positivo" << endl;
            }
            break;
        case 2:
            cout << "Ingrese el monto a retirar de su cuenta: ";
            cin >> retirarDinero;

            if (retirarDinero > 0 && retirarDinero <= mostrarDineroTotal)
            {
                mostrarDineroTotal -= retirarDinero;
                cout << "Se ha retirado S/." << retirarDinero << " de su cuenta." << endl;
            }
            else if (retirarDinero > mostrarDineroTotal){
                cout << "Fondos insuficientes." << endl;
            }
            else {
                cout << "El monto debe ser positivo." << endl;
            }
            break;
        case 3:
            cout << "---------------------------------------------" << endl;
            cout << "--->  El dinero total en su cuenta es de " << mostrarDineroTotal << endl;
            cout << "---------------------------------------------" << endl;
            break;
        case 4:
            cout << "Gracias por usar Intaybank. ¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
            break;
        }
    }
    return 0;
}
