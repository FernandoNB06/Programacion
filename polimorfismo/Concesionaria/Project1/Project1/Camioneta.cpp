#include "Camioneta.h"
#include <iostream>
using namespace std;

Camioneta::Camioneta(string patente, string marca, string modelo, int kilometraje, int capacidadCarga)
    : Vehiculo(patente, marca, modelo, kilometraje) {
    this->capacidadCarga = capacidadCarga;
}

void Camioneta::registrarDatos() {
    Vehiculo::registrarDatos();

    cout << "Capacidad de carga (kg): ";
    cin >> capacidadCarga;
}

void Camioneta::mostrarDatos() {
    Vehiculo::mostrarDatos();

    cout << "Capacidad de carga: " << capacidadCarga << " kg" << endl;
}
