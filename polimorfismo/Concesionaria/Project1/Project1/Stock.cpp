#include "Stock.h"
#include <iostream>
using namespace std;

Stock::Stock(int maxVehiculos) {
    this->maxVehiculos = maxVehiculos;
    this->indice = 0;
    vehiculos = new Vehiculo * [maxVehiculos];
}

Stock::~Stock() {
    for (int i = 0; i < indice; i++) {
        delete vehiculos[i];
    }
    delete[] vehiculos;
}

void Stock::registrarVehiculo(string patente, TipoVehiculo tipo) {
    if (indice < maxVehiculos) {
        string marca, modelo;
        int kilometraje;
        string extra;

        cout << "Marca: ";
        cin >> marca;
        cout << "Modelo (anio): ";
        cin >> modelo;
        cout << "Kilometraje: ";
        cin >> kilometraje;

        switch (tipo) {
        case MOTOCICLETA:
            cout << "Tipo (carretera o campo): ";
            cin >> extra;
            vehiculos[indice] = new Motocicleta(patente, marca, modelo, kilometraje, extra);
            break;
        case CAMIONETA:
            int capacidad;
            cout << "Capacidad de carga (kg): ";
            cin >> capacidad;
            vehiculos[indice] = new Camioneta(patente, marca, modelo, kilometraje, capacidad);
            break;
        case AUTO_DEPORTIVO:
            cout << "Pais de origen: ";
            cin >> extra;
            vehiculos[indice] = new AutoDeportivo(patente, marca, modelo, kilometraje, extra);
            break;
        case AUTO_NO_DEPORTIVO:
            cout << "Fecha de importacion: ";
            cin >> extra;
            vehiculos[indice] = new AutoNoDeportivo(patente, marca, modelo, kilometraje, extra);
            break;
        }
        indice++;
    }
    else {
        cout << "Se alcanzo el máximo de vehiculos registrados." << endl;
    }
}

void Stock::mostrarVehiculos() {
    for (int i = 0; i < indice; i++) {
        vehiculos[i]->mostrarDatos();
        cout << endl;
    }
}

Vehiculo* Stock::getVehiculo(int i) {
    if (i >= 0 && i < indice) return vehiculos[i];
    return nullptr;
}

int Stock::getCantidad() {
    return indice;
}
