#include "Inventory.h"
#include "Car.h"
#include <iostream>

using namespace std;


 Inventory::Inventory() {
	 Inventory inventroy[MAX_CARS];
	 Inventory::carCount = 0;

}
// Car return functions to get private attributes 
string Car::getVIN() const {
	return vin;
 }
string Car::getMake() const {
	return make;
}
string Car::getModel() const {
	return model;
}
int Car::getYear() const {
	return year;
}
int Car::getSpeedInMPH() const{
	return speedInMPH;
}

// Inventory return functions to get private attributes 
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

void Inventory::add(Car* car) {
	

	if (carCount >= MAX_CARS) {
		cout << "The car inventory is full!";
	}
	else if (Inventory::hasCar(car->getVIN())) {
		cout << "This car is already in the inventory. It will be ignored. ";
	}
	else {
		Inventory::cars[carCount] = car;
	}



	



	
}

void Car::accelerate() {
	speedInMPH += 5;
}

void Car::decelerate() {
	speedInMPH -= 5;
}

