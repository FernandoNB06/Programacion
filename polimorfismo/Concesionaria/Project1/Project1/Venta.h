#pragma once
#include "Vehiculo.h"

class Venta {
private:
    double monto;
    Vehiculo* vehiculoVendido;
    string comprador;

public:
    Venta(double monto, Vehiculo* vehiculoVendido, string comprador);

    void mostrarVenta();
};
