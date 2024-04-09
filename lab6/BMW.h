#include "Car.h"
#pragma once

class BMW : public Car {

public:
	BMW();
	int getFuelCap() override;
	int getFuelCons(Weather weather) override;
	int getAvgSpeed(Weather weather) override;
	char* getCarName() override;
	void setFuelCap(int Cap) override;
	void setAvgSpeed(Weather weather, int speed) override;
	void setFuelCons(Weather weather, int Cons) override;
};