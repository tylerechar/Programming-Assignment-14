#pragma once
#include <string>
using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle(const string &manufacturer, int yearBuilt);

    string getManufacturer() const;
    void setManufacturer(const string &manufacturer);
    int getYearBuilt() const;
    void setYearBuilt(int yearBuilt);

    void displayInfo() const;
};
