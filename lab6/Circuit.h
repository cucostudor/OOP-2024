#pragma once

#include "Car.h"
#include "Weather.h"

void sortCars(Car** cars);

class Circuit {

	float RaceCar(int id);
	int length;
	int carCount;
	int vecSize;
	Weather currWeather;
	Car** cars;
	float* finishTime;
	void SortCars();

public:
	Circuit();
	~Circuit();
	void SetLength(int length);
	void SetWeather(Weather weather);
	void Race();
	void ShowFinalRanks();
	void ShowDNF();
	void AddCar(Car* car);
};