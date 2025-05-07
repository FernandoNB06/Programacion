#pragma once
#include"iostream"

using namespace std;
class Cliente
{
private:
	int ci;
	string nombre;
public:
	Cliente(int ci,string nombre);
	~Cliente();
	void detalleCliente();
	int getCi();
	
};

