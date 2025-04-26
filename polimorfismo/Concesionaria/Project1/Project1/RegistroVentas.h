#pragma once
#include "Venta.h"

class RegistroVentas {
private:
    Venta** ventas;
    int indice;
    int maxVentas;

public:
    RegistroVentas(int maxVentas);
    ~RegistroVentas();

    void registrarVenta(double monto, Vehiculo* vehiculo, string comprador);
    void mostrarVentas();
};
