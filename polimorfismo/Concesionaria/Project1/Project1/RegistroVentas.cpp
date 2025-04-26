#include "RegistroVentas.h"
#include <iostream>
using namespace std;

RegistroVentas::RegistroVentas(int maxVentas) {
    this->maxVentas = maxVentas;
    this->indice = 0;
    ventas = new Venta * [maxVentas];
}

RegistroVentas::~RegistroVentas() {
    for (int i = 0; i < indice; i++) {
        delete ventas[i];
    }
    delete[] ventas;
}

void RegistroVentas::registrarVenta(double monto, Vehiculo* vehiculo, string comprador) {
    if (indice < maxVentas) {
        ventas[indice] = new Venta(monto, vehiculo, comprador);
        indice++;
    }
    else {
        cout << "¡Capacidad maxima de ventas alcanzada!" << endl;
    }
}

void RegistroVentas::mostrarVentas() {
    for (int i = 0; i < indice; i++) {
        ventas[i]->mostrarVenta();
        cout << endl;
    }
}
