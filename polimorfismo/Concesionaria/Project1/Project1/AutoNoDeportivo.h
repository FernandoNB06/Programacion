#pragma once
#include "Auto.h"

class AutoNoDeportivo : public Auto {
private:
    string fechaImportacion;

public:
    AutoNoDeportivo(string patente, string marca, string modelo, int kilometraje, string fechaImportacion);

    void registrarDatos() ;
    void mostrarDatos() ;
};
