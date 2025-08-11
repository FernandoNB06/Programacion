#pragma once
#include"iostream"
using namespace std;
class Personaje
{
protected:
	int vida;
	int nivel;
	int ataque;
public:
	Personaje(int nivel);
	~Personaje();
	void RecibirAtaque(int danio);
	bool sigueVivo();

};


