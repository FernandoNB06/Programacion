#pragma once
#include "Auto.h"

class AutoDeportivo : public Auto {
private:
    string paisOrigen;

public:
    AutoDeportivo(string patente, string marca, string modelo, int kilometraje, string paisOrigen);

    void registrarDatos();
    void mostrarDatos();
};
