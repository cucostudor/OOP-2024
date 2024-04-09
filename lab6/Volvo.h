#include "Car.h"
#pragma once

class Volvo : public Car {

public:
	Volvo();
	int getFuelCap() override;
	int getFuelCons(Weather weather) override;
	int getAvgSpeed(Weather weather) override;
	char* getCarName() override;
	void setFuelCap(int capacity) override;
	void setAvgSpeed(Weather weather, int speed) override;
	void setFuelCons(Weather weather, int consumption) override;
};