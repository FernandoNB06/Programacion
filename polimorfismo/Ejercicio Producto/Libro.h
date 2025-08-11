#pragma once
#include "Producto.h"
class Libro :
    public Producto
{
private:
    string autor;

public:
    Libro(string nombre, int precio, string autor);
    float calcularPrecioFinal();
    void mostrarDatos();
};

