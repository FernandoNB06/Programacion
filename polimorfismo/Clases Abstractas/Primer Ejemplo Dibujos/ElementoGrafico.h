#pragma once
#include"Formato.h"
#include<iostream>
using namespace std;

class ElementoGrafico
{
public:
	ElementoGrafico();
	~ElementoGrafico();
	virtual void dibujar() = 0;
	virtual void borrar() = 0;
	virtual void llenar() = 0;
};

