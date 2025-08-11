#include<iostream>
#include"UnitTests.h"
#include"BackAcount.h"

using namespace std;

//Caso 
void testRetirar50de1000()
{
	BackAcount *b = new BackAcount(1000);
	double valor = b->retiroSaldo(50);
	assertEquals(950, b->getSaldo());
}

//Casos Both

void testRetirar4000de1000()
{
	BackAcount* b = new BackAcount(1000);
	double valor = b->retiroSaldo(4000);
	assertEquals(-3000, b->getSaldo());
}

void testRetirarMenos100de1000()
{
	BackAcount* b = new BackAcount(1000);
	double valor = b->retiroSaldo(-100);
	assertEquals(1100, b->getSaldo());
}

void testRetirar0de1000()
{
	BackAcount* b = new BackAcount(1000);
	double valor = b->retiroSaldo(0);
	assertEquals(1000, b->getSaldo());
}

int dividir(int a, int b)
{
	if (b > 0)
	{
		return a / b;
	}
	else
	{
		throw "Error: No divisible entre cero"; //Lanca
	}
}

int main()
{
	testRetirar50de1000();
	//testRetirar4000de1000();
	//testRetirarMenos100de1000();
	//testRetirar0de1000();

	try
	{
		dividir(10, 0);
	}
	catch (const char* mensaje) //Siempre se manda como puntero o referencia
	{
		cout << "Se capturo una excepcion " << mensaje;
	}

	try
	{
		BackAcount cuenta(1000);
		cuenta.retiroSaldo(44400);//o 44400 o -100
	}
	catch (const invalid_argument& e)
	{
		cout << "Error de argument: " << e.what() << endl;
	}

	catch (const runtime_error& e)
	{
		cout << "Error en tiempo de ejecucion " << e.what() << endl;
	}
	
}