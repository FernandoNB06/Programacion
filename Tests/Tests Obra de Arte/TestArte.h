#pragma once
#include<iostream>
#include"Fotografia.h"
#include"Escultura.h"
#include"Pintura.h"
#include"UnitTests.h"
#include"Exhibicion.h"



// Test individual de Pintura
void testValorPintura() {
    Pintura* p = new Pintura("Atardecer", "Valeria", 2020, "oleo", 100, 80);
    float valor = p->calcularValorEstimado();
    assertEquals(13000.0, valor); // 1000 + (100*80*1.5)
    delete p;
}

//Test Fotografias

void testValorFotografiaColor() {
    Fotografia* f = new Fotografia("Paisaje", "Luis", 2022, true, "1080p");
    assertEquals(650.0, f->calcularValorEstimado());
    delete f;
}

void testValorFotografiaBN() {
    Fotografia* f = new Fotografia("Sombras", "Carlos", 2021, false, "720p");
    assertEquals(500.0, f->calcularValorEstimado());
    delete f;
}

//Test Escultura

void testValorEscultura() {
    Escultura* e = new Escultura("El Pensador", "Rodin", 1904, "marmol", 50);
    assertEquals(2075.0, e->calcularValorEstimado());
    delete e;
}

//Test Exhibicion

void testValorTotalExhibicion() {
    Exhibicion* expo = new Exhibicion("Obras", 10, 4, 5, 2025);
    expo->agregarObra(new Pintura("Atardecer", "Valeria", 2020, "oleo", 100, 80));
    expo->agregarObra(new Escultura("El Pensador", "Rodin", 1904, "marmol", 50));
    expo->agregarObra(new Fotografia("Instante", "Luis", 2022, true, "1080p"));
    assertEquals(15725.0, expo->calcularValorTotal());
    delete expo;
}


void EjecutarPruebas()
{
    testValorPintura();
    testValorFotografiaBN();
    testValorFotografiaColor();
    testValorEscultura();
    testValorTotalExhibicion();
}