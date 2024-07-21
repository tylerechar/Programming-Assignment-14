#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
    string manufacturer;
    int yearBuilt, doors, towingCapacity;

    cout << "Vehicle:\nEnter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cin.ignore();
    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();

    cout << "\nCar:\nEnter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors: ";
    cin >> doors;
    cin.ignore();
    Car car(manufacturer, yearBuilt, doors);
    car.displayInfo();

    cout << "\nTruck:\nEnter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

    system("pause");
    return 0;
}
