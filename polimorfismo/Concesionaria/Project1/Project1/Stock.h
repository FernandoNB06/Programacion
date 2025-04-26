#pragma once
#include "Vehiculo.h"
#include "Motocicleta.h"
#include "Camioneta.h"
#include "AutoDeportivo.h"
#include "AutoNoDeportivo.h"


class Stock {
private:
    Vehiculo** vehiculos;
    int indice;
    int maxVehiculos;

public:
    Stock(int maxVehiculos);
    ~Stock();

    void registrarVehiculo(string patente, TipoVehiculo tipo);
    void mostrarVehiculos();
    Vehiculo* getVehiculo(int i); 
    int getCantidad();            
};
