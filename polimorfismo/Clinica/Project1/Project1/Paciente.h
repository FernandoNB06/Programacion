#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
using namespace std;

class Paciente {
protected:
    string nombre;
    int edad;

public:
    Paciente(string nombre, int edad);
    virtual ~Paciente() {}

    virtual float calcularDescuento() const = 0;

    string getNombre() const;
    int getEdad() const;
};

class PacienteExterno : public Paciente {
public:
    PacienteExterno(string nombre, int edad);
    float calcularDescuento() const override;
};

class PacienteAsegurado : public Paciente {
public:
    PacienteAsegurado(string nombre, int edad);
    float calcularDescuento() const override;
};

#endif
