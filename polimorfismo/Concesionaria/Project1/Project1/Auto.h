#pragma once
#include "Vehiculo.h"

class Auto : public Vehiculo {
public:
    Auto(string patente, string marca, string modelo, int kilometraje);

    void registrarDatos();
    void mostrarDatos();
};
