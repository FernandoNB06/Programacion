#include "Auto.h"
#include <iostream>
using namespace std;

Auto::Auto(string patente, string marca, string modelo, int kilometraje)
    : Vehiculo(patente, marca, modelo, kilometraje) {
}

void Auto::registrarDatos() {
    Vehiculo::registrarDatos();
}

void Auto::mostrarDatos() {
    Vehiculo::mostrarDatos();
}
