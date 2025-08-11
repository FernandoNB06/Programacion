#pragma once
#include<iostream>
using namespace std;
class Socio
{
private:
	string nombre;
	int ci;
public:
	Socio(string nombre, int ci);
	~Socio();
	void detalleSocio();
	string getNombre();
	int getCi();
};

