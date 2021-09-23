#include "Inventory.h"
#include <iostream>

using namespace std;

// Initilizes the inventory 
 Inventory::Inventory() {
	 

	 cars = new Car*[MAX_CARS];
	 
	 carCount = 0;

}

// Inventory return operations to get private attributes 
int Inventory::getCount() const {
	return carCount;
}

// Determines if car vin is already in inventory
bool Inventory::hasCar(string vin) const {
	for (int i = 0; i < carCount; i++) {
		if (vin == cars[i]->getVIN()) {
			return true;
		}
	}
	return false;
}



// Add a car to the inventory
void Inventory::add(Car* car) {
	

	if (carCount >= MAX_CARS) {
		cout << "The car inventory is full! \n";
	}
	else if (hasCar(car->getVIN())) {
		cout << "This car is already in the inventory. It will be ignored. \n";
	}
	else {
		cars[carCount] = car;
		carCount++;
	}



}


// Removes a car from the inventory when the VIN is passed.
void Inventory::remove(string vin) {

	

	if (hasCar(vin)) {
		Car** tempCars;
		tempCars = new Car * [carCount];
		bool vinFound = false;
		for (int i = 0; i < carCount; i++) {
			if (cars[i]->getVIN() == vin) {
				vinFound = true;
			}

			if (!vinFound) {
				tempCars[i] = cars[i];
			}
			else {
				tempCars[i] = cars[i + 1];
			}
			
		}
		// Sets cars to new cars with vin removed. Deincrments carcount
		cars = tempCars;	
		
		carCount--;

	}
	else {
		cout << "This car VIN does not exist in the inventory. \n";
	}
}



// Deletes the car inventory (destructor)
Inventory::~Inventory() {
	delete[] cars;
}

