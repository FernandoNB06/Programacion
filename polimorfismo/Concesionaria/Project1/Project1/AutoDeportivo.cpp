#include "AutoDeportivo.h"
#include <iostream>
using namespace std;

AutoDeportivo::AutoDeportivo(string patente, string marca, string modelo, int kilometraje, string paisOrigen)
    : Auto(patente, marca, modelo, kilometraje) {
    this->paisOrigen = paisOrigen;
}

void AutoDeportivo::registrarDatos() {
    Auto::registrarDatos();
    cout << "Pais de origen: ";
    cin >> paisOrigen;
}

void AutoDeportivo::mostrarDatos() {
    Auto::mostrarDatos();
    cout << "Pais de origen: " << paisOrigen << endl;
}
