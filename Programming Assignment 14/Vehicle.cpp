#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(const string& manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(const string& manufacturer) {
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << "\n";
    cout << "Year Built: " << yearBuilt << "\n";
}
