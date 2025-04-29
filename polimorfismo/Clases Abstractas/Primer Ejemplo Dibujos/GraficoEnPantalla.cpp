#include "GraficoEnPantalla.h"
#include <iostream>
using namespace std;

GraficoEnPantalla::GraficoEnPantalla(int capacidad) {
    this->capacidad = capacidad;
    cantidad = 0;
    elementos = new ElementoGrafico * [capacidad];
}

GraficoEnPantalla::~GraficoEnPantalla() {
    for (int i = 0; i < cantidad; i++) {
        delete elementos[i];
    }
    delete[] elementos;
}

void GraficoEnPantalla::agregarElemento(ElementoGrafico* elem) {
    if (cantidad < capacidad) {
        elementos[cantidad++] = elem;
    }
    else {
        cout << "Capacidad maxima alcanzada." << endl;
    }
}

void GraficoEnPantalla::dibujarTodo() {
    for (int i = 0; i < cantidad; i++) {
        elementos[i]->dibujar();
    }
}
