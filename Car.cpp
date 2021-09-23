#include "Car.h"
#include <iostream>

using namespace std; 


// Car return operations to get private attributes 
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
int Car::getSpeedInMPH() const {
	return speedInMPH;
}

// Prints human-readable car info
string Car::toString() const {
	return to_string(year) + " " + make + " " + model;
}
// initilizes a car
Car::Car(string initVIN, int initYear, string initMake, string initModel) {
	vin = initVIN;
	year = initYear;
	make = initMake;
	model = initModel;
	speedInMPH = 0;

}

// Increases speed by 5 MPH
void Car::accelerate() {
	speedInMPH += 5;
}
// Decreases speed by 5 MPH
void Car::decelerate() {
	speedInMPH -= 5;
}