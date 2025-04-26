#include <iostream>
#include "Stock.h"
#include "RegistroVentas.h"

using namespace std;

int main() {
    Stock stock(10); 
    RegistroVentas regVentas(10); 

    
    cout << "--- Registro de Vehiculos ---" << endl;
    stock.registrarVehiculo("ABC123", CAMIONETA);
    stock.registrarVehiculo("XYZ789", MOTOCICLETA);
    stock.registrarVehiculo("FERR01", AUTO_DEPORTIVO);
    stock.registrarVehiculo("NISS02", AUTO_NO_DEPORTIVO);

    
    cout << "\n--- Vehiculos Registrados ---" << endl;
    stock.mostrarVehiculos();

    cout << "\n--- Registro de Ventas ---" << endl;
    regVentas.registrarVenta(23000, stock.getVehiculo(0), "Carlos Mendoza");
    regVentas.registrarVenta(10500, stock.getVehiculo(1), "Lucia Torres");
    regVentas.registrarVenta(150000, stock.getVehiculo(2), "Federico Paz");
    regVentas.registrarVenta(22000, stock.getVehiculo(3), "Maria Lopez");

    cout << "\n--- Ventas Registradas ---" << endl;
    regVentas.mostrarVentas();

    return 0;
}
