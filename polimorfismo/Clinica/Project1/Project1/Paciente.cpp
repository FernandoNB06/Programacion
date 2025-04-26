#include "Paciente.h"

Paciente::Paciente(string nombre, int edad) : nombre(nombre), edad(edad) {}

string Paciente::getNombre() const {
    return nombre;
}

int Paciente::getEdad() const {
    return edad;
}

PacienteExterno::PacienteExterno(string nombre, int edad)
    : Paciente(nombre, edad) {
}

float PacienteExterno::calcularDescuento() const {
    if (edad > 80) return 0.50;
    if (edad > 65) return 0.20;
    return 0.0;
}

PacienteAsegurado::PacienteAsegurado(string nombre, int edad)
    : Paciente(nombre, edad) {
}

float PacienteAsegurado::calcularDescuento() const {
    if (edad < 5 || edad > 50) return 0.80;
    return 0.50;
}
