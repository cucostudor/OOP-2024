#include "MiniCooper.h"
#include "Weather.h"

MiniCooper::MiniCooper() {
	this->name = new char[] {"MiniCooper"};
	this->fuelCap = 100;
	this->fuelCons[Sunny] = 10;
	this->fuelCons[Rainy] = 15;
	this->fuelCons[Snowy] = 18;

	this->avgSpeed[Sunny] = 49;
	this->avgSpeed[Rainy] = 55;
	this->avgSpeed[Snowy] = 45;
}

int MiniCooper::getFuelCap() { return this->fuelCap; };
int MiniCooper::getFuelCons(Weather weather) {
	return this->fuelCons[weather];
};
int MiniCooper::getAvgSpeed(Weather weather) { return this->avgSpeed[weather]; };
char* MiniCooper::getCarName() { return this->name; };
void MiniCooper::setFuelCap(int Cap) { this->fuelCap = Cap; };
void MiniCooper::setAvgSpeed(Weather weather, int speed) {
	this->avgSpeed[weather] = speed;
};
void MiniCooper::setFuelCons(Weather weather, int Cons) {
	this->fuelCons[weather] = Cons;
};