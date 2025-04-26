#pragma once
#include<iostream>

using namespace std;

class Persona
{
protected:
	string nombre;
	int edad;
public:
	Persona(string nombre, int edad);
	~Persona();
	virtual void mostrar(); //virtual solo va en clase padre
	
};
	

