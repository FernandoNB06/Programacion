#pragma once
#include <iostream>
using namespace std;

enum TipoVehiculo {
    MOTOCICLETA, CAMIONETA, AUTO_DEPORTIVO, AUTO_NO_DEPORTIVO
};

class Vehiculo {
protected:
    string patente;
    string marca;
    string modelo;
    int kilometraje;

public:
    Vehiculo(string patente, string marca, string modelo, int kilometraje);

    virtual void registrarDatos();   
    virtual void mostrarDatos();    

    string getPatente();
    virtual ~Vehiculo();
};
