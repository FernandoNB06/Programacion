#include"Avion.h"
#include"ListaAviones.h"
#include"ListaClientes.h"
#include"Cliente.h"
#include"Vuelo.h"
#include"ListaVuelo.h"

#include <iostream>

using namespace std;

int main()
{
	ListaClientes listaC(50);
	ListaAviones listaA(50);
	ListaVuelo listaV(50);
	int op;

	do
	{
		cout << "\n===== MENÚ PRINCIPAL =====\n";
		cout << "1. Registrar Cliente\n";
		cout << "2. Mostrar Clientes\n";
		cout << "3. Registrar Avion\n";
		cout << "4. Mostrar Aviones\n";
		cout << "5. Registrar Vuelo\n";
		cout << "6. Asignar Cliente a Vuelo\n";
		cout << "7. Asignar Avion a Vuelo\n";
		cout << "8. Mostrar Detalle de Vuelo\n";
		cout << "0. Salir\n";
		cout << "Seleccione una opción: ";
		cin >> op;

		switch (op)
		{
		case 1:
			cout << "Registro Cliente" << endl;
			listaC.registrarClientes();
			break;
		case 2:
			cout << "Mostrar Clientes" << endl;
			listaC.mostrarClientes();
			break;
		case 3:
			cout << "Registrar Avion" << endl;
			listaA.registrarAvion();
			break;
		case 4:
			cout << "Mostrar Aviones" << endl;
			listaA.mostrarAviones();
			break;
		case 5:
			cout << "Registrar Vuelo" << endl;
			listaV.registrarVuelo();
			break;
		case 6: {
			cout << "Asignar Cliente a Vuelo" << endl;
			int ciCliente;
			cout << "Ingrese el ci del cliente a buscar" << endl;
			cin >> ciCliente;
			int ciVuelo;
			cout << "Ingrese el Vuelo a buscar: " << endl;
			cin >> ciVuelo;
			Cliente* ClienteBuscado = listaC.buscarCliente(ciCliente);
			Vuelo* VueloEncontrado = listaV.buscarVuelo(ciVuelo);

			if (ClienteBuscado == nullptr)
			{
				cout << "No se econtro al cliente" << endl;
			}
			else
			{
				if (VueloEncontrado == nullptr)
				{
					cout << "No se econtro el Vuelo" << endl;
				}
				else
				{
					VueloEncontrado->asignarPasajeros(ClienteBuscado);
					cout << "Se asigno correctamente" << endl;
				}
			}
			break;
		}
		case 7:
		{
			cout << "Asignar Avion a Vuelo" << endl;
			int capacidadAvion;
			int idVuelo;
			cout << "Ingrese la capacidad del Avion: " << endl;
			cin >> capacidadAvion;
			cout << "Ingrese el ci del Vuelo: " << endl;
			cin >> idVuelo;

			Avion* avionEncontrado = listaA.buscarAvion(capacidadAvion);
			Vuelo* VueloEncontrado2 = listaV.buscarVuelo(idVuelo);

			if (avionEncontrado == nullptr)
			{
				cout << "El avion no fue encontrado" << endl;
			}
			else
			{
				if (VueloEncontrado2 == nullptr)
				{
					cout << "El vuelo no fue encontrado" << endl;
				}
				else
				{
					VueloEncontrado2->asignaAvion(avionEncontrado);
					cout << "Se asigno correctamente" << endl;
				}
			}


			break;
		}
		case 8:
			cout << "Mostrar Detalle de Vuelo" << endl;
			listaV.mostrarVuelos();
			break;

		default:
			break;
		}
	} while (op!=0);
}