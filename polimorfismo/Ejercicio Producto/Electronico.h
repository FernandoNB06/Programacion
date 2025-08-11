#pragma once
#include "Producto.h"
class Electronico :
    public Producto
{
private:
    int garantiaMeses;
public:
    Electronico(string nombre, int precio, int garantiaMeses);
    ~Electronico();
    float calcularPrecioFinal();
    void mostrarDatos();
};

