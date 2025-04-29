#include "GarabatoLineas.h"

GarabatoLineas::GarabatoLineas(int maxLineas) {
    this->maxLineas = maxLineas;
    indice = 0;
    lineas = new Linea * [maxLineas];
}

GarabatoLineas::~GarabatoLineas() {
    for (int i = 0; i < indice; i++) {
        delete lineas[i];
    }
    delete[] lineas;
}

void GarabatoLineas::dibujar() {
    for (int i = 0; i < indice; i++) {
        lineas[i]->dibujar();
    }
}

void GarabatoLineas::borrar() {
    for (int i = 0; i < indice; i++) {
        lineas[i]->borrar();
    }
}

void GarabatoLineas::llenar() {
    if (indice < maxLineas) {
        lineas[indice] = new Linea(0, 0);
        lineas[indice]->llenar();
        indice++;
    }
    else {
        cout << "Maximo de lineas alcanzado" << endl;
    }
}
