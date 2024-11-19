#include <iostream>
#include <string>

using namespace std;

// Parent class: Vehicle
class Vehicle
{
public:
    string modelType;
    int year;
    int warranty;

    // Input function for vehicle (called only once)
    void getVehicleInput()
    {
        cout << "Enter vehicle details (common for all):" << endl;
        cout << "Model Type: ";
        getline(cin, modelType); // Take model type input
        cout << "Year of Release: ";
        cin >> year;  // Take year input
        cin.ignore(); // Ignore newline character
        cout << "Warranty (years): ";
        cin >> warranty; // Take warranty input
        cin.ignore();    // Ignore newline character
    }

    // Display function for vehicle
    void displayVehicleOutput()
    {
        cout << "Vehicle Details:" << endl;
        cout << "Model Type: " << modelType << endl;
        cout << "Year of Release: " << year << endl;
        cout << "Warranty (years): " << warranty << endl;
    }
};

// Child class: Car
class Car : public Vehicle
{
public:
    string model;
    string color;

    // Input function for car-specific attributes
    void getInput()
    {
        cout << "Enter car-specific details:" << endl;
        cout << "Model: ";
        getline(cin, model); // Take model input
        cout << "Color: ";
        getline(cin, color); // Take color input
    }

    // Display function for car-specific attributes
    void display()
    {
        displayVehicleOutput(); // Display parent class data
        cout << "Car Details:" << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
    }
};

// Child class: Bus
class Bus : public Vehicle
{
public:
    int noOfSeats;
    string size;

    // Input function for bus-specific attributes
    void getInput()
    {
        cout << "Enter bus-specific details:" << endl;
        cout << "Number of Seats: ";
        cin >> noOfSeats; // Take number of seats input
        cin.ignore();     // Clear buffer
        cout << "Size: ";
        getline(cin, size); // Take size input
    }

    // Display function for bus-specific attributes
    void display()
    {
        displayVehicleOutput(); // Display parent class data
        cout << "Bus Details:" << endl;
        cout << "Number of Seats: " << noOfSeats << endl;
        cout << "Size: " << size << endl;
    }
};

// Child class: Truck
class Truck : public Vehicle
{
public:
    double loadCapacity;
    string workingCondition;

    // Input function for truck-specific attributes
    void getInput()
    {
        cout << "Enter truck-specific details:" << endl;
        cout << "Load Capacity (in tons): ";
        cin >> loadCapacity; // Take load capacity input
        cin.ignore();        // Clear buffer
        cout << "Working Condition: ";
        getline(cin, workingCondition); // Take working condition input
    }

    // Display function for truck-specific attributes
    void display()
    {
        displayVehicleOutput(); // Display parent class data
        cout << "Truck Details:" << endl;
        cout << "Load Capacity: " << loadCapacity << " tons" << endl;
        cout << "Working Condition: " << workingCondition << endl;
    }
};

int main()
{
    // Create child class objects
    Car c1;
    Bus b1;
    Truck t1;

    // Take input for parent class only once
    c1.getVehicleInput(); // Input shared vehicle details

    cout << "\nCar:" << endl;
    c1.getInput(); // Input car-specific details
    c1.display();  // Display car details

    cout << "\nBus:" << endl;
    b1.modelType = c1.modelType; // Share parent attributes
    b1.year = c1.year;
    b1.warranty = c1.warranty;
    b1.getInput(); // Input bus-specific details
    b1.display();  // Display bus details

    cout << "\nTruck:" << endl;
    t1.modelType = c1.modelType; // Share parent attributes
    t1.year = c1.year;
    t1.warranty = c1.warranty;
    t1.getInput(); // Input truck-specific details
    t1.display();  // Display truck details

    return 0;
}
