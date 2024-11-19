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

    // Input function
    void getVehicleInput()
    {
        cout << "Enter vehicle details:" << endl;
        cout << "Model Type: ";
        getline(cin, modelType); // Take model type input
        cout << "Year of Release: ";
        cin >> year;  // Take year input
        cin.ignore(); // Ignore the newline character after reading year
        cout << "Warranty (years): ";
        cin >> warranty; // Take warranty input
        cin.ignore();    // Ignore the newline character after reading warranty
    }

    // Display function
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

    // Input function
    void getInput()
    {
        cout << "Enter car details:" << endl;
        cout << "Model: ";
        getline(cin, model); // Take model input
        cout << "Color: ";
        getline(cin, color); // Take color input
        cin.ignore();
    }

    // Display function
    void display()
    {
        displayVehicleOutput(); // Display parent vehicle details
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

    // Input function
    void getInput()
    {
        cout << "Enter bus details:" << endl;
        cout << "Number of Seats: ";
        cin >> noOfSeats; // Take number of seats input
        cin.ignore();     // Clear the buffer after integer input
        cout << "Size: ";
        getline(cin, size); // Take size input
    }

    // Display function
    void display()
    {
        displayVehicleOutput(); // Display vehicle details
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

    // Input function
    void getInput()
    {
        cout << "Enter truck details:" << endl;
        cout << "Load Capacity (in tons): ";
        cin >> loadCapacity; // Take load capacity input
        cin.ignore();        // Clear the buffer after reading a double
        cout << "Working Condition: ";
        getline(cin, workingCondition); // Take working condition input
    }

    // Display function
    void display()
    {
        displayVehicleOutput(); // Display vehicle details
        cout << "Truck Details:" << endl;
        cout << "Load Capacity: " << loadCapacity << endl;
        cout << "Working Condition: " << workingCondition << endl;
    }
};

int main()
{
    // Create objects
    Vehicle v1;
    Car c1;
    Bus b1;
    Truck t1;

    // Input and display vehicle details
    cout << "Enter details for the vehicle (common for all):" << endl;
    v1.getVehicleInput(); // Input vehicle details once

    cout << "\nCar:" << endl;
    c1.getInput(); // Input car-specific details
    c1.display();  // Display car details

    cout << "\nBus:" << endl;
    b1.getInput(); // Input bus-specific details
    b1.display();  // Display bus details

    cout << "\nTruck:" << endl;
    t1.getInput(); // Input truck-specific details
    t1.display();  // Display truck details

    return 0;
}