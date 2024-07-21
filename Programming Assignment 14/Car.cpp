#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(const string& manufacturer, int yearBuilt, int doors) : Vehicle(manufacturer, yearBuilt), doors(doors) {}

int Car::getDoors() const {
    return doors;
}

void Car::setDoors(int doors) {
    this->doors = doors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Doors: " << doors << "\n";
}
