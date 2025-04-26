#include "AutoNoDeportivo.h"
#include <iostream>
using namespace std;

AutoNoDeportivo::AutoNoDeportivo(string patente, string marca, string modelo, int kilometraje, string fechaImportacion)
    : Auto(patente, marca, modelo, kilometraje) {
    this->fechaImportacion = fechaImportacion;
}

void AutoNoDeportivo::registrarDatos() {
    Auto::registrarDatos();
    cout << "Fecha de importacion: ";
    cin >> fechaImportacion;
}

void AutoNoDeportivo::mostrarDatos() {
    Auto::mostrarDatos();
    cout << "Fecha de importacion: " << fechaImportacion << endl;
}
