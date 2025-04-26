#pragma once
#include "Vehiculo.h"

class Camioneta : public Vehiculo {
private:
    int capacidadCarga; 

public:
    Camioneta(string patente, string marca, string modelo, int kilometraje, int capacidadCarga);

    void registrarDatos() ;
    void mostrarDatos() ;
};
