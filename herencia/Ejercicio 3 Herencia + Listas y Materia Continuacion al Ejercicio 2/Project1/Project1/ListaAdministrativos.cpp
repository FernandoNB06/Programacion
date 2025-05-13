#include "ListaAdministrativos.h"

ListaAdministrativos::ListaAdministrativos(int maxAdministrativos)
{
	this->indice = 0;
	this->maxAdministrativos = maxAdministrativos;
	listaAdministartivos = new Administrativo * [maxAdministrativos];
}

ListaAdministrativos::~ListaAdministrativos()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaAdministartivos[i];
	}
	delete[] listaAdministartivos;
}

void ListaAdministrativos::mostrarAdministrativos()
{
	for (int i = 0;i < indice;i++)
	{
		listaAdministartivos[i]->detalleAdministrativo();
	}
}

void ListaAdministrativos::registrarAdministrativo()
{
	int ci; string nombre; string genero; float salario; string departamento; string cargo;
	cout << "ci: " << endl;
	cin >> ci;
	cout << "nombre: " << endl;
	cin >> nombre;
	cout << "genero: " << endl;
	cin >> genero;
	cout << "salario: " << endl;
	cin >> salario;
	cout << "deparatamento: " << endl;
	cin >> departamento;
	cout << "cargo: " << endl;
	cin >> cargo;

	listaAdministartivos[indice] = new Administrativo(ci, nombre, genero,salario,departamento,cargo);
	indice++;
	
}
