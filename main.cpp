#include <iostream>
#include "ejercicioss.h"
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n-----MENU-----\n";
        cout << "1. Notas estudiantes\n";
        cout << "2. Encuesta servicio cine\n";
        cout << "3. Secuencia de ascendente\n";
        cout << "4. Tienda de descuentos\n";
        cout << "5. Primer caracter no repetido\n";
        cout << "6. Secuencia Fibonacci\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                Ejercicio1();
                break;

            case 2:
                Ejercicio2();
                break;

            case 3:
                Ejercicio3();
                break;

            case 4:
                Ejercicio4();
                break;

            case 5:
                Ejercicio5();
                break;

            case 6:
                Ejercicio6();
                break;

            case 0:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción no válida, intente de nuevo." << endl;
                break;
        }
    } while (opcion != 0);

    return 0;
}