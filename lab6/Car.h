#pragma once
#include "Weather.h"

class Car {
protected:
    int fuelCap, fuelCons[3], avgSpeed[3];
    char* name;

public:
    virtual ~Car() {
        if (this->name != nullptr)
            delete this->name;
    };
    virtual int getFuelCap() = 0;
    virtual int getFuelCons(Weather weather) = 0;
    virtual int getAvgSpeed(Weather weather) = 0;
    virtual void setFuelCap(int capacity) = 0;
    virtual void setFuelCons(Weather weather, int consumption) = 0;
    virtual void setAvgSpeed(Weather weather, int speed) = 0;
    virtual char* getCarName() { return this->name; };
};