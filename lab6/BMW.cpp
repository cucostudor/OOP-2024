#define _CRT_SECURE_NO_WARNINGS
#include "BMW.h"
#include "Weather.h"
#include <cstring>

BMW::BMW() {
	this->name = new char[] {"BMW"};
	this->fuelCap = 50;
	this->fuelCons[Sunny] = 10;
	this->fuelCons[Rainy] = 15;
	this->fuelCons[Snowy] = 18;

	this->avgSpeed[Sunny] = 29;
	this->avgSpeed[Rainy] = 25;
	this->avgSpeed[Snowy] = 15;
}


int BMW::getFuelCap() { return this->fuelCap; };
int BMW::getFuelCons(Weather weather) {
	return this->fuelCons[weather];
};
int BMW::getAvgSpeed(Weather weather) { return this->avgSpeed[weather]; };
char* BMW::getCarName() { return this->name; };
void BMW::setFuelCap(int Cap) { this->fuelCap = Cap; };
void BMW::setAvgSpeed(Weather weather, int speed) {
	this->avgSpeed[weather] = speed;
};
void BMW::setFuelCons(Weather weather, int Cons) {
	this->fuelCons[weather] = Cons;
};