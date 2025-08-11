#include<iostream>
#include"ListaHabitaciones.h"
#include"Estadia.h"
#include"ListaEstadias.h"
#include"ListaHabitaciones.h"

using namespace std;

int main()
{
	ListaHabitaciones habitaciones(10);
	ListaEstadias estadias(10);
	int op;


	do
	{
		cout << "Menu" << endl;
		cout << "1. Registrar Habitacion" << endl;
		cout << "2. Mostrar Habitaciones disponibles por tipo" << endl;
		cout << "3. Registrar Estadia" << endl;
		cout << "4. Mostrar Estadias" << endl;
		cout << "5. Agregar habitacion a Estadia" << endl;
		cout << "6. Finalizar estadia" << endl;
		cin >> op;

		switch (op)
		{
		case 1:
			habitaciones.registrarHabitacion();
			break;
		case 2:
			habitaciones.mostrarHabitaciones();
			break;
		case 3:
			estadias.registrarEstadia();
			break;
		case 4:
			estadias.mostrarEstadias();
			break;
		case 5:{
			int numHabitacion;
			cout << "Ingrese el numero de la habitacion: " << endl;
			cin >> numHabitacion;
			int ciEstadia;
			cout << "Ingrese el Ci de la estadia: " << endl;
			cin >> ciEstadia;
			Habitacion* a = habitaciones.buscarHabitacion(numHabitacion);
			Estadia* e = estadias.buscarEstadia(ciEstadia);
			if (a == nullptr)
			{
				cout << "No se encontro la habitacion" << endl;
			}
			else if(e==nullptr)
			{
				cout << "No se encontro la estadia" << endl;
			}
			else
			{
				e->agregarHabitacion(a);
			}
			

			break;
		}
		case 6: {
			int ciEstadia;
			cout << "Ingrese el Ci de la estadia: " << endl;
			cin >> ciEstadia;
			Estadia* e = estadias.buscarEstadia(ciEstadia);
			int total = e->finalizarEstadia();
			cout << "El total de su estadia es de: " << total;

			break;
		}
		default:
			break;
		}

	} while (op!=0);
	return 0;
}