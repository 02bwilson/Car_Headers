#ifndef INVENTORY_H
#define INVENTORY_H

#include "Car.h"

#include <string>

using namespace std;


class Inventory {
private:

	// The maximum number of cars in the inventory.
	//
	static const int MAX_CARS = 50;

	// An array to store the cars. It holds the inventory.
	//
	Car** cars;

	// The current number of cars in inventory.
	//
	int carCount;

public:

	// This constructor initializes the inventory to be able to hold MAX_CARS and sets the current inventory to
	// zero.
	//
	Inventory();

	// The destructor.
	~Inventory();


	// This operation adds the specified car to the inventory.
	//
	// If the inventory is full, the add request is ignored and an error message is displayed.
	//
	// If the car is already in the inventory (determined by VIN), then the add request is ignored. That is, 
	// the same car cannot be in the inventory twice.
	//
	void add(Car* car);


	// This operation removes the car with the specified VIN from the inventory. If the VIN is not among the 
	// inventory, the request is ignored and an error message is displayed.
	//
	void remove(string vin);


	// This operation returns the current number of cars in inventory.
	//
	int getCount() const;


	// This operation determines if a car with the given VIN is in inventory. If so, the operation returns true,
	// else it returns false.
	//
	bool hasCar(string vin) const;

};


#endif