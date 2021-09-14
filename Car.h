#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;


class Car {
private:

	// The vehicle id.
	//
	string vin;

	// The year, make, and model of the car.
	//
	int    year;
	string make;
	string model;

	// The current speed of the car.
	//
	int    speedInMPH;

public:

	// This constructor initializes the car to have the given year, make, and model, and sets the speed to zero.
	//
	Car(string initVIN, int initYear, string initMake, string initModel);


	// This operation returns the VIN of the car.
	//
	string getVIN() const;


	// This operation returns the year of the car.
	//
	int getYear() const;


	// This operation returns the make of the car.
	//
	string getMake() const;


	// This operation returns the model of the car,
	//
	string getModel() const;


	// This operation returns a string representation of the car of the form "year make model"; for example, 
	// "2018 Toyota Sienna"
	// 
	string toString() const;


	// This operation returns the speed of the car.
	// 
	int getSpeedInMPH() const;


	// This operation increases the speed by 5 mph.
	//
	void accelerate();


	// This operation decreases the speed by 5 mph.
	//
	void decelerate();

};


#endif