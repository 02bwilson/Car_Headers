#include "Car.h"
#include "Inventory.h"

#include <iostream>
#include <string>

using namespace std;

int main() {

	Car fordFiesta("123456789", 2012, "Ford", "Fiesta");
	Car chevyTahoe("987654321", 2016, "Cheverolet", "Tahoe");
	Car hondaCivic("634251278", 2019, "Honda", "Civic");
	Car mercurySable("121212122", 2001, "Mercury", "Sable");

	Inventory inventory;


	cout << "Test Acceleration" << endl;
	cout << "-----------------" << endl;

	cout << "Driving: " << fordFiesta.toString() << endl;
	cout << "Current speed: " << fordFiesta.getSpeedInMPH() << endl;

	cout << "Accelerating..." << endl;
	fordFiesta.accelerate();

	cout << "Current speed: " << fordFiesta.getSpeedInMPH() << endl;

	cout << "Decelerating..." << endl;
	fordFiesta.decelerate();

	cout << "Current speed: " << fordFiesta.getSpeedInMPH() << endl;


	cout << endl << endl;


	cout << "Test Inventory" << endl;
	cout << "-----------------" << endl;

	cout << "Adding three cars..." << endl;

	inventory.add(&fordFiesta);
	inventory.add(&chevyTahoe);
	inventory.add(&hondaCivic);

	cout << "Current inventory count: " << inventory.getCount() << endl;

	cout << "Has Ford Festiva  : " << inventory.hasCar(fordFiesta.getVIN()) << endl;
	cout << "Has Chevy Tahoe   : " << inventory.hasCar(chevyTahoe.getVIN()) << endl;
	cout << "Has Honda Civic   : " << inventory.hasCar(hondaCivic.getVIN()) << endl;
	cout << "Has Mercury Sable : " << inventory.hasCar(mercurySable.getVIN()) << endl;

	cout << endl;

	cout << "Trying to add the same car twice..." << endl;

	inventory.add(&fordFiesta);

	cout << "Current inventory count : " << inventory.getCount() << endl;

	cout << endl;

	cout << "Removing Ford Festiva...";
	inventory.remove(fordFiesta.getVIN());
	cout << "Current inventory count: " << inventory.getCount() << endl;
	cout << "Has Ford Festiva       : " << inventory.hasCar(fordFiesta.getVIN()) << endl;


	return 0;

}