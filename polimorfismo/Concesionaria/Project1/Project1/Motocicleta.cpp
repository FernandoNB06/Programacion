#include "Motocicleta.h"
#include <iostream>
using namespace std;

Motocicleta::Motocicleta(string patente, string marca, string modelo, int kilometraje, string tipo)
    : Vehiculo(patente, marca, modelo, kilometraje) {
    this->tipo = tipo;
}

void Motocicleta::registrarDatos() {
    Vehiculo::registrarDatos();

    cout << "Tipo de motocicleta (carretera o campo): ";
    cin >> tipo;
}

void Motocicleta::mostrarDatos() {
    Vehiculo::mostrarDatos();

    cout << "Tipo de motocicleta: " << tipo << endl;
}
