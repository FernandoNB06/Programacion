#include "Venta.h"
#include <iostream>
using namespace std;

Venta::Venta(double monto, Vehiculo* vehiculoVendido, string comprador) {
    this->monto = monto;
    this->vehiculoVendido = vehiculoVendido;
    this->comprador = comprador;
}

void Venta::mostrarVenta() {
    cout << "---- Venta ----" << endl;
    cout << "Comprador: " << comprador << endl;
    cout << "Monto: " << monto << endl;
    cout << "Vehiculo vendido:" << endl;
    vehiculoVendido->mostrarDatos();
    cout << "-------------" << endl;
}
