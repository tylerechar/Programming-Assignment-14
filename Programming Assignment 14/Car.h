#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int doors;

public:
    Car(const string &manufacturer, int yearBuilt, int doors);
    int getDoors() const;
    void setDoors(int doors);

    void displayInfo() const;
};
