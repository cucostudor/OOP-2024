#include "Volvo.h"
#include "Weather.h"

Volvo::Volvo() {
	this->name = new char[] {"Volvo"};
	this->fuelCap = 100;
	this->fuelCons[Sunny] = 12;
	this->fuelCons[Rainy] = 17;
	this->fuelCons[Snowy] = 20;

	this->avgSpeed[Sunny] = 80;
	this->avgSpeed[Rainy] = 65;
	this->avgSpeed[Snowy] = 50;
}

int Volvo::getFuelCap() { return this->fuelCap; };
int Volvo::getFuelCons(Weather weather) {
	return this->fuelCons[weather];
};
int Volvo::getAvgSpeed(Weather weather) { return this->avgSpeed[weather]; };
char* Volvo::getCarName() { return this->name; };
void Volvo::setFuelCap(int Cap) { this->fuelCap = Cap; };
void Volvo::setAvgSpeed(Weather weather, int speed) {
	this->avgSpeed[weather] = speed;
};
void Volvo::setFuelCons(Weather weather, int Cons) {
	this->fuelCons[weather] = Cons;
};