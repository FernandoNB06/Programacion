#include "Vehiculo.h"

Vehiculo::Vehiculo(string patente, string marca, string modelo, int kilometraje) {
    this->patente = patente;
    this->marca = marca;
    this->modelo = modelo;
    this->kilometraje = kilometraje;
}

void Vehiculo::registrarDatos() {
    cout << "Marca: ";
    cin >> marca;
    cout << "Modelo (año): ";
    cin >> modelo;
    cout << "Kilometraje: ";
    cin >> kilometraje;
}

void Vehiculo::mostrarDatos() {
    cout << "Patente: " << patente << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Kilometraje: " << kilometraje << " km" << endl;
}

string Vehiculo::getPatente() {
    return patente;
}

Vehiculo::~Vehiculo() {
    
}
