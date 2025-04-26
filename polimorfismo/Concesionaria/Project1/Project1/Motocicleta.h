#pragma once
#include "Vehiculo.h"

class Motocicleta : public Vehiculo {
private:
    string tipo; // "carretera" o "campo"

public:
    Motocicleta(string patente, string marca, string modelo, int kilometraje, string tipo);

    void registrarDatos() ;
    void mostrarDatos() ;
};
