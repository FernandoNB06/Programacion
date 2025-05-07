#pragma once
#include<iostream>
using namespace std;

class Persona
{
	
protected:
	int ci;
	string nombre;
	string genero;
public:
	Persona(int ci, string nombre, string genero);
	~Persona();
	void detallePersona();
};

