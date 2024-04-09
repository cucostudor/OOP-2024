#include "Hellcat.h"
#include "Weather.h"

Hellcat::Hellcat() {
	this->name = new char[] {"Hellcat"};
	this->fuelCap = 100;
	this->fuelCons[Sunny] = 10;
	this->fuelCons[Rainy] = 15;
	this->fuelCons[Snowy] = 18;

	this->avgSpeed[Sunny] = 63;
	this->avgSpeed[Rainy] = 50;
	this->avgSpeed[Snowy] = 10;
}

int Hellcat::getFuelCap() { return this->fuelCap; };
int Hellcat::getFuelCons(Weather weather) {
	return this->fuelCons[weather];
};
int Hellcat::getAvgSpeed(Weather weather) { return this->avgSpeed[weather]; };
char* Hellcat::getCarName() { return this->name; };
void Hellcat::setFuelCap(int Cap) { this->fuelCap = Cap; };
void Hellcat::setAvgSpeed(Weather weather, int speed) {
	this->avgSpeed[weather] = speed;
};
void Hellcat::setFuelCons(Weather weather, int Cons) {
	this->fuelCons[weather] = Cons;
};