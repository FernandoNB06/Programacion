#include "Aerolinea.h"

Aerolinea::Aerolinea(int maxCl, int maxVue, int maxAv) : clientes(maxCl), vuelos(maxVue), aviones(maxAv)
{
}

Aerolinea::~Aerolinea()
{
}

void Aerolinea::agregarClienteVuelo()
{
	int numVuelo, idCliente;
	cout << "Ingresa numero vuelo: "; cin >> numVuelo;
	cout << "Ingresa CI cliente: "; cin >> idCliente;
	Cliente* cliente = clientes.buscarCliente(idCliente);
	Vuelo* vuelo = vuelos.buscarVuelo(numVuelo);
	if (cliente == nullptr)
		cout << "Cliente no registrado" << endl;
	else {
		if (vuelo == nullptr)
			cout << "Vuelo no encontrado" << endl;
		else {
			vuelo->agregarPasajero(cliente);
		}
	}
}

void Aerolinea::asignarAvionVuelo()
{
	int numVuelo, capacidad;
	cout << "Ingresa numero vuelo: "; cin >> numVuelo;
	cout << "Ingresa capacidad vuelo: "; cin >> capacidad;
	Avion* avion = aviones.buscarAvion(capacidad);
	Vuelo* vuelo = vuelos.buscarVuelo(numVuelo);
	if (avion == nullptr)
		cout << "Avion con esta capacidad no disponible" << endl;
	else {
		if (vuelo == nullptr)
			cout << "Vuelo no encontrado" << endl;
		else {
			vuelo->asignarAvion(avion);
		}
	}
}

void Aerolinea::menu()
{
	int op;
	do {
		cout << "BIENVENIDO; ELIJA UNA OPCION" << endl;
		cout << "1.Registrar Cliente" << endl;
		cout << "2.Registrar Vuelo" << endl;
		cout << "3.Registrar Avion" << endl;
		cout << "4.Mostrar Clientes" << endl;
		cout << "5.Mostrar Aviones" << endl;
		cout << "6.Mostrar Vuelos" << endl;
		cout << "7.Agregar Cliente a Vuelo" << endl;
		cout << "8.Asignar Avion a Vuelo" << endl;
		cout << "9.Salir" << endl;
		cin >> op;
		switch (op)
		{
		case(1):
			clientes.registrarCliente();
			break;
		case(2):
			vuelos.registrarVuelo();
			break;
		case(3):
			aviones.registrarAvion();
			break;
		case(4):
			clientes.mostrarListaClientes();
			break;
		case(5):
			aviones.mostrarAvionesRegistrados();
			break;
		case(6):
			vuelos.mostrarVuelos();
			break;
		case(7):
			agregarClienteVuelo();
			break;
		case(8):
			asignarAvionVuelo();
			break;
		}
	} while (op != 9);
}
